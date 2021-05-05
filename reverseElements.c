# include <stdio.h>
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10,0,12,34,56,78,9};
     int n = sizeof(array)/sizeof(array[0]);
    printf("Print  reverse All  Elements : ");
    printf("{ ");
    int lpointer=0,rpointer=n-1;
    while(lpointer < rpointer){
        int temp=array[lpointer];
        array[lpointer]=array[rpointer];
        array[rpointer]=temp;
        lpointer++;
        rpointer--;

    }
    for(int index =0; index<n; index++){
        printf("%d", array[index]);
        if(index<n-1)
        printf(" , ");

    }
    printf( " } \n " );
    return 0;
}

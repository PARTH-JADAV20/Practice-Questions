#include <stdio.h>

int main() {
    int array[]={4,2,8,5,1};
    int len=sizeof(array)/sizeof(array[0]);
    int temp=0;
    int i,j;
    for (i=0;i<len;i++){
        for(j=0;j<len-1;j++){
            if (array[j]>array[j+1]){
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    for (i=0;i<len;i++){
        printf("%d",array[i]);
    }
    

    return 0;
}
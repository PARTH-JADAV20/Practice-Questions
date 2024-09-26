#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count;
    int i;
    for (i=0;i<len;i++){
        if(arr[i]<0){
            count++;
        }
    }
    if(count<=0){
        printf("Positive Array");
    }else{
        printf("Negative Array");
    }

    return 0;
};
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count;
    int i;
    for (i=0;i<len-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(count==0){
        printf("true");
    }else {
        printf("false");
    }

    return 0;
};
#include <stdio.h>

int main() {
    int arr[]={1,2,3,4};
    int addnum=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i=0;i<len;i++){
        arr[len-i]=arr[len-i-1];
    }
    arr[0]=0;
    for (i=0;i<=len;i++){
        printf("%d",arr[i]);
    }

    return 0;
};
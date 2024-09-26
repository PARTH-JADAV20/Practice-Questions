#include <stdio.h>

int main() {
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i=0;i<len;i=i+2){
        printf("%d\n",arr[i]);
    }

    return 0;
};
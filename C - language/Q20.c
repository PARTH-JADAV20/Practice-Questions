#include <stdio.h>

int main() {
    int arr[]={80,30,70,50,20};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int min=arr[0];
    int i,j;
    for (i=0;i<len;i++){
         if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d\n",max-min);

    return 0;
}
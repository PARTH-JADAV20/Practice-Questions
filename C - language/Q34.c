#include <stdio.h>

int firstlast(int arr[],int len){
    printf("first element is: %d\n",arr[0]);
    printf("last element is: %d\n",arr[len-1]);
}

int main() {
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    firstlast(arr,len);
    
    return 0;
}
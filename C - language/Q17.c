#include <stdio.h>

int main() {
    int arr[]={1,-2,3,-4,5,-6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count;
    int i;
    for (i=0;i<len;i++){
        if(arr[i]<0){
            count++;
        }
    }
    printf("Positve:%d\n",len-count);
    printf("Negative:%d",count);

    return 0;
};
#include <stdio.h>
#include <string.h>


int main() {
    int srt=1;
    int end=5;
    int arr[50]={};
    int i;
    
    for (i=srt;i<=end;i++){
        arr[i]=i;
        printf("%d\n",arr[i]);
    }
    
    return 0;
}
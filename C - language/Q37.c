#include <stdio.h>


int main() {
    int arr[]={5,7,7,8,8,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int tgt=8;
    int fcount;
    int lcount;
    int i;
    
    for (i=0;i<len;i++){
        if (arr[i]==tgt){
            lcount=i;
        }
    }
    for (i=0;i<len;i++){
        if (arr[i]==tgt){
            fcount=i;
            break;
        }
    }
    printf("Starting position: %d\n",fcount);
    printf("Ending position: %d",lcount);
    return 0;
}
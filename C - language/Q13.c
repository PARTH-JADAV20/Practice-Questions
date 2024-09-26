#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int findnum=3;
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,count;
    for (i=0;i<len;i++){
        if (arr[i]==findnum){
            count=count+1;
        }
    }
    if (count>0){
        printf("true");
    }else {
        printf("false");
    }

    return 0;
};
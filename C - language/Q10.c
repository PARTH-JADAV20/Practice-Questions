#include <stdio.h>

int main() {
    int array[5]={1,2,3,4,5};
    int even;
    int odd;
    int len=sizeof(array)/sizeof(array[0]);
    int i;
    for (i=0;i<len;i++){
        if (array[i]%2==0){
            even=even+1;
        }else {
            odd=odd+1;
        }
    }
    printf("Even:%d  Odd:%d",even,odd);
    return 0;
}
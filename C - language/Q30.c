#include <stdio.h>

int main() {
    int n=132456;
    int len=0;
    int num=n;
    int i;
    int ecount=0;
    int ocount=0;
    
    for (i=0;n!=0;i++){
        n/=10;
        len++;
    }
    for (i=0;i<len;i++){
        int digit=num%10;
        num=(num-digit)/10;
        if (digit%2==0){
            ecount++;
        }else{
            ocount++;
        }
    }
    printf("Even count:%d\n",ecount);
    
    printf("Odd count:%d",ocount);
    
    
}
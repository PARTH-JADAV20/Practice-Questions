#include <stdio.h>

int main() {
    char str[]="hello";
    int i,count=0;
    
    while(str[i]!='\0'){
        count++;
        i++;
    }
    
    printf("Length of string is:%d",count);
    return 0;
}
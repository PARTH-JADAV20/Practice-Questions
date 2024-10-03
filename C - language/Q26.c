#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Codinggita";
    char find='a';
    int len=strlen(str);
    
    if(str[len-1]==find){
        printf("true");
    }else {;
        printf("false");
    }
    
    return 0;
}

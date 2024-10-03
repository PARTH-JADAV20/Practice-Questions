#include <stdio.h>
#include <string.h>

int main() {
    char str[]=" hello ";
    int i;
    
    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            continue;
        }
        printf("%c",str[i]);
    }
    
    return 0;
}
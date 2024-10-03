#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "document.pdf";
    int len=strlen(str);
    int i=0;
    int index;
    for(i=0;i<len;i++){
        if(str[i]=='.'){
            index=i;
        }
    }
    for (i=index;i<len;i++){
        printf("%c",str[i]);
    }
    
    
    return 0;
}

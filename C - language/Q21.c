#include <stdio.h>
#include <string.h>

int main() {
    char str[]="hello";
    int i;
    for (i=0;i<strlen(str);i++){
        str[i]=str[i]-32;
    }
    printf("%s",str);

    return 0;
}

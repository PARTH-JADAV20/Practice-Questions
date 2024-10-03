#include <stdio.h>
#include <string.h>

int main() {
    char str[100]="hello";
    char str2[50]="";
    int times=3;
    int i;
    
    for(i=1;i<=3;i++){
        strcat(str2,str);
    }
    printf("%s",str2);
}

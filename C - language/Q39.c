#include <stdio.h>
#include <string.h>


int main() {
    char str[]="{[(])}";
    int len=strlen(str);
    int pcount=0;
    int scount=0;
    int ccount=0;
    int i,j;
    
    for (i=0;i<len;i++){
        for (j=i;j<len;j++){
            if (str[i]=='(' && str[j]==')'){
                pcount++;
            }
            else if (str[i]=='[' && str[j]==']'){
                scount++;
            }
            else if (str[i]=='{' && str[j]=='}'){
                ccount++;
            }
        }
    }
    if (pcount>0){
        printf(" ( has proper ) closing bracket\n");
    }if (scount>0){
        printf(" [ has proper ] closing bracket\n");
    }if (ccount>0){
        printf(" { has proper } closing bracket");
    }
    
    return 0;
}
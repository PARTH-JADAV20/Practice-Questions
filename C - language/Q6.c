#include <stdio.h>
#include <string.h>

int main() {
    char username[]="admin";
    int pass=1234;
    
    if (strcmp(username,"admin")==0 && pass==1234){
        printf("login successful");
    }else {
        printf("login failed");
    }

    return 0;
}

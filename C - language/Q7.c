#include <stdio.h>
#include <string.h>

int main() {
    char light[]="red";
    
    if (strcmp(light,"red")==0){
        printf("Stop");
    }else if(strcmp(light,"yellow")==0){
        printf("Slow down");
    }else if(strcmp(light,"green")==0){
        printf("Go");
    }

    return 0;
}
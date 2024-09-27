#include <stdio.h>

int main() {
    int number=80;
    
    if (number>0){
        printf("Positive");
    }else if(number<0){
        printf("Negative");
    }else {
        printf("Zero");
    }

    return 0;
}
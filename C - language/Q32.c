#include <stdio.h>

int main() {
    int age=61;
    
    if(age<13){
        printf("Child");
    }else if(age>=13 && age<=19){
        printf("Teenager");
    }else if(age>=20 && age<=50){
        printf("Adult");
    }else if(age>=60){
        printf("Senior");
    }
    return 0;
}
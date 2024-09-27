#include <stdio.h>

int main() {
    int s1=10;
    int s2=20;
    int s3=10;
    
    if (s1==s2 && s2==s3){
        printf("Equilteral");
    }else if (s1==s2 || s2==s3 || s1==s3){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }

    return 0;
}

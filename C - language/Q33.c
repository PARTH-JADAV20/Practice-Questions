#include <stdio.h>

char *isCenturyYear(int year){
    if (year%100==0){
        return "The year is century year";
    }else {
        return "The year is not century year";
    }
}

int main() {
    int year=2100;
    printf(isCenturyYear(year));
    
    return 0;
}
#include <stdio.h>

int main() {
    int array[]={1,2,3,4,5};
    int len=sizeof(array)/sizeof(array[0]);
    array[len]=6;
    int i;
    for (i=0;i<=len;i++){
        printf("%d",array[i]);
    }
    array[len] = '\0';
    return 0;
}

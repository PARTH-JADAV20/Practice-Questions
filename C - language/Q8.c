#include <stdio.h>
#include <string.h>

int main() {
    int array[]={1,2,3,4,5};
    int len=sizeof(array)/sizeof(array[0]);
    int sum=0;
    int i;
    for (i=0;i<len;i++){
        sum=sum+array[i];
    }
    printf("Average of array is :%d",sum/len);

    return 0;
}
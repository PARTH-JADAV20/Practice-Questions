          *   
        *   *   
      *   *   *   
    *   *   *   *   
  *   *   *   *   *   
*   *   *   *   *   * 

#include <stdio.h>


int main() {
    char sign='*';
    int rows=6;
    int i,j;
    
    for (i=1;i<=rows;i++){
        for (j=0;j<rows-i;j++){
            printf("  ");
        }
        for (j=0;j<i;j++){
            printf("%c   ",sign);
        }printf("\n");
    }
    
    return 0;
}



  *   *   *   *   *   *   
    *   *   *   *   *   
      *   *   *   *   
        *   *   *   
          *   *   
            *   

#include <stdio.h>


int main() {
    char sign='*';
    int rows=6;
    int i,j;
    
    for (i=1;i<=rows;i++){
        for (j=0;j<i;j++){
            printf("  ");
        }
        for (j=0;j<=rows-i;j++){
            printf("%c   ",sign);
        }printf("\n");
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    int array[7] = {1, 2, 2, 3, 4, 4, 5};
    int len1 = sizeof(array) / sizeof(array[0]);

    int array2[5] = {};
    int len2 = 0;
    int i;
    int j;

    for (i = 0; i < len1; i++) {
        int isDuplicate = 0; 
        for (j = 0; j < len2; j++) {
            if (array[i] == array2[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate==0) {
            array2[len2] = array[i];
            len2++;
        }
    }

    for (i = 0; i < len2; i++) {
        printf("%d ", array2[i]);
    }

    return 0;
}


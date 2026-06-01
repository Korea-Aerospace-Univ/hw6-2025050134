#include <stdio.h>

int main() {
    char arr[10];
    char *p = arr;
    
    for (p = arr; p < arr + 10; p++) {
        scanf("%c", p); 
    }
    
    char max_char = arr[0];
    int max_count = 0;
    
    for (p = arr; p < arr + 10; p++) {
        int current_count = 0;
        
        for (char *q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                current_count++;
            }
        }
        
        if (current_count > max_count) {
            max_count = current_count;
            max_char = *p;
        }
    }
    
    printf("%c %d\n", max_char, max_count);
    
    return 0;
}

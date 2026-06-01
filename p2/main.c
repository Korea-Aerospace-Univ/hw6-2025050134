#include <stdio.h>

int main() {
    int N;
    int arr1[20];
    int arr2[20];
    
    scanf("%d", &N);
    
    for (int *p = arr1; p < arr1 + N; p++) {
        scanf("%d", p);
    }
    
    for (int *p = arr2; p < arr2 + N; p++) {
        scanf("%d", p);
    }
    
    int *p1 = arr1;          
    int *p2 = arr2 + N - 1;  
    
    for (int i = 0; i < N; i++) {
        printf("%d", *p1 + *p2);
        
        p1++;
        p2--;
    }
    printf("\n");
    
    return 0;
}

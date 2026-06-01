#include <stdio.h>

int main() {
    int N;
    int arr1[25]; // N의 최대 범위(20)를 고려하여 여유 있게 크기 25로 선언
    int arr2[25];
    
    // 정수 N 입력 받기
    scanf("%d", &N);
    
    // 포인터 p를 사용하여 첫 번째 배열에 N개의 정수 입력 및 저장
    for (int *p = arr1; p < arr1 + N; p++) {
        scanf("%d", p);
    }
    
    // 포인터 p를 사용하여 두 번째 배열에 N개의 정수 입력 및 저장
    for (int *p = arr2; p < arr2 + N; p++) {
        scanf("%d", p);
    }
    
    // 역방향 매칭 및 계산을 위한 포인터 설정
    int *p1 = arr1;          // p1은 첫 번째 배열의 맨 앞(정방향)
    int *p2 = arr2 + N - 1;  // p2는 두 번째 배열의 맨 뒤(역방향)
    
    // N번 반복하며 역방향으로 원소들을 더해 출력
    for (int i = 0; i < N; i++) {
        // 주의사항) 출력 시 공백이 먼저 출력되는 " %d" 형태 준수
        printf(" %d", *p1 + *p2);
        
        // p1은 앞으로 한 칸 전진, p2는 뒤로 한 칸 후진
        p1++;
        p2--;
    }
    // 출력 예시와 동일하게 줄바꿈으로 마무리
    printf("\n");
    
    return 0;
}

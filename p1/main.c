#include <stdio.h>

int main() {
    char arr[10];       // 문자 10개 저장할 배열 선언
    char *p = arr;      // 배열 시작 주소를 포인터 p에 연결
    
    // 포인터 p를 이동시키면서 주소값에 직접 문자 10개 입력받음
    for (p = arr; p < arr + 10; p++) {
        scanf("%c", p); 
    }
    
    // 최다 빈도 문자와 개수 저장할 변수 초기화
    char max_char = arr[0];
    int max_count = 0;
    
    // 바깥 for문: 기준 문자를 가리키는 포인터 p를 배열 처음부터 끝까지 이동
    for (p = arr; p < arr + 10; p++) {
        int current_count = 0; // 기준 문자(*p)의 개수를 세기 위한 카운터
        
        // 안쪽 for문: 힌트대로 포인터 q를 새로 선언해서 배열 전체를 처음부터 탐색
        for (char *q = arr; q < arr + 10; q++) {
            // 기준 포인터의 값(*p)과 탐색 포인터의 값(*q)이 같으면 카운트 증가
            if (*p == *q) {
                current_count++; 
            }
        }
        
        // 빈도수가 기존 최댓값보다 '큰' 경우에만 업데이트함
        // 이렇게 하면 빈도수가 같을 때 배열에서 먼저 나타난 문자가 그대로 유지됨
        if (current_count > max_count) {
            max_count = current_count; // 최다 빈도수 갱신
            max_char = *p;             // 최다 빈도 문자 갱신
        }
    }
    
    // 최종 도출된 최다 빈도 문자와 개수를 형식에 맞춰 출력
    printf("%c %d\n", max_char, max_count);
    
    return 0;
}

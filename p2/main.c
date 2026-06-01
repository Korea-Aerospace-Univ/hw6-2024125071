#include <stdio.h>

int main(void)
{
    int N;                      // 정수의 개수 변수 선언
    int arr1[20], arr2[20];     // 크기가 20인 배열 두 개 선언
    int *p = arr1;              // 포인터 선언 후 첫번째 배열과 연결
    int *q = arr2;              // 포인터 선언 후 두번째 배열과 연결
    scanf("%d", &N);            // 정수의 개수 입력 받음
    
    
    for(p = arr1; p < arr1 + N; p++){      // 첫번째 배열에 정수를 N개 입력 받음
        scanf("%d", p);
    }
    for(q = arr2; q < arr2 + N; q++){      // 두번째 배열에 정수를 N개 입력 받음
        scanf("%d", q);
    }
    
    int *p2 = arr1;                // 새로운 포인터 선언 후 첫번째 배열과 연결
    int *q2 = arr2 + N - 1;        // 새로운 포인터 선언 후 두번째 배열(마지막 인덱스)과 연결
    for(int i = 0; i < N; i++){    // 반복문을 사용해 첫번째 배열은 0번째 인덱스 원소부터, 두번째 배열은 N-1번째 인덱스 원소부터 더하여 출력
        printf("%d ",*p2 + *q2);
        p2++;
        q2--;
    }

    return 0;
}

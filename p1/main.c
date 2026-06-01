#include <stdio.h>

int main()
{
    char arr[10];                         // 크기 10 문자형 배열 선언
    int max_count = 0, count = 0;         // 최대 빈도수와, 각 영문자의 빈도수를 확인할 변수 선언
    char max;                             // 빈도수가 제일 큰 영문자 변수 선언
    char *p;                              // 포인터 선언
    char *q;                              // 포인터 선언
    
    for(p = arr; p < arr + 10; p++){      // 10개의 영문자 입력
        scanf("%c", p);
    }
    
    for(p = arr; p < arr + 10; p++){      // 배열 크기만큼 반복
        for(q = arr; q < arr + 10; q++){  // 배열 크기만큼 반복
            if(*p == *q) count++;         // 첫번째 영문자와 같으면 빈도수에 + 1
        }
        if(count > max_count){          // 루프를 돌고있는 영문자의 빈도수가 최대 빈도수보다 크면
            max_count = count;          // 최대 빈도수 변수에 빈도수 삽입
            max = *p;                   // max 변수에 최대 빈도수 영문자 삽입
        }
        count = 0;                      // 빈도수 초기화
    }
    
    printf("%c %d", max, max_count);    // 빈도수가 가장 큰 영문자와 빈도수 출력
    
    return 0;
}

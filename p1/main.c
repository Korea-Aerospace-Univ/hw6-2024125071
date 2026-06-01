#include <stdio.h>

int main()
{
    char arr[10]; 
    int max_count = 0, count = 0;
    char max;
    char *p;
    char *q;
    
    for(p = arr; p < arr + 10; p++){
        scanf("%c", p);
    }
    
    for(p = arr; p < arr + 10; p++){
        for(q = arr; q < arr + 10; q++){
            if(*p == *q) count++;
        }
        if(count > max_count){
            max_count = count;
            max = *p;
        }
        count = 0;
    }
    
    printf("%c %d", max, max_count);
    
    return 0;
}

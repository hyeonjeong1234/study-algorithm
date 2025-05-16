#include<stdlib.h>
#include<stdio.h>

int main()
{
    int N, i = 1;
    scanf("%d", &N);
    while (1)
    {
        if (N == 1) {
            printf("1");
            break;
        }
        else if (2 + 5 >= N)
        {
            printf("2");
            break;
        }
        else if (2 + 5 + 6 * i >= N)
        {
            printf("%d", 2 + i);
            break;
        }
        else if (2 + 5 + 6 * i < N)
        {
            i++;
        }
    }
    return 0;
}
//벌집 라인별 크기 1, 2~7(5), 8~19(11), ---
// 13 이면 1, 4, 13 3개 지남
// 1 -> 2+5> N 이면 count++;->2+5+6*1<=N면 종료 아니면 계속 반복;;
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
//���� ���κ� ũ�� 1, 2~7(5), 8~19(11), ---
// 13 �̸� 1, 4, 13 3�� ����
// 1 -> 2+5> N �̸� count++;->2+5+6*1<=N�� ���� �ƴϸ� ��� �ݺ�;;
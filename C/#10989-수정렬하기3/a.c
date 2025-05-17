#include<stdlib.h>
#include<stdio.h>

int main()
{
    int N, arr[10000001];
    scanf("%d",&N);
    for(int i = 0; i<N;i++)
    {
        int num;
        scanf("%d",&num);
        arr[i] = num;
        if(i !=0)
        {
            for(int j = 0;j<i)
            {
                if(num<=arr[j])
                {
                    int tmp;
                    tmp = arr[j];
                    arr[j] = num;
                    arr[i] = tmp;
                }
            }
        }
    }
    for(int i = 0;i<N;i++)
    {
        printf("%d\n",arr[i]);
    }
}

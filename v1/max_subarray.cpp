#include<stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int array[6] = {-5,-10,-15,-20,50-30};
    int best = 0, sum = 0;
    int n = 6;
    for (int k = 0; k < n; k++)
    {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    printf("%d\t%d\t%d\n",k,sum,best);
    }
    printf("%d",best);
}

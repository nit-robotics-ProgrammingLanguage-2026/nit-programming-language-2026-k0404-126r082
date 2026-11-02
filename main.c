
#include <stdio.h>

int main(void) {
    /* 課題0404 */
    int x;
    double result;

    scanf("%d", &x);
    
long long denominator = (long long)x + 100;

if (denominator > 2147483647LL)
{
    denominator -= 4294967296LL;
}

result = 1.0 / denominator;

    printf("%.15f", result);

    return 0;
}

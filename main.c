
#include <stdio.h>

int main(void) {
    /* 課題0404 */
    int x;
    double result;

    scanf("%d", &x);
    
result = 1.0 / ((double)x + 100.0);

    printf("%.15f", result);

    return 0;
}

// ВАРИАНТ 2
#include <stdio.h>

void printfbin(int x)
{
    int arr[50], i = 0;
    for (i; x; i++) {
        arr[i] = x % 2;
        x /= 2;
    }
    for (i--; i >= 0; i--) {
        printf("%d", arr[i]);
    }
}

int main()
{
    int m, x = 56;

    printf("m = ");
    scanf("%d", &m);

    for (int i = 0; x < m; i++) {
        printf("\n%d\t\t", x);
        printfbin(x);
        x <<= 3;
        if (i % 2 == 0) x += 7;
    }

    return 0;
}

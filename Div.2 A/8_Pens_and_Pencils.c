#include <stdio.h>
int main()
{
    int lec, prac, lec1, prac1, cap, pen, pencil, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d %d", &lec, &prac, &lec1, &prac1, &cap);
        pen = (lec % lec1 == 0) ? lec / lec1 : (lec / lec1) + 1;
        pencil = (prac % prac1 == 0) ? prac / prac1 : (prac / prac1) + 1;
        ((pen + pencil) > cap) ? printf("-1\n") : printf("%d %d\n", pen, pencil);
    }
    return 0;
}
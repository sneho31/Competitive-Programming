#include <stdio.h>
int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    (n <= m && n <= k) ? printf("Yes") : printf("No");
    return 0;
}
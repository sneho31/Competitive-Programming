#include <stdio.h>
int main()
{
    int n, m, l, r;
    char c1, c2;
    scanf("%d %d", &n, &m);
    char str[n];
    scanf(" %[^\n]", str);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %c %c", &l, &r, &c1, &c2);
        l--;
        r--;
        for (l; l <= r; l++)
        {
            if (str[l] == c1)
            {
                str[l] = c2;
            }
        }
    }
    puts(str);
    return 0;
}
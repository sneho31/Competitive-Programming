#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int seq[m], fin[n], output[1], index = 0;
    for (int i = 0; i < m; i++)
        scanf("%d", &seq[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &fin[i]);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (seq[i] == fin[j])
                printf("%d ", fin[j]);
        }
    }

    return 0;
}
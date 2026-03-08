#include <stdio.h>
int main()
{
    int n, index;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            int high = -1;
            for (int j = 0; j < n; j++)
            {
                if (high < arr[j] && arr[j] != 0)
                {
                    high = arr[j];
                    index = j;
                }
            }
            //printf("%d ", high);
            arr[index] = 0;
        }
        else
        {
            int low = 100000000;
            for (int j = 0; j < n; j++)
            {
                if (low > arr[j] && arr[j] != 0)
                {
                    low = arr[j];
                    index = j;
                }
            }
            //printf("%d ", low);
            arr[index] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            continue;
        printf("\n%d", arr[i]);
    }
    return 0;
}

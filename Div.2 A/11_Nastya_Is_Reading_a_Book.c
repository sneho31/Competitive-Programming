#include <stdio.h>
int main()
{
    int chap, rem, num;

    scanf("%d", &chap);
    rem = chap;

    int page[chap * 2];
    for (int i = 0; i < chap * 2; i++)
        scanf("%d", &page[i]);

    scanf("%d", &num);

    if (num == page[0])
    {
        printf("%d", chap);
        return 0;
    }
    for (int i = 0; i <= page[(chap * 2)]; i += 2)
    {
        if (num - 1 >= page[i] && num - 1 <= page[i + 1])
        {
            if (num - 1 == page[i + 1])
            {
                rem--;
                break;
            }
            break;
        }
        rem--;
    }
    printf("%d", rem);
    return 0;
}
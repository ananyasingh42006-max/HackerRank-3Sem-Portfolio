#include <stdio.h>

int main()
{
    int h, m, s;
    char ampm[3];

    scanf("%d:%d:%d%s", &h, &m, &s, ampm);

    if (ampm[0] == 'A' && h == 12)
        h = 0;

    if (ampm[0] == 'P' && h != 12)
        h += 12;

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c, d, y;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    switch (a)
    {
        case 1: y = b*c-d; break;
        case 2: y = b*b+c+a*d; break;
        case 3: y = a*(b+c+d); break;
        case 4: y = b*c*d+c-1; break;
        case 5: y = (b+c+d)%a;
    }
    printf("%d", y);
    return 0;
}

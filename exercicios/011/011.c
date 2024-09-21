#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if(a == 00)
        printf("12\n%.2d\nam", b);
    else if(a < 12)
        printf("%.2d\n%.2d\nam", a, b);
    else if(a == 12)
        printf("%.2d\n%.2d\npm", a, b);
    else if(a > 12)
        printf("%.2d\n%.2d\npm", a-12, b);
    return 0;
}

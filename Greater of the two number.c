#include <stdio.h>
int main()

{
    int a,b;
    printf("Enter any two no.");
    scanf("%d %d", &a,&b);

    if (a>b)
    {
        printf("%d is the largest no.",a);
    }
    else if (b>a)
    {
        printf("%d is the largest no.",b);
    }
    else
    {
        printf("both are equal");
    }
    return 0;
}

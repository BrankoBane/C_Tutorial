#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v;

    printf("Enter the number: \n");
    scanf("%d", &v);

    if (v<1)
        return (1);

    printf("%d is an %s number\n", v, (v%2) ? "odd" : "even");


    return 0;
}

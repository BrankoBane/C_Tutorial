#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char *classification;

    printf("Enter your age: ");
    scanf("%d", &age);

    classification =(
        (age < 18) ? "kid" :
        (age < 65 ? "adult":
        "old"));

    printf("You are %s.\n", classification);

    return 0;
}

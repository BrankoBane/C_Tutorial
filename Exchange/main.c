#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void convertToDinars (float euro);
void convertToDollars(float euro);
void convertToFranks (float euro);

int main()
{

    float euroPrice1    = 1.00;
    float euroPrice10   = 10.00;
    float euroPrice100  = 100.00;

    convertToDinars(euroPrice1);
    convertToDinars(euroPrice10);
    convertToDinars(euroPrice100);

    convertToDollars(euroPrice1);
    convertToDollars(euroPrice10);
    convertToDollars(euroPrice100);

    convertToFranks(euroPrice1);
    convertToFranks(euroPrice10);
    convertToFranks(euroPrice100);

    return 0;
}

void convertToDinars(float euro){
    float rsd = euro * 121;
    printf("%.2f Euros is %.2f Dollars \n", euro, rsd);

    return;
}

void convertToDollars(float euro){
    float usd = euro * 1.37;
    printf("%.2f Euros is %.2f Dollars \n", euro, usd);

    return;

}void convertToFranks(float euro){
    float chf = euro * 0.80;
    printf("%.2f Euros is %.2f Dollars \n", euro, chf);

    return;
}

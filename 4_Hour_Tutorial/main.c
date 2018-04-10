/*
//Lab 1 - PRINTF
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%d  \n", 32); ///integer
    printf("%ld \n", 3255564);  ///large integer
    printf("%f  \n", 32.2); ///float
    printf("%df \n", 32457642); ///large float
    printf("%c  \n", 'b'); ///char
    printf("%s  \n", "Hi There"); ///string
    printf("%x  \n", 32); ///hex

    puts("This is my C program");

    return 0;
}


/*
//lab 2 - MATH OPERATIONS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=11, b=2;
    int addittion;
    int subtractor;
    int multiplication;
    float division;
    float modulus;

    addittion       = a + b;
    subtractor      = a - b;
    multiplication  = a * b;
    division        = a / b;
    modulus         = a % b;

    printf("Product = %d\n",addittion);
    printf("Product = %d\n",subtractor);
    printf("Product = %d\n",multiplication);
    printf("Product = %f\n",division);
    printf("Product = %f\n",modulus);


    return 0;
}




/*
//Lab 3 - IF, ELSE IF, ELSE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Please enter the age:\n");
    scanf("%d", &age);

    if (age > 18){
        if (age < 21){
            printf("The age is greater then 18 but less then 21\n");
        }else{
            printf("The age is greater then 18 and 21\n");
        }
    }
    else if (age == 18){
        printf("The age is equal to 18\n");
    }else{
        printf("The age is less then 18\n");
    }
    return 0;
}



/*
//Lab 4 - COMPARE OPERATION
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=25, b=20;
    int c;
    //(logical expression goes here) ? (if non-zero (true)) : (if 0 (false))

    c = (a > b) ? b : a;//if a vece od b vrati b, ako nije vrati a

    printf("Answer is %d\n", c);

}



/*
//Lab 5 - SWITCH STATEMENT
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks=90;

    switch(marks)
    {
        case (90):
            printf("Exellent\n");
            break;
        case 75:
            printf("Very Good\n");
            break;
        case 60:
            printf("Good\n");
            break;
        case 50:
            printf("OK\n");
            break;
        default:
            printf("Grade unavailable\n");
    }

    return 0;
}





//Lab 6 - D0, WHILE LOOP
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    do
    {
        printf("Value of i = %d\n", i);
        //i = i + 1;
        i ++;

    }while(i<=10);

    printf("****************************************\n");

    int j = 0;

    while(j <=10)
    {
        printf("Value of j = %d\n", j);
        j ++;
    }

    return 0;
}



//Lab 7 - FOR LOOP
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //for (init; condition; increment)
    //{
        //statements(s);
    //}
    int i;
    for (i=0; i <= 10; i ++)
    {
        printf("The value of i=%d\n", i);
    }

}




//Lab 8 - FUNCTIONS
#include <stdio.h>
#include <stdlib.h>

void MyFunctionName();

int main()
{
    MyFunctionName();
    MyFunctionName();
    MyFunctionName();

}

//type name (type1 arg1, type2 arg2, ...)
//{
//  code
//}

void MyFunctionName()
{
    printf("sume = %d\n", 10 + 52);
    printf("We are inside a function\n");
}




//Lab 9 - PASSING PARAMETERS AND ARGUMENTS IN FUNCTION
#include <stdio.h>
#include <stdlib.h>

void Sum(int a, int b);

int main()
{
    Sum(40,100);
    int x, y;
    printf("\n\n\nEnter two numbers: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    Sum(x,y);
}

//type name (type1 arg1, type2 arg2, ...)
//{
//  code
//}

void Sum(int a, int b)
{
    int sum=a + b;
    printf("Sum a + b = %d\n", sum);
}




//Lab 10 - RETURN VALUES IN FUNCTIONS
#include <stdio.h>
#include <stdlib.h>

int Product (int a, int b);

int main()
{
    int x, y;
    printf("Enter two numbers: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    int prod;
    prod = Product(x,y);

    printf("Product = %d", prod);

}

int Product (int a, int b)
{
    return (a * b);
}







//Lab 11 - ARRAYS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intArray [3] = {20, 30, 40};
    int accessIntArray=intArray[1]; // 30
    printf("Int : %d\n", accessIntArray);

    char charArray[4] = {'a', 'b', 'c', 'd'};
    char accessCharArray=charArray[2];  // c
    printf("Char : %c\n", accessCharArray);

    for (int i=0; i<3; i++)
    {
        printf("Element[%d]=%d \n", i, intArray[i]);
    }

    printf("************************************\n");

    for (char j=0; j<4; j++)
    {
        printf("Element[%d]=%c \n", j, charArray[j]);
    }

}






//Lab 12 - Multidimensional Arrays
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MyNumberArrey [3] [3] = {
    {1, 3, 2},  //row 0
    {5, 6, 7},  //row 1
    {8, 9, 4}   //row 2


    };

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("MyNumberArrey[%d] [%d] = %d\n",i,j,MyNumberArrey[i] [j]);

        }

    }

}


//Lab 13 - PASSING ARREYS AS FUNCTION ARGUMENTS
#include <stdio.h>
#include <stdlib.h>

void ArraySum(int MyArray[], int size);

int main()
{

    int MyNumberArray [7] = {20, 40, 30, 40, 50, 55, 60};
    int sumOfArray = ArraySum(MyNumberArray, 7);

    printf("Array sum = %d ", sumOfArray);

}

void ArraySum(int MyArray[], int size)
{
    int sum = 0;
    for (int i=0; i < size; i ++)
    {
        //sum = sum + MyArray[i];
        sum+=MyArray[i];
    }
        return sum;
}




//Lab 14 - POINTERS
#include <stdio.h>
#include <stdlib.h>
//Pointer is a variable whose value is the address of another variable
int main()
{
    int val=30;
    int *pointer;
    pointer= &val;

    printf("Adress of val = %x\n", &val);   //address of val

    printf("Value of pointer variable = %x\n", pointer);    //address of pointer

    printf("Value of pointer = %x\n", *pointer);    //value of address

}





//Lab 15 - ARRAY OF POINTERS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valArray[3] = {30, 40, 50};
    int *pointerArray[3];

    for (int i=0; i<3; i++)
    {
        pointerArray[i] = &valArray[i]; //assign the adrress of array elements
    }

    for (int i=0; i<3; i++)
    {
        printf("Value of valArray[%d]=%d \n", i, pointerArray[i]);
    }

}





//Lab 16 - PASSING POINTERS AS FUNCTION ARGUMENTS
#include <stdio.h>
#include <stdlib.h>
//Pointer is a variable whose value is the address of another variable
int getSum(int *arrayVAl, int size);

int main()
{
    int myArray[5] = {10, 20, 30, 40,5};
    int mySum = getSum(myArray, 5);

    printf("The value of my sum is = %d\n", mySum);

}

int getSum(int *arrayVAl, int size)
{
    int sum=0;
    for (int i=0; i<size; i++)
    {
        sum+=arrayVAl[i];
    }
    return sum;
}





//Lab 17 - STRINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myString [6] = {'H', 'e', 'l','l', 'o', '\0'};  //1. nacin
    char myOtherString [] = "Hello";                //2. nacin

    printf("My string value is %s\n", myString);
    printf("My string value is %s\n", myOtherString);

    //ukljucujemo #include <string.h>
    char string1[12] = "Hello";
    char string2[12] = "world";
    char string3[12];

    strcpy(string3, string1);   //strcpy (destination, source)
    strcat(string1, string2);   //add string2 t ostring 1
    int lengthString1 = strlen(string1);

    printf("strcpy = %s\n", string3);
    printf("strcat = %s\n", string1);
    printf("strlen = %d\n", lengthString1);

    return 0;
}







//Lab 18 - STRUCTURES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_{
    int id;
    char name[20];
    float percentage;
};

int main()
{
    struct student record1;

    record1.id = 1;
    strcpy(record1.name, "Branko");   //(destination, source)
    record1.percentage = 70.20;

    printf("ID: %d \t Name: %s \t Percent:%.1f\n", record1.id, record1.name, record1.percentage);

    return 0;
}






//Lab 19 - UNIONS
#include <stdio.h>
#include <stdlib.h>

struct myStruct {
    int myInt;  //4
    char myChar;
} record;

union myUnion {
    int myInt;  //4
    char myChar; //1
};


int main()
{
    union myUnion uni;
    uni.myInt = 4;
    uni.myChar = 9;

    printf("the size of structure is %d \n", sizeof(record));
    printf("the size of union is %d \n", sizeof(uni));
    return 0;

}
*/


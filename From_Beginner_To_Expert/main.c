/*
///LAB 01 - PRINTF and PLACEHOLDERS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("Thrilled to meet you");                       ///prelazi u sledeci red
    printf("\nThis is the way the world ends.\n");        ///ne prelazi u sledeci red
    printf("\nHello!\nMy name is \"Branko\"\n");            /// -- \"Branko\" -- dupli znaci navoda
    printf("\nHello!\nMy name is 'Branko'\n");            /// -- 'Branko' -- pojedinacni znaci navoda

    printf("\nHere is a value: %d\n", 27);      ///digital
    printf("\nYou are a %s\n", "programmer");   ///string
    printf("\nThe first letter is %c\n", 'a');  ///character
    printf("\nI got %d%% on my C exam\n", 98);   ///procentage


    return 0;
}





///LAB 02 - VARIABLES
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age;

    age = 30;
    printf("The C language is over %d years old!\n", age);


    age = 50;
    printf("My car is over %d years old\n", age);

    age = 25;
    printf("\n%s is %d years old!\n", "Branko", age);
    printf("And that is %d months", age*12);

    char x, y, z;

    x = 'A';
    y = x+1;
    z = y+1;

    printf("\nIt is as easy as %c %c %c\n", x, y, z);


    float pi;

    pi = 22.00/7.0;

    printf("\n\n\nThe acients calculated PI as %.6f\n",pi);

    return 0;


}




///LAB 03 - CHARACTER I/0 FUNCTIONS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password [] = "BrankoBane";

    printf("The password is \"%s\"\n", password);


    int a;
    int b;

    printf("Type two letters: ");
    a = getchar();                  ///slicno kao 'scanf' samo sto je ovo za karakter
    b = getchar();
    printf("You typed '%c' and '%c'!\n", a, b);

    return 0;
}






///LAB 04 - FGETS,PUTS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name [100];

    printf("Enter your first and last name: ");
    fgets(Name, 100, stdin);
    printf("You entered: ");
    puts(Name);


    return 0;
}






///LAB 05 - MATHS OPERATIONS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    float c;
    float d;

    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the first number: \n");
    scanf("%d", &b);

    printf("Enter the third number: \n");
    scanf("%f", &c);

    printf("Enter the fourth number: \n");
    scanf("%f", &d);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("The square foot of %.1f is %.1f\n", c, sqrt(c));
    printf("The square of %.1f is %.1f\n", d, pow(d,2));

    return 0;
}






///LAB 06 - RANDOM NUMBER
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r;

    srand(time(NULL));
    r=rand();
    printf("%d is random number.\n", r);


    return 0;
}





///LAB 07 - IF, ELSE IF, ELSE
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;

    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("You entred a number %d\n\n\n", a);

    if (a < 10)
    {
        printf("Your number  is less then 10.");
    }
    else if (a == 10)
    {
        printf("Your number is equal to 10.");
    }
    else
    {
        printf("Your number is greater then 10.");
    }

    return 0;
}





///LAB 08 - SWITCH,CASE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Choose one of those three letters(a b c): ");
    scanf("%c", &x);

    switch(x)
    {
        case 'a':
            printf("Excellent choise, you survived!\n");
            break;
        case 'b':
            printf("Try one more time!\n");
            break;
        case 'c':
            printf("You are dead!\n");
            break;
        default:
            printf("You did not choose one of those three letters!\n");
    }


    return 0;
}







///LAB 09 - WHILE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int c;
    float b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number(MAST BE GREATER THEN FIRST NUMBER!): ");
    scanf("%f", &b);

    while (a < b) ///ukoliko je uneti drugi broj veci od prvog broja
    {
        c = a % 5;  ///deli sa 5
        printf("%d %% 5 = %d\n", a, c); ///ispisuje brojeve od unetog broja 'a' do unetog broja 'b' i ostatak od boja koji su deljivi sa 5
        a++;    ///uvecava se za jedan
    }

    return 0;
}






///LAB 10 - LOOP
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alpha;
    int numeric;

    for (alpha='A'; alpha<'J'; alpha++)
    {
        for(numeric=0; numeric < 7; numeric++)
            printf("%c%d\t", alpha, numeric);
        printf("\n");
    }


    char ch, t;

    printf("Enter a letter from 'a' to 'z': ");
    scanf("%c", &ch);

    for (t='a'; t < 'z'; t ++)
    {
        putchar(t);
        if (t == ch)
            break;
    }


    return 0;
}





///LAB 11 - REPEAT
#include <stdio.h>
#include <stdlib.h>

void repeat(int count);

int main()
{

    puts("At first the raven was like:");
    repeat(1);
    puts("But then he was all:");
    repeat(5);

    return 0;
}

void repeat(int count)
{
    int x;

    for(x=0; x<count; x++);
        puts("Nevermore!");

}






///LAB 12 - MULTIPLE IN FUNCTION
#include <stdio.h>
#include <stdlib.h>

void product (int a, int b, int c);

int main()
{
    int x, y, z;

    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d",&x,&y,&z);
    product(x,y,z);

    return 0;
}

void product (int a, int b, int c)
{
    int p;

    p = a * b * c;
    printf("%d * %d * %d = %d\n",a,b,c,p);
}






///LAB 13 - UPPER AND LOWER CASE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch = 'B';

    printf("Big %c\n", toupper(ch));
    printf("Little %c\n", tolower(ch));
    printf("What begins with %c?\n", ch);

    return 0;
}





///LAB 14 - CONVERT TO UPPER CASE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    do
    {
        c = getchar();
        c = toupper(c);
       // c = tolower(c);
        putchar(c);
    }
    while (c != '\n');

    return 0;
}





///LAB 15 - TEST FOR ALPHA
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acter;

    do
    {
        acter = getchar();
        if(isalpha(acter))
            printf("You enter a letter '%c'\n", acter);
        if(isupper(acter))
            printf("You enter a upper case '%c'\n", acter);

    }
    while (acter != '\n');
    return 0;
}







///LAB 16 - COUNTING CHARACTERS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[100]; ///definisemo niz gde cemo da smestimo svoj niz od maksimum 100 karaktera
    int len;

    printf("Enter your first and last name: ");
    fgets(Name, 100, stdin);    ///svoj niz karaktera ubacujemo u definisan niz od maks 100 kraktera
    len = strlen(Name);         ///racuna niz karaktera
    printf("The following string:\n");
    puts(Name);
    printf("is %d characters long.\n", len);    ///ispisuje koliko karaktera ima nas niz


    return 0;
}






///LAB 17 - STORAGE TWO AND MORE STRINGS IN ONE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char FirstName[] ="Branko ";
    char NickName[] ="Bane ";
    char LastName[] ="Nikolicin";
    char FullName[64];

    strcpy(FullName,FirstName);///FullName je mesto gde zelimo da ubacimo jedan string, FirstName je ono sto stavljamo u bafer (UVEK IDE PRVO STRCPY)
    strcat(FullName,NickName); ///spajanje (NAKON STRCPY IDU STRCAT)
    strcat(FullName,LastName); ///spajanje

    printf("Here is your full name: %s\n", FullName);


    return 0;
}






///LAB 18 - PASSWORD
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char password [9];
    int compare;

    printf("Enter your password: ");
    scanf("%8s", password);
    compare = strcmp(password, "secret");   ///sifra je 'secret'
    if (compare==0)
        puts("You have been granted access!");
    else
        puts("Intruder alert!");


    return 0;
}







///LAB 19 - ROW AND COLUMNS
#include <stdio.h>
#include <stdlib.h>
#define c_ROW 10        ///definisemo konstante koje cemo koristiti
#define c_COLUMN 10

int main()
{
    int row, column;

    srand(time(NULL));  ///nasumicno da bira brojeve svaki put kad se pokrene program, bez ovog bi svaki put iste brojeve izbacivao

    for (row = 0; row < c_ROW; row ++)  ///ubacujemo konstantu c_ROW
    {
        for(column=0; column < c_COLUMN; column ++)  ///ubacujemo konstantu c_COLUMN
            printf("%d\t", rand() % 100);   ///daje nasumicne brojeve do 100
        putchar('\n');
    }

    return 0;
}






///LAB 20 - STRUCTURES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct record
    {
        int account;
        float balance;
    };
    struct record my_bank;
    struct record your_bank;

    my_bank.account = 123456;
    my_bank.balance = 6456.23;

    your_bank.account = 99996;
    your_bank.balance = 241421456.23;
    printf("In my account %d i have %.2f\n", my_bank.account, my_bank.balance);
    printf("In your account %d i have %.2f\n", your_bank.account, your_bank.balance);

    printf("\n***************************************************\n");

    struct person
    {
        char name [32];
        int age;
    };

    struct person president;

    strcpy(president.name, "Aleksandar Vucic"); ///mora ovako jer je string sacinjen od dva stringa (gore upisujemo #include <string.h>)
    president.age  = 48;
    printf("%s was %d years old!\n", president.name, president.age);

    printf("\n***************************************************\n");

    struct date
    {
        int year;
        int month;
        int day;
    };

    struct person_info
    {
        char name [32];
        struct date birthday;
    };

    struct person_info friend;

    strcpy(friend.name, "Branko Nikolicin"); ///mora ovako jer je string sacinjen od dva stringa (gore upisujemo #include <string.h>)
    friend.birthday.year = 1993;
    friend.birthday.month = 4;
    friend.birthday.day = 1;

    printf("My friend %s was born %d/%d/%d\n", friend.name,friend.birthday.day, friend.birthday.month, friend.birthday.year);
}






///LAB 21 - CURRENT TIME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t now;
    struct tm *right_now;

    time(&now);
    right_now = localtime(&now);
    printf("Today is %d/%d at %d:%d\n",
            right_now->tm_mon,
            right_now->tm_mday,
            right_now->tm_hour,
            right_now->tm_min);

    return 0;
}






///LAB 22 - IZRACUNAVANJE DUZINE STRINGA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longer(char *s1, char *s2);

int main()
{

    char string1 [50];
    char string2 [50];
    char *result;

    printf("Enter first sentence: ");
    fgets(string1,50,stdin);
    printf("Enter second sentence: ");
    fgets(string2,50,stdin);

    string1[strlen(string1) - 1] = '\0'; /// na ovaj nacin skracujem string za jedan iz razloga sto kada unesem recenicu i udarim 'enter'
    string2[strlen(string2) - 1] = '\0'; /// -->on i taj enter zapamti i na kraju predje u sl red (probati bez ove dve linije)

    result = longer(string1, string2);
    printf("String '%s' is longer.\n", result);

    return 0;
}


char *longer(char *s1, char *s2)
{
    int len1, len2;

    len1 = strlen(s1);
    len2 = strlen(s2);
    if (len1 > len2)
        return(s1);
    else
        return(s2);
}





///LAB 23 - CONVERT STRING TO UPPER CASE
#include <stdio.h>
#include <stdlib.h>

void shouting(char *input);

int main()
{
    char string [64];

    printf("Type some text: ");
    fgets(string, 64, stdin);
    printf("You typed: \n%s\n", string);
    shouting(string);

    printf("If you were shouting, you'd typed:\n%s\n", string);
    return 0;
}

void shouting(char *input)
{
    while(*input)
    {
        *input = toupper(*input);
        input ++;
    }
}





///LAB 24 - LOCATE ADDRESS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gang[5] = {"Build", "Word", "Train", "Eat", "Sleep"};

    int x;

    for (x=0; x<5; x++)
    {
        printf("Char: %s\tAddress: %p\n", gang[x]);  ///%p ispisuje u helsadecimalnom
    }


    return 0;
}






///LAB 25 - SUBSTRACTING ADDRESS MEMORY LOCATIONS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int i;
    float f;
    char buffer [128];
    long unsigned total;

    total = 0;
    total = total + sizeof(c);
    total = total + sizeof(i);
    total = total + sizeof(f);
    total = total + sizeof(buffer);
    total = total + sizeof(total);

    printf("This program set aside %ld bytes of storage.\n", total); ///%ld ispisuje u decimalnom
    printf("This program set aside %lx bytes of storage.\n", total); ///%lx ispisuje u helsadecimalnom (isto kao i %p);

    return 0;
}
*/

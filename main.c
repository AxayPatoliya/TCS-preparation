//first 5 topics from the PDF

#include <stdio.h>
#include <math.h>

// global variables in C
char intro[100] = "Logic matters, language doesn't";

// functions in C
int add(int a, int b){
    int c;
    c = a + b;
}

int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

void name(char name[100]){
    printf("\nYour name is %s", name);
}

// function created to understrand the scope
void localScope(){
    int height = 123;
    printf("\nAccessing the variable defined inside a function by calling a function itself - %d", height);
    printf("\nGlobal variable inside a function - %s", intro); //accessing the global variable inside a function
}

int main()
{
    // int num;
    // printf("enter the number");
    // scanf("%d", &num);
    // printf("your number with the addition of 1 is %d", num+1);

    // to print the whole string(characters with spaces)
    // char ch[0];
    // printf("Enter a string\n");
    // gets(ch);
    // printf("The string: %s\n", ch);

    // float val;
    // printf("enter the float value");
    // scanf("%f", &val);
    // printf("your float value is - %lf", val);

    // input and ouptput
    // int num;
    // float fl;
    // char word[100];

    // printf("enter the number - ");
    // scanf("%d", &num);
    // printf("\nentered number is... %d", num);

    // printf("\nenter the character - ");
    // gets(word);
    // printf("\nentered character is... %s", word);

    // printf("\nenter the float number - ");
    // scanf("%f", &fl);
    // printf("\nentered float number is... %f", fl);



    // using the "add" function
    // int i = 10;
    // int j = 40;
    // int k = add(i, j);
    // printf("Addition of the numbers - %d",k);

    // using the "name" function
    // name("sam");

    // scopes in C language
    // local scope
    {
        int local = 5;
        printf("%d", local); //we can't access this variable outside of this block
        printf("\nGlobal variable inside a block - %s", intro); //accessing the global variable inside block
    }

    localScope();
    // printf("%d", height); //we can't acces the local variable defined inside the function over here
    printf("\nGlobal variable inside a main block - %s", intro); //accessing the global variable inside main block



    // use of math.h library to get the square root of a number
    // float root;
    // printf("\nEnter the number for sqrt");
    // scanf("%f", &root);
    // printf("%f", sqrt(root));

    int a = 11;
    a = 12;
    printf("\n%d", a);

    //taking the string input from the user and output it - this will display word before the space only - Axay Patoliya mathi khali Axay j print thase
    printf("\nEnter your name - ");
    char name[100];
    //scanf("%s", name);
    fgets(name, 100, stdin); //this will get input as a whole line - this will print new line after printing the input
    printf("\nYour name is %s", name);

    char color[100];
    char noun[100];
    char celebFirstName[100];
    char celebLastName[100];

    printf("enter the color");
    scanf("%s", color);

    printf("enter the noun");
    scanf("%s", noun);

    printf("enter the celeb name");
    scanf("%s%s", celebFirstName, celebLastName);


    printf("Roses are %s \n %s are %s \n I love %s %s", color, noun, color, celebFirstName, celebLastName);


    return 0;
}

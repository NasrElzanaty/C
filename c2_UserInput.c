#include <stdio.h>

int main(void)

{

    printf("Hello \n");
    // this is second file
    printf("It's ok \n");
    printf("It's now \n");
    printf("Please enter a num:\n ");
    // use scanf
    int num;
    scanf("%int",&num);
    printf("user num is = %int\n", num);

    printf("Please enter your age: \n");

    int age;
    scanf("%int",&age);
    if (age>12)
    {
        printf("You are adult ! \n");
        /* code */
    }
    
    else
    {

        printf("Sorry ! you are not adult \n");
    }
    

    return 0;



}

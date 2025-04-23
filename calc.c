#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note " enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main(){
    printf("\t\tWelcome to the scientific calculator\n\n");
    int choice;
    printf("\n********* Press 0 to quit the program *******\n");
    printf("Enter 1 for addition \n");
    printf("Enter 2 for subtraction \n");
    printf("Enter 3 for multiplication \n");
    printf("Enter 4 for division \n");
    printf("Enter 5 for modulus \n");
    printf("Enter 6 for power \n");
    printf("Enter 7 for factorial \n");
    printf("Enter 8 for square \n");
    printf("Enter 9 for cube \n");
    printf("Enter 10 for squareroot \n");
    while(1){
        printf("\n\nEnter the operation you want to do: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                 addition();
                 break;
            case 2:
                 subtraction();
                 break;
            case 3:
                 multiplication();
                 break; 
            case 4:
                 division();
                 break; 
            case 5:
                 modulus();
                 break;
            case 6:
                 power();
                 break;  
            case 7:
                 factorial();
                 break;
            case 8:
                 square();
                 break;
            case 9:
                 cube();
                 break;
            case 10:
                 squareroot();
                 break;   
            case 0:
                 exit(0);
            default:
                 printf("\n************* %s ***************\n",note);                              



        }
    }
    return 0;
}

void addition(){
    printf("Enter the number you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the sum of a and b is %d\n", a + b);
}
void subtraction(){
    printf("Enter the number you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the subtraction of a and b is %d\n", a - b);
}

void multiplication(){
    printf("Enter the number you want to Multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the multiplication of a and b is %d\n", a * b);
}

void division(){
    printf("Enter the number you want to divide: ");
    float a,b;
    scanf("%d%d",&a,&b);
    printf("the division of a and b is %f\n", a / b);
}

void modulus(){
    printf("Enter the number you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("the modulus of a and b is %d\n", a % b);
}

void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &n);
    factorial = 1;
    for(int i = 0; i<=n ; i++)
    {
        factorial = factorial*i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
    
}

void power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%f",&b,&p);
    double e = pow(b,p);
    printf("The power is%lf", e);
}

void square(){
    double b;
    printf("enter the number you want the square of:");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("the square of %lf is %lf:",b,p);

}

void cube(){
    double b;
    printf("Enter the number you want the cude of:");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf id %lf", b,p);
}

void squareroot(){
    double b;
    printf("Enter the number you want the square root of: ");
    scanf("%lf",&b);
    double s = sqrt(b);

    printf("The square root of %lf is %lf:", b,s);
}


#include<stdio.h>
struct comp
{
    int real;
    int imag;
};

void print(int a, int b, int c, int d);

void add(int a, int b, int c, int d);

void multi(int a, int b, int c, int d);


//This function reads the elements
void main()
{
    struct comp c1,c2;
    printf("Enter the first complex number\n");
    printf("real part:");
    scanf("%d", &c1.real);
    printf("Imaginary part:");
    scanf("%d", &c1.imag);
    printf("\n");
    printf("Enter the second complex number\n");
    printf("real part:");
    scanf("%d", &c2.real);
    printf("Imaginary part:");
    scanf("%d", &c2.imag);
    print(c1.real,c1.imag,c2.real,c2.imag);
    printf("\n");
    add(c1.real,c1.imag,c2.real,c2.imag);
    printf("\n");
    multi(c1.real,c1.imag,c2.real,c2.imag);
    printf("\n");
    
}
//This function displays the elements
void print(int a,int b, int c, int d)
{
printf("\ncomplex numbers are:\n");
printf("%d+%di\n", a, b);
printf("%d+%di\n", c, d);
}


//This function adds the elements
void add(int a, int b, int c, int d)
{
    printf("Addition is:");
    printf("%d+%di\n", a+c, b+d);
}

//This function multiplies the elements
void multi(int a, int b, int c, int d)
{
    printf("Multiplication is: ");
     printf("%d+%di\n", ((a*c)-(b*d)), (a*d)+(b*c));
}

#include<stdio.h>
#include<complex.h>
struct Lucifer
{
    float x;
    float y;
};

void P(struct Lucifer X,struct Lucifer Y)
{
    float complex c=X.x+X.y *I;
    float complex d=Y.x+Y.y *I;
    printf("Lucifer gives you the sum of two complex numbers : %f",creal(c)+creal(d));
    printf("+%fi\n",cimag(c)+cimag(d));
    printf("Lucifer gives you the substract of two complex numbers : %f",creal(c)-creal(d));
    printf("-%fi\n",cimag(c)-cimag(d));
}

int main()
{
    struct Lucifer X,Y;
    printf("Lucifer wants you to give the real part of complex number 1 : ");
    scanf("%f",&X.x);
    printf("Lucifer wants you to give the imaginary part of complex number 1 : ");
    scanf("%fi",&X.y);
    printf("Lucifer wants you to give the real part of complex number 2 : ");
    scanf("%f",&Y.x);
    printf("Lucifer wants you to give a imagine number 2 : ");
    scanf("%fi",&Y.y);

    P(X,Y);
}
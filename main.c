#include <stdio.h>
#include <stdlib.h>

double factorial(unsigned x);
int dcm(int x, int y);

int main()
{
/*
    printf("tam int: %lu\n", sizeof(int)); ///4
    printf("tam unsigned: %lu\n", sizeof(unsigned)); ///4
    printf("tam long: %lu\n", sizeof(long)); ///4
    printf("tam unsigned long: %lu\n", sizeof(unsigned long)); ///4
    printf("tam unsigned long long: %lu\n", sizeof(unsigned long long)); ///8
    printf("tam double: %lu\n", sizeof(double));

    for(unsigned  i = 0; i <= 100; i++)
        printf("%3u! es: %lf\n", i, factorial(i)); ///%u --> unsigned / %lu --> unsigned long
*/
/*
    double fact = factorial(5);
    printf("%.0lf\n", fact);
*/
    int div = dcm(81, 9);
    printf("DCM: %d\n", div);

    system("pause");

    return 0;
}

/// 5! = 5 * 4 * 3 * 2 * 1
/// x! = x * (x-1) * (x-2) * ...
/// x!  = x * (x-1)!
/** DE FORMA ITERATIVA:
double factorial(unsigned x)
{
    double acumFact = 1;
    double f; ///Factor

    for(f = x; f >= 2; f--)
        acumFact *= f;

    return acumFact;
}

int dcm(int x, int y)
{
    int nuevaY;

    while(y != 0)
    {
        nuevaY = x % y;
        x = y;
        y = nuevaY;
    }

    return x;
}


*/
///APLICANDO RECURSIVIDAD:
double factorial(unsigned x)
{
    if(x <= 1) ///Condicion base --> Corta la ejecucion de la recursiva.
        return 1;

    double fact = x * factorial(x-1);

    return fact;
}

int dcm(int x, int y)
{
    if(y == 0) ///Condicion base
        return x;

    return dcm(y, x % y);
}

/**
DCM(X,Y) = DCM(Y, X % Y)
DCM(x, 0) = X
*/



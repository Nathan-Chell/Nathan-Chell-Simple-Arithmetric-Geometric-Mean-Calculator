/*

Arithmetric-geometric mean calculator
for two positive real numbers

x <= G(x, y) <= A(x, y) <= y

The geometric and arithmetic averages
converge to the same value as precision goes to infinity.

For a 'good enough' approximation, a precision of 5 is enough.
*/

#include <stdio.h>
#include <math.h>

double ArithmeticMean(double a, double b){

    return (a + b) / 2;
}

double GeometricMean(double a, double b){

    return sqrt(a * b);
}

int main(){

    double a, b, a1, b1, AGM;
    int p, i;

    printf("Enter two positive real numbers (On the same line): ");
    scanf("%lf %lf", &a, &b);
    printf("Enter the precision: ");
    scanf("%d", &p);

    /*Loop over the algorithm until the desired level of precision is achieved.*/
    for(i = 0; i < p; i++){

        a1 = ArithmeticMean(a, b);
        b1 = GeometricMean(a, b);
        a = a1;
        b = b1;

    }

    AGM = ArithmeticMean(a, b);

    printf("Arithmetic-geometric mean: %.17g", AGM);

    return 0;

}
//G S Navajith
//24100781
#include<stdio.h>
#include<math.h>
void roots(int,int,int);
int main(){
    int a,b,c;
    printf("The general form of a quadratic equation is ax^2+bx+c=0\n");
    printf("Enter the coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter the coefficient of x: ");
    scanf("%d",&b);
    printf("Enter the constant term: ");
    scanf("%d",&c);
    roots(a,b,c);
    return 0;
}
void roots(int l,int m,int n){
    float discriminant,r1,r2;
    discriminant=m*m-4*l*n;
    if (discriminant<0){
    float real = -m / (2.0 * l);
    float imaginary = sqrt(-discriminant) / (2.0 * l);
    printf("\nRoots of this equation are %.2f+%.2fi and %.2f-%.2fi\n", real, imaginary, real, imaginary);
} else if (discriminant == 0) {
    r1 = -m / (2.0 * l);
    printf("\nRoot of this equation is %.2f", r1);
} else {
    r1=(-m+sqrt(discriminant))/(2.0*l);
    r2=(-m-sqrt(discriminant))/(2.0*l);
    printf("\nRoots of this equation are %.2f and %.2f\n",r1,r2);
}
}
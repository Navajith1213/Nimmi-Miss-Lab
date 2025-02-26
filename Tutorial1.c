//G S Navajith
//24100781
#include <stdio.h>
int main(){
    float x1,x2;
    int a,b,c,d,m,n;
    printf("Enter the value of a,b,c,d: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("Enter the value of m,n: ");
    scanf("%d %d",&m,&n);
    x1=(float)(m*d-b*n)/(a*d-b*c);
    x2=(float)(a*n-m*c)/(a*d-b*c);
    if (a*d-b*c==0)
        printf("The system of equations has no solution\n");
    else
        printf("The solution of the system of equations is :X1=%.3f\n X2=%.3f\n",x1,x2);
        return 0;       
}

//G S Navajith 
//24100781
#include<stdio.h>
int check_Triangle(int,int,int);
int main(){
    int a,b,c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if (check_Triangle(a,b,c)==1)
        printf("The triangle is a right angled triangle\n");
    else
        printf("The triangle is not a right angled triangle \n");
    return 0;
}
int check_Triangle(int x,int y,int z){
    if (x*x==y*y+z*z || y*y==x*x+z*z || z*z==x*x+y*y)
        return 1;
    else
        return 0;
}
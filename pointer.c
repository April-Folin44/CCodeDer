#include <stdio.h>
void input(int *x,int *y){
    printf("Please enter the value of a & b to Add: \n");
    printf("a: "); scanf("%d", x);
    printf("b: "); scanf("%d", y);
}
int add(int a,int b){
    return a + b;
}
void main(){
     int a, b;
     input(&a,&b);
     printf("%d + %d = %d\n", a, b,add(a,b));
 }
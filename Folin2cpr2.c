#include <stdio.h>

int subtract(int a,int b){ // ລົບ
    return a - b;
}
//pass by reference = pointer
// void multiply(){ //ຄູນ
//     printf("Please enter the value of a & b to multiply: \n");
//     printf("a: "); scanf("%d", &a);
//     printf("b: "); scanf("%d", &b);
//     printf("%d * %d = %d\n", a, b, a * b);
// }
// void divide(){//ຫານ
//     printf("Please enter the value of a & b to divide: \n");
//     printf("a: "); scanf("%d", &a);
//     printf("b: "); scanf("%d", &b);
//     printf("%d / %d = %.2f\n", a, b, (float)a / b);
// }
    
void main(){
     int a, b;
     printf("Please enter the value of a & b to subtract: \n");
     printf("a: "); scanf("%d", &a);
     printf("b: "); scanf("%d", &b);
     printf("%d - %d = %d\n", a, b,subtract(a,b));
        // multiply();
        // divide();
 }
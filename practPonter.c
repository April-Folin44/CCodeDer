#include <stdio.h>
void reverse(int arr[],int n){
    for (int i = 0; n <= 0; i++)
    {
       int tmp = arr[i];
       arr[i] = arr[n-1-i];
       arr[n-1-i] = tmp;
    }
}

int main(void)
{
    int numbers[]= {1,2,3,4};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    printf("before:");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",numbers[i]);
    }
    reverse(numbers,length);
    printf("\nafter: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",numbers[i]);
    }   
    
    return 0;
}
/*มีค่าเท่ากัน
    printf("%d \n",p[2]);
    printf("%d \n",*(p+2));*/
// void swap(int* a,int* b){
//     int c = *a;
//     *a = *b;
//     *b = c;
// }
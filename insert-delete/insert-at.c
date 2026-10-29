#include <stdio.h>
#define CAPACITY 10

int insert_at(int arr[],int n,int pos,int value){
    if(n >= CAPACITY || pos < 0 || pos > n){
        return n;
    }

    for (int i = n-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    return n + 1;
    
}
int main(void){
    int a[CAPACITY] = {1,4,6,8,9};
    int n = 5;
    n = insert_at(a,n,2,10);
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",a[i]);
    } 
}

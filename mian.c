#include <stdio.h>
void poin(int* f){
     printf("%d\n",f);
     printf("g %p\n",f);
     printf("%d\n",*f);
     printf("%p\n",*f);
     printf("%p\n",&f);
}
int main()
{
    int s[3] = {10,20,30};
    int* p = s;
    int length = sizeof(s) / sizeof(s[0]);
    for (int i = 0; i < length; i++)
    {
        printf("%d\n",*(p+2));
    }
    
    
 
  
    // int a= 10;
    // int* p = &a;
    // printf("%p\n",&a);
    // printf("%p\n",p);
    // printf("%d\n",*p);
    // a = 20;
    // printf("%d\n",a);
    // printf("%d\n",*p);
    // *p = 30;
    // printf("%d\n",a);
    // printf("%d\n",*p);
    return 0;
}

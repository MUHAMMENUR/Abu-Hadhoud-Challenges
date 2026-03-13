



#include <stdio.h>

int main() {
    int sayi1 = 10, sayi2 = 19;
    int *ptr1, *ptr2;
    int temp; 
 
    ptr1 = &sayi1;
    ptr2 = &sayi2;

    printf("change1");
    printf("Sayi1 = %d, Sayi2 = %d\n", sayi1, sayi2);

   
    temp = *ptr1;   
    *ptr1 = *ptr2;  
    *ptr2 = temp;  
    printf("change2");
    printf("Sayi1 = %d, Sayi2 = %d\n", sayi1, sayi2);

    return 0;
}
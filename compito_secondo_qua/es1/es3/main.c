#include<stdio.h>

#define DIM_MACRO(arr) (sizeof(arr) / sizeof((arr)[0]))

int main(void){
        int a[100];
        double b[50];
        size_t dim_a = DIM_MACRO(a);
        size_t dim_b = DIM_MACRO(b);

        printf("a e' un vettore di interi di %ld elementi\n", dim_a);
        printf("b e' un vettore di double di %ld elementi\n", dim_b);
}
#include<stdio.h>
#include"distanza.h"

int main(void){
        int a[] = {1,4,3,6,7,2,9,0,5};
        for(int i=0; i<9; i++)
                printf("%d\t", a[i]);
        printf("\n");

        int x = 3;
        int y = 9;
        int d = distanza(a, x, y, 9);
        printf("la distanza tra %d e %d e' di %d posizioni\n", x, y, d);
        return 0;
}
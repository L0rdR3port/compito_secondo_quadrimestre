#include<stdio.h>
#include"inverti.h"

int main(void){
        char stringa[10] =  "aeiou";
        printf("%s\n", stringa);
        inverti_stringa(stringa, 6);
        printf("%s\n", stringa);
        return 0;
}
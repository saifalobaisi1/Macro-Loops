#include<stdio.h>
#define INCLUDE_B
#define INCLUDE_A
int main(){
    #include "include.a.c"

    return 0 ;
}
#include<stdio.h>
int cube(int i){
    int retval;
    retval=i*i*i;
    return retval;
}
void main(){
    int input;
    printf("The cube of 10 is %d/n",cube(10));
    printf("Enter an integer:");
    scanf("The cube of %d is %d",input,cube(input));
}
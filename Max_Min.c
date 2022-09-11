#include<stdio.h>
int main(){
    float a,b,c,max,min;
    printf("Enter 3 numbers:\n");
    scanf("%f%f%f",&a,&b,&c);
    if ((a>=b) && (a>=c)){
        max = a;
    }
    else if ((b>=c) && (b>=a)){
        max = b;
    }
    else {
        max = c;
    }
    if ((a<=b) && (a<=c)){
        min = a;
    }
    else if ((b<=c) && (b<=a)){
        min = b;
    }
    else {
        min = c;
    }
    printf("Max value among the inputs is: %f\nMin value among the inputs is: %f",max,min);
    return 0;
}

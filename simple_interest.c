#include <stdio.h>
int main(){
    float principal;
    float rate;
    float time;
    scanf("%f %f %f",&principal,&rate,&time);
    float simple_interest=(principal*rate*time)/100;
    printf("%.2f",simple_interest);
    return 0; 
}

#include <stdio.h>
int main(){
    int m1,m2,m3,m4,m5;
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    float sum=m1+m2+m3+m4+m5;
    float percentage=(sum/500)*100;
    printf("%.2f",percentage);
    return 0;
}

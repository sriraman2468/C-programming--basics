#include <stdio.h>
int main(){
  float m1,m2,m3,m4,m5;
  float avg;
  printf("enter marks of five subject:");
  scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
  float total=m1+m2+m3+m4+m5;
  avg=total/5;
  printf("average=%f",avg);
  return 0;
}

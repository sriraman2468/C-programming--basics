#include <stdio.h>
int main(){
  int sum=0;
  int n;
  printf("sum upto what term?:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
     sum=sum+i;
  }
  printf("sum=%d",sum);
  return 0;
}

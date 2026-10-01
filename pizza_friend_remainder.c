#include <stdio.h>
int main(){
int bill_amount;
int number_of_friends;
int remainder=0;
scanf("%d %d",&bill_amount,&number_of_friends);
if(bill_amount%number_of_friends==0){
    printf("%d %d",bill_amount/number_of_friends,remainder);
}
else{
    printf("%d %d",bill_amount/number_of_friends,bill_amount%number_of_friends);
}
return 0;
}

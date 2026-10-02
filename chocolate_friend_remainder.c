#include <stdio.h>
int main(){
    int tot_num_of_chocolates,num_of_students;
    scanf("%d %d",&tot_num_of_chocolates,&num_of_students);
    if(tot_num_of_chocolates%num_of_students==0){
        printf("%d 0",tot_num_of_chocolates/num_of_students);
    }
    else{
        printf("%d %d",tot_num_of_chocolates/num_of_students,tot_num_of_chocolates%num_of_students);
    }
    return 0;
}

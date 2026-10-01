#include <stdio.h>
int main(){
    int l;
    int b;
    scanf("%d %d",&l,&b);
    int area=l*b;
    int perimeter=2*(l+b);
    printf("%d %d",area,perimeter);
    return 0;
}

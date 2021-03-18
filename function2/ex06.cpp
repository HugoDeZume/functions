#include<stdio.h>
 
int main() {
    int num, min, max;
     
    printf("type an integer\n");
    scanf("%d", &num);
    printf("enter the range as min, max integer numbers\n");
    scanf("%d %d", &min, &max);
     
    if((num-min)*(num-max) <= 0){
        printf("%d is in the range of [%d, %d]", num, min, max);
    } else {
     printf("%d is not in the range of [%d, %d]", num, min, max);
    }
 
    return 0;
}
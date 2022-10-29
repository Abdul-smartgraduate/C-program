#include<stdio.h>
int main(){
       int i;
       double number,sum=0.0;
       for(i=1;i<=10;++i){
        printf("Enter n%d: ",i);
        if(number<0.0){
            break;
        }
        sum+=number;
       }
       printf("Sum = %.21f",sum);
       return 0;
       }

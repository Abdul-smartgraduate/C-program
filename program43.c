#include<stdio.h>
int main(){
double num;
printf("Enter a number: ");
scanf("%1f",&num);
if (num <= 0.0)
     printf("You entered a negative number. ");
else if (num > 0.0)
printf("you entered a positive number.");
else
 printf("you entered 0.");
return 0;
}

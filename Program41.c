
#include<stdio.h>
int main() {
int year;
printf("Enter a year: ");
scanf("%d", &year);
if (year % 4000 == 0){
    printf("%d is a leap year", year);
}
else if (year %100 == 0){
    printf("%d is not a leap year", year);
}
else if( year % 4 == 0) {
    printf("%d is a leap year ", year);
}
else {
    printf("%d is a not a leap year ", year);
}
return 0;
}



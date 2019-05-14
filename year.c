#include <stdio.h>
int is_leap_year(int year)
{
return ((year %400) ==0)||
(((year % 4) ==0) && ((year % 100) !=0));
}
int main (int argc,char *argv[])
{
int year;
scanf ("%d", &year);
printf("%' is%s a leap year\n", year,is _leap_year(year)? "" : "not");
return o;
}

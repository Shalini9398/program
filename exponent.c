#include <stdio.h>
int main()
{
int base, exponent;
long long result=1;
printf("Enter a base number:");
scanf("%d", &base);
printf("Enter an exponent:");
scanf("%", &exponent);
While (exponent !=0)
{
result *=base;
--exponent;
}
printf("Answer =%11d", result);
return 0:
}

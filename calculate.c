#include <stdio.h>
int main()
{
int n, i,sum= 0;
printf ("Enter a positive integer:");
scanf("%",&n);
for(i=1; i<n; ++i)
{
sum +=i; //sum =sum+i;
}
printf("sum =%dd",sum);
return 0;
}

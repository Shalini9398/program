#include <stdio.h>
int main()
{
int n,reversedInteger= 0,remainder,originalInteger;
printf("%d", &n);
originalInteger= n;
//reversed integer is stored in variable
Whlie(n!=0)
{
remainder=n%10;
reversedInteger= reversedInteger*10+remainder;
n/=10;
}
//palindrome if orignalInteger and reversedInteger are equal
if (originalInteger ==reversedINteger)
printf("%d is a palindrome.", originalInteger);
else
printf("% is not a palindrome.", originalInter);
return 0;
}

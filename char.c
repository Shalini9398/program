#include <stdio.h>
int main()
{
char ch;
//Asking user to enter the character
printf("Enter any character: ");
//storing the entered character into the variable ch
scanf ("%c",&ch);
if  (ch>='a' &&ch<='z') || (ch>='A' && ch<='Z'))
ptintf ("The entered character %c is an Alphabet", ch);
else
printf("the entered character  %c is not an Alphabet ",ch);
return o;
}

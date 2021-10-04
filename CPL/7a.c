#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//Function declaration
void fnCountVowelCons(char*, int*, int*);
//Program execution begins here
int main()
{
 char acString[50];
 int iVowCount = 0, iConsCount = 0;
 printf("Enter a string!\n");
 gets(acString);
 fnCountVowelCons(acString, &iVowCount, &iConsCount);
 printf("\nThe string has %d vowels and %d consonants\n", iVowCount, iConsCount);
 return 0;
}
//Function definition to check given alphabet is vowel or consonant
void fnCountVowelCons(char *str, int *vc, int *cc)
{
 char ch;
 for(int i=0; str[i] != '\0'; ++i)
 {
 ch = tolower(str[i]);
 switch(ch)
 {
 case 'a':
 case 'e':
 case 'i':
 case 'o':
case 'u': (*vc)++;
 continue;
 }
 if(isspace(ch)) continue;
 else if(ispunct(ch)) continue;
 else (*cc)++;
} }

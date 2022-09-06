//Program to check vowel or not 
//Input :a
//Output:a is a vowel
#include<stdio.h>
void main()
{
  char alph;
  printf("Enter the alphabet:");
  scanf("%c",&alph);
  switch(alph)
  {
      case'a':printf("Vowel");
              break;
      case'e':printf("Vowel");
              break;
      case'i':printf("Vowel");
              break;
      case'o':printf("Vowel");
              break;
      case'u':printf("Vowel");
              break;
    default: printf("consonant");
             break;
  }
}
      

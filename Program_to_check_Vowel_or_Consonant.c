#include<stdio.h>
int main()
{
    char s;
    scanf("%s",&s);
    {
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
        printf("Vowel");
        else
        if(s=='A'||s=='E'||s=='I'||s=='O'||s=='U')
        printf("Vowel");
        else
        printf("Consonant");
    }
}
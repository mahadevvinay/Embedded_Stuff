/* string implrmantation */

#include<stdio.h>
#include<stdlib.h>
#include"ctype.h"


static inline unsigned char ToLower(unsigned char c)
{
        if (IsUpper(c))
                c -= 'A'-'a';
        return c;
}

static inline unsigned char ToUpper(unsigned char c)
{
        if (IsLower(c))
                c -= 'a'-'A';
        return c;
}



int main()
{
        char *s1, *s2;
        int n;
        s1 = (char*)malloc(sizeof(char)*1000);
        s2 = (char*)malloc(sizeof(char)*1000);
        scanf("%s",s1);
        scanf("%s",s2);
//      printf("%s\n", s1);	// testing purpose
//      printf("%s\n",s2);     // tesing purpose

/* Testing Upper and Lower Case function */
        printf("\nTo upper case:");
        while(*s1)
        {
                char ch = ToUpper(*s1++);
                printf("%c",ch);
        }
        printf("\nTo Lower case:");
        while(*s2)
        {
                char ch = ToLower(*s2++);
                printf("%c",ch);
        }
        printf("\n");



}


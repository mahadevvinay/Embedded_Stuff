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
        scanf("%s",s1);
//      printf("%s\n", s1);	// testing purpose
//      printf("%s\n",s2);     // tesing purpose

        while(*s1)
        {
                char ch = ToUpper(*s1++);
                printf("%c",ch);
        }

}


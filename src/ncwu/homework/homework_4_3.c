//
// Created by LeeYang on 2024/11/3.
//
#include <stdio.h>

void squeeze(char s[], char c);

int main()
{
    char s[80], c;
    gets(s);
    scanf("%c", &c);
    squeeze(s, c);
    puts(s);
    return 0;
}

void squeeze(char s[], char c)
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}
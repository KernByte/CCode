//
// Created by LeeYang on 2024/11/3.
//
#include <stdio.h>

struct node
{
    char ch;
    struct node *next;
};

int main()
{
    struct node x, y;
    struct node *p;
    x.ch = 'A';
    x.next = &y;
    p = &x;
    p = &y;
    p->ch = 'B';
    p->next = NULL;
    return 0;
}
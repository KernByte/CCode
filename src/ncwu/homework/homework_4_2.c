//
// Created by LeeYang on 2024/11/3.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *duplicate(const char *p);

int main() {
    char ch[] = "abcd123";
    printf("%s\n", duplicate(ch));
    return 0;
}

char *duplicate(const char *p) {
    char *q = (char *) malloc(sizeof(char) * strlen(p) + 1);
    strcpy(q, p);
    return q;
}
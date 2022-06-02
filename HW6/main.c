#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int pack4Chars2Int(char c1, char c2, char c3, char c4);

void main()
{
    pack4Chars2Int('a', 'b', 'c', 'd');
}

int pack4Chars2Int(char c1, char c2, char c3, char c4)
{
    unsigned char sum=0;
    sum += c1 | c2 | c3 | c4;
    int  mask = 1;
    while (mask > 0) {
        sum += c1 | c2 | c3 | c4;
        mask <<= 1;
    }

    printf("%u", sum);
}
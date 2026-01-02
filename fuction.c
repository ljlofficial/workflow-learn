#include <stdio.h>
#include <stdlib.h>

void addmat(int a, int b, int c)
{
    c = a + b;
}

void countmat(int a, int b, int c)
{
    c = a - b;
}

void transmat(int a, int b, int c)
{
    c = a * b;
}

void killmat(int a, int b, int c)
{
    if(b != 0)
        c = a / b;
    else
        c = 0;
}

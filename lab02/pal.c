#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printEm(int *a, int length)
{
    int x;
    for (x = 0; x < length; x++) {
        printf("%d ",a[x]);
    }
    printf("\n");
}
int main(int argc, char** argv)
{
    int x, *arrayOfInts, length;
    char y, *s, str[20];
    // do some stuff with pointers...
    s = &y;
    *s = 'D';
    strcpy(str, "Hello, World.");
    // now print them
    printf("%c %c %s\n",*s,y,str);
    // allocate an array of integers
    arrayOfInts = (int *)malloc(sizeof(int) * (int)argv[1]);
    for (x = 0; x < length; x++) {
        arrayOfInts[x] = x*x;
    }
    printEm(arrayOfInts, length);
    // equivalent to: printEm(&arrayOfInts[0], length);
    free(arrayOfInts);
}
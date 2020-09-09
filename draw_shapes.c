#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_arrow(){
  int a,b,c,d,e,f;
  for(a=1;a<=5;a++){
    for(b=4;b>=a;b--){
      putchar(' ');
    }
    for(c=1;c<=a;c++){
      putchar('*');
    }
      putchar('\n');
  }
  for(d=4;d>=1;d--){
    for(e=4;e>=d;e--){
      putchar(' ');
    }
    for(f=d;f>=1;f--){
      putchar('*');
    }
      putchar('\n');
  }
}


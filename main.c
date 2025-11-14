#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y)
{
     int temp;
     temp= *x;
     *x= *y;
     *y=temp;
}

int main(int argc, char *argv[])
{
    int a=4, b=7;
    
    swap(&a,&b);
    printf("a:%i, b:%i\n", a, b);
    
  system("PAUSE");	
  return 0;
}

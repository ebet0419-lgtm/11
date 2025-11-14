#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i=10;
    char c='a';
    int *iptr;
    char *cptr;
    int *iptr2;
    
    iptr=&i;
    cptr=&c;
    iptr2=iptr;
    
    printf("i: %p\n%p(size:%i)\n", iptr, &i, sizeof(iptr));
    printf("c: %p\n%p(size:%i)\n", cptr, &c, sizeof(cptr));
    printf("iptr:%p,%i\n\n",iptr2,*iptr);
  
  system("PAUSE");	
  return 0;
}

#include <stdio.h>
int x, y;
int main()
{
extern int x, y; 
printf("%d %d",x, y);
}

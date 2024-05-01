#include <stdio.h>
int main()
{
int ary[5] = {1, 2,7, 3, 4};
int *p;
p = ary + 2;
//pointer use korle de-reference kore value access and assign korte hoy.
*p = 5;
printf("%d\n", ary[2]);
}
//output is: 5
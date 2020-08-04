#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
int main(int argc, char** argv)
{
// variable declarations
int n=atoi(argv[1]);
int x;
// pre-conditions
(x = n);
// loop body
int while_counter_1 = 0;
while (while_counter_1 < 50)
{
printf("%d , %d , %d , %d , %d  \n", 1, while_counter_1++, 1, n, x);
if (!((x > 1))) break;
{
(x  = (x - 1));
}
}
// post-condition
if ( (x != 1) )
assert( (n < 0) );
}

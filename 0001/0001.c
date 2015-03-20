#include <stdio.h>
#include <stdlib.h>

int compare(const void *arg1,const void *arg2)
{
    return(*((int *)arg1)-*((int *)arg2));
}

int main(void)
{
    int num[10], i=0;
    
    while(scanf("%d", &num[i++]) != EOF){}
    qsort(num, 10, sizeof(int), compare);
    
    printf("%d\n%d\n%d\n", num[9], num[8], num[7]);
    
    return 0;
}
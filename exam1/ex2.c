#include <stdio.h>
int main()
{
    int max=-1;
    do{
        int a;
        //d=getchar();
        if(a<0)break;
        getchar();
        if(max==-1)
        max=a;
        if(max<a)
        max=a;
    }
    while(1);
    printf("max=%d\n",max);
    return 0;
}
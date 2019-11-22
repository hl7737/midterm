#include <stdio.h>
#include<ctype.h>
int main()
{
    int k,num=0,alpha=0;
    char str[50],c;
    gets (str);
    puts("请输入一个长度不超过50的字符串:\n");
    for(k=0,str[k]!="\0";k++;)
    {
    if((str[k]))alpha++;}
    printf("输出单词数:%d\n",num);
    return 0;
}
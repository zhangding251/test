/*************************************************************************
	> File Name: ptr2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月09日 星期四 16时50分48秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch[10] = "nihao";
    char *p = ch;
    printf("p= %s\n",p);
    printf("&(*p)= %p\n",&(*p));
    printf("*p= %c\n",*p);
    printf("p= %c\n",p);
    printf("======================================================\n");

    printf("p= %p\n",p);
    printf("p= %p\n",p);
    printf("ch= %p\n",ch);
    printf("&(*p)=%p\n",&(*p));
    printf("&(*p)= %p\n",&(*p));
    printf("======================================================\n");

    printf("&p= %p\n",&p);
    printf("p= %s\n",p);
    printf("======================================================\n");



}

/*************************************************************************
	> File Name: pointerarray.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月14日 星期六 11时24分04秒
 ************************************************************************/
/*
指针数组:array of pointers，即用于存储指针的数组，也就是数组元素都是指针
数组指针：a pointer to an array，即指向数组的指针
还要注意的是他们用法的区别，下面举例说明。

int* a[4]     指针数组     
表示：数组a中的元素都为int型指针    
元素表示：*a[i]   *(a[i])是一样的，因为[]优先级高于*

int (*a)[4]   数组指针     
表示：指向数组a的指针
元素表示：(*a)[i]  

注意：在实际应用中，对于指针数组，我们经常这样使用：
typedef int* pInt;
pInt a[4];
这跟上面指针数组定义所表达的意思是一样的，只不过采取了类型变换。

代码演示如下：
*/
#include <stdio.h>                                                                     
//using namespace std;
int main()
{
int c[4]={1,2,3,4};
int *a[4]; //指针数组
int (*b)[4]; //数组指针
b=&c;
//将数组c中元素赋给数组a
for(int i=0;i<4;i++)
{
a[i]=&c[i];
}
//输出看下结果
printf("%d   %d \n",*a[1],(*b)[2]);
    return 0;
}
/*注意：定义了数组指针，该指针指向这个数组的首地址，必须给指针指定一个地址，容易犯的错得就是，不给b地址，直接用(*b)[i]=c[i]给数组b中元素赋值，这时数组指针不知道指向哪里，调试时可能没错，但运行时肯定出现问题，使用指针时要注意这个问题。但为什么a就不用给他地址呢，a的元素是指针，实际上for循环内已经给数组a中元素指定地址了。但若在for循环内写*a[i]=c[i]，这同样会出问题。总之一句话，定义了指针一定要知道指针指向哪里，不然要悲剧。*/

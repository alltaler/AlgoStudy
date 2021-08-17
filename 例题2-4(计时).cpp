#include<stdio.h>
#include<ctime>
/* 阶乘之和
输入n，输出1~n的阶乘之和的末尾6位（不含前导0），n≤10^6 
样例输入：10 (12800)
样例输出：37913 (940313)*/

int main()
{
    const int MOD = 1000000;
    int n, res = 0;
    scanf("%d", &n);
    clock_t begin, end;
    begin = clock();
    int factorial = 1;  //记录阶乘
    /* 提示：
        计算只包含加，减，乘法的整数表达式除以正整数n的余数，可在每步计算后对n取余，结果不变。
    可降低溢出的可能性，同时提高程序运行速度*/
    for (int i = 1; i <= n;i++)
    {
        factorial = factorial * i % MOD;
        res = (res + factorial) % MOD;
    }
    printf("%d\n", res);
    //结果发现n>=22时后末尾6位都为940313，是因为22之后的数的阶乘末6位均为0，故结果r不再变化
    end = clock();
    printf("Time used = %.2f\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}
/* clock()计时
clock()是C/C++中的计时函数，而与其相关的数据类型是clock_t。在MSDN中，查得对clock函数定义如下： 
　　clock_t clock(void) ; 
　　这个函数返回从“开启这个程序进程”到“程序中调用clock()函数”时之间的CPU时钟计时单元（clock tick）数，在MSDN中称之为挂钟时间（wal-clock）；若挂钟时间不可取，则返回-1。其中clock_t是用来保存时间的数据类型，在time.h文件中，我们可以找到对它的定义： 
    #ifndef _CLOCK_T_DEFINED 
　　typedef long clock_t; 
　　#define _CLOCK_T_DEFINED 
　　#endif 
　　很明显，clock_t是一个长整形数。在time.h文件中，还定义了一个常量 CLOCKS_PER_SEC，它用来表示一秒钟会有多少个时钟计时单元，其定义如下：  #define CLOCKS_PER_SEC ((clock_t)1000) 
　　可以看到每过千分之一秒（1毫秒），调用clock（）函数返回的值就加1。
    你可以使用公式clock()/CLOCKS_PER_SEC来计算一个进程自身的运行时间
*/
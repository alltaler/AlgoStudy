#include<stdio.h>
/* 数据统计
    输入一些整数，求出它们的最大值，最小值和平均值（保留3位小数）。输入的整数不超过1000，
    输入包含多组数据，每组数据第一行是该组数据个数n，第二行是n个整数。n=0为输入结束标志，
程序应忽略这组数据。相邻两行数据之间输出一个空行
    样例输入：
    8
    2 8 3 5 17 3 6
    4
    -4 6 10 0
    0
    样例输出：
    Case 1: 1 8 4.375

    Case 2: -4 10 3.000*/
#define INF 1000000000



int main()
{
    int x, n, kase = 0;
    while(scanf("%d",&n)==1&&n) //  输入
    {
        int min = INF, max = -INF;  //使用INF初始化存在问题，后续再做讨论
        int sum = 0;
        for (int i = 0;i<n;i++)
        {
            scanf("%d", &x);
            sum += x;
            if(x<min)
                min = x;
            if(x>max)
                max = x;
        }
        if(kase)
            printf("\n");
        printf("Case %d: %d %d %.3f", ++kase, min, max, (double)sum / n);
    }
    return 0;
}
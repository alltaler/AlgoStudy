#include<stdio.h>
/* 3n+1问题
    猜想：对于任意大于1的自然数n，若n为奇数，则将n变为3n+1，否则变为n/2，经过若干次变化后，
一定会使n变为1.
    输入n，输出变化次数。n≤10^9
样例输入：3(987654321)
样例输出：7(180) */
int main()
{
    int count=0;
    long long lln;    //避免int越界(-2^31~2^31-1)
   
    while(lln!=1)
    {
        if(lln%2==1)
            lln=lln*3+1;
        else lln/=2;
        count++;
    }
    printf("%d",count);
    return 0;
}
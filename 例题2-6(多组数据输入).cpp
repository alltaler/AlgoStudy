#include<stdio.h>
/* ����ͳ��
    ����һЩ������������ǵ����ֵ����Сֵ��ƽ��ֵ������3λС���������������������1000��
    ��������������ݣ�ÿ�����ݵ�һ���Ǹ������ݸ���n���ڶ�����n��������n=0Ϊ���������־��
����Ӧ�����������ݡ�������������֮�����һ������
    �������룺
    8
    2 8 3 5 17 3 6
    4
    -4 6 10 0
    0
    ���������
    Case 1: 1 8 4.375

    Case 2: -4 10 3.000*/
#define INF 1000000000



int main()
{
    int x, n, kase = 0;
    while(scanf("%d",&n)==1&&n) //  ����
    {
        int min = INF, max = -INF;  //ʹ��INF��ʼ���������⣬������������
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
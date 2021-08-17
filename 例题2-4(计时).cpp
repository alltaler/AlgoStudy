#include<stdio.h>
#include<ctime>
/* �׳�֮��
����n�����1~n�Ľ׳�֮�͵�ĩβ6λ������ǰ��0����n��10^6 
�������룺10 (12800)
���������37913 (940313)*/

int main()
{
    const int MOD = 1000000;
    int n, res = 0;
    scanf("%d", &n);
    clock_t begin, end;
    begin = clock();
    int factorial = 1;  //��¼�׳�
    /* ��ʾ��
        ����ֻ�����ӣ������˷����������ʽ����������n������������ÿ��������nȡ�࣬������䡣
    �ɽ�������Ŀ����ԣ�ͬʱ��߳��������ٶ�*/
    for (int i = 1; i <= n;i++)
    {
        factorial = factorial * i % MOD;
        res = (res + factorial) % MOD;
    }
    printf("%d\n", res);
    //�������n>=22ʱ��ĩβ6λ��Ϊ940313������Ϊ22֮������Ľ׳�ĩ6λ��Ϊ0���ʽ��r���ٱ仯
    end = clock();
    printf("Time used = %.2f\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 0;
}
/* clock()��ʱ
clock()��C/C++�еļ�ʱ��������������ص�����������clock_t����MSDN�У���ö�clock�����������£� 
����clock_t clock(void) ; 
��������������شӡ��������������̡����������е���clock()������ʱ֮���CPUʱ�Ӽ�ʱ��Ԫ��clock tick��������MSDN�г�֮Ϊ����ʱ�䣨wal-clock����������ʱ�䲻��ȡ���򷵻�-1������clock_t����������ʱ����������ͣ���time.h�ļ��У����ǿ����ҵ������Ķ��壺 
    #ifndef _CLOCK_T_DEFINED 
����typedef long clock_t; 
����#define _CLOCK_T_DEFINED 
����#endif 
���������ԣ�clock_t��һ��������������time.h�ļ��У���������һ������ CLOCKS_PER_SEC����������ʾһ���ӻ��ж��ٸ�ʱ�Ӽ�ʱ��Ԫ���䶨�����£�  #define CLOCKS_PER_SEC ((clock_t)1000) 
�������Կ���ÿ��ǧ��֮һ�루1���룩������clock�����������ص�ֵ�ͼ�1��
    �����ʹ�ù�ʽclock()/CLOCKS_PER_SEC������һ���������������ʱ��
*/
#include<stdio.h>
/* 3n+1����
    ���룺�����������1����Ȼ��n����nΪ��������n��Ϊ3n+1�������Ϊn/2���������ɴα仯��
һ����ʹn��Ϊ1.
    ����n������仯������n��10^9
�������룺3(987654321)
���������7(180) */
int main()
{
    int count=0;
    long long lln;    //����intԽ��(-2^31~2^31-1)
   
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
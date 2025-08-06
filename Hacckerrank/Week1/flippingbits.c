#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    unsigned int n[q];
    for(int i=0;i<q;i++)
    {
        scanf("%u",&n[i]);
    }
    unsigned int f[q];
    for(int i=0;i<q;i++)
    {
        f[i]=~n[i];
    }
    for(int i=0;i<q;i++)
    {
        printf("%u\n",f[i]);
    }
}
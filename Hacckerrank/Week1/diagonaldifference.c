#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
   int lr = 0, rl = 0;
for (int i = 0; i < n; i++)
 {
    lr += a[i][i];            
    rl += a[i][n - 1 - i];  
}
   int diff =abs(lr-rl);
   printf("%d",diff);
}
#include<stdio.h>
void main()
{
    int T,i,j,min,N;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        int a[N];
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[j]);
        }
        min=a[0];
        for(j=1;j<N;j++)
        {
            if(min>=a[j])
            {
                min=a[j];
            }
        }
        printf("%d\n",(N-1)*min);
    }
}
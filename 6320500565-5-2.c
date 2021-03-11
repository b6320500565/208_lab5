#include <stdio.h>
int main()
{
    int x,y,i,j,a;
    scanf("%d",&x);
    if(x%2==0)
    {
        y=x-1;
        for(i=1; i<=x; i++)
        {
            if(i==1)
            {
                for(j=1; j<=y/2; j++)
                {
                    printf("_");
                }
                printf("*");
                for(a=1; a<=y/2; a++)
                {
                    printf("_");
                }
            }
            else if(i==x/2)
            {
                printf("*");
                for(j=1;j<=1+2*(i-1);j++)
                {
                    printf("_");
                }
                printf("*");
            }
            else if(i==x/2+1)
            {
                printf("*");
                for(j=1;j<=1+2*(i-1)-2;j++)
                {
                    printf("_");
                }
                printf("*");
            }
            else if(i==x)
            {
                for(j=1; j<=y/2; j++)
                {
                    printf("_");
                }
                printf("*");
                for(a=1; a<=y/2; a++)
                {
                    printf("_");
                }
            }
            else if(i>1&&i<x/2)
            {
                for(i>1;i<=i/2-2;i++)
                {
                    for(j=1;j<=y/2-i+1;j++)
                    {
                        printf("_");
                    }
                    printf("*");
                    for(j=1;j<=x-i;j++)
                    {
                        printf("_");
                    }
                }
            }
            printf("\n");
        }
    }
}

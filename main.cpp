#include <stdio.h>
int main()
{
    int cnt=0;
    int h,k;
    for(int i=1; i<=3; i++)
    {
        if(i>1)
        {
            printf("\n");
        }
        k=0;
        printf("%d��° Ȧ �Դϴ�.\n",i);
        printf("��Ȧ�ΰ���?:");
        scanf("%d",&h);
        if(h>3) //par 4~
        {
            printf("���°�� ���� �߳���?: ");
            scanf("%d",&k);
            if(h-k==h-1)
            {
                printf("Hole-in-One");
                cnt+=k;
            }
            else if(h-k==3)
            {
                printf("Albatross");
                cnt+=k;
            }
            else if(h-k==2)
            {
                printf("Eagle");
                cnt+=k;
            }
            else if(h-k==1)
            {
                printf("Birdie");
                cnt+=k;
            }
            else if(h-k==0)
            {
                printf("Par");
                cnt+=k;
            }
            else if(h-k==-1)
            {
                printf("Boggie");
                cnt+=k;
            }
            else if(h-k==-2)
            {
                printf("Double Boggie");
                cnt+=k;
            }
            else if(h-k==-3)
            {
                printf("Triple Boggie");
                cnt+=k;
            }
            else if(h-k==-4)
            {
                printf("Quadruple Boggie");
                cnt+=k;
            }
            else
            {
                printf("Double Par");
                cnt+=k;
            }
        }
        else //par 3
        {
            printf("���°�� ���� �߳���?");
            scanf("%d",&k);
            if(h-k==h-1)
            {
                printf("Hole-in-One");
                cnt+=k;
            }
            else if(h-k==1)
            {
                printf("Birdie");
                cnt+=k;
            }
            else if(h-k==0)
            {
                printf("Par");
                cnt+=k;
            }
            else if(h-k==-1)
            {
                printf("Boggie");
                cnt+=k;
            }
            else if(h-k==-2)
            {
                printf("Double Boggie");
                cnt+=k;
            }
            else
            {
                printf("Double Par");
                cnt+=k;
            }
        }
    }
    printf("\n�� %dŸ �Դϴ�.",cnt);
}

#include<stdio.h>
int main()
{
    int TestCase; //for Testcase
    scanf("%d",&TestCase);
    while(TestCase!=0)
    {
        int n;  //n person
        scanf("%d",&n);
        int id[n];  // array for  0 0 0 
    for (int i=1;i<=n;i++)
    {
        id[i]=0;  //intial 000
    }
    // Main Code STrating Here
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j%i==0)
            {
                if(id[j]==0)
                    id[j]=1;
                else
                    id[j]=0;
            }
        }
        printf("%d",id[i]);
        printf(" ");
    }
    printf("\n");

        TestCase--;
    }
    return 0;
}

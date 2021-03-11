#include<stdio.h>
void input(int n1,int a[][n1])
{
    printf("Enter matrix:\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

int compute(int n1,int a[][n1],int arr[3])
{
    int i,j,k,p=0;
    for( i=0;i<n1;i++)
    {
        for( j=0;j<n1;j++)
        {
            if(a[i][j]==1)
            {
                for( k=0;k<n1;k++)
                {
                    if(a[j][k]==1)
                    {
                        if(a[i][k]==1)
                        {
                            p=1;
                        }
                        else
                        {
                            arr[0]=i;
                            arr[1]=j;
                            arr[2]=k;
                            p=0;
                        }
                          
                    }
                }
                p=0;
            }
            
            
        }
    }
    return p;
}

void output(int res,int arr[3])
{
    if(arr[0]==0 && arr[1]==0 && arr[2]==0)
    {
        printf("transitive");
    }
    else
    {
        printf("non-transitive: %d %d %d",arr[0],arr[1],arr[2]);
    }
}

int main()
{
    int n;
    int a[100][100];
    int arr[3];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int n1,res;
        scanf("%d",&n1);
        input(n1,a);
        res=compute(n1,a,arr);
        output(res,arr);
    }
    
}

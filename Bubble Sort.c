#include<stdio.h>

int main()
{
    int data[5]={8,7,3,2,1};

    int i,j,k,temp;

    printf("Before sorting:");

    for(i=0;i<5;i++)
    {
        printf("%d ",data[i]);
    }
    /// Sorting starts:
    for(k=0;k<5;k++)
    {
        j=0;
        while(j<5)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;

            }
            j++;
        }

    }
    printf("\nAfter sorting:");

    for(j=0;j<5;j++)

    printf("%d ",data[j]);

    return 0;
}

#include<stdio.h>
#define MAX 50

void m_sort(int array[],int min,int max);
void sortUtil(int array[],int size,int top,int bot);

int main()
{
    int a[MAX]={55,44,33,22,11};
    int i=0,n=5;

    printf("Before sorting:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    i=0;
    m_sort(a,i,n-1);

    printf("\nAfter sorting:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;

}
void m_sort(int array[MAX],int min,int max)
{
    int half;
    if(min!=max)
    {
        half=(min+max)/2;
        m_sort(array,min,half);
        m_sort(array,half+1,max);
        sortUtil(array,half,min,max);
    }
}
void sortUtil(int array[MAX],int size,int top,int bot)
{
    int i=0,
    tmp_size=size+1,
    lb=top,ub=top,
    tmp_array[MAX];

    while((lb<=size)&&(tmp_size<=bot))
    {
        if(array[lb]<=array[tmp_size])
        {
            tmp_array[ub]=array[lb];
            lb++;
        }
        else
        {
            tmp_array[ub]=array[tmp_size];
            tmp_size++;
        }
        ub++;
    }
    if(lb<=size)
    {
        for(;lb<=size;lb++)
        {
             tmp_array[ub]=array[lb];
             ub++;
        }
    }
    else
    {
        for(;tmp_size<=bot;tmp_size++)
        {
             tmp_array[ub]=array[tmp_size];
             ub++;
        }
    }
    for(i=top;i<=bot;i++)
    {
        array[i]=tmp_array[i];
    }

    return;
}

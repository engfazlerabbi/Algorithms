#include <stdio.h>

int main()
{
    int data[5]={10,23,43,33,55};
    int item,loc;
    printf("Enter item:");
    scanf("%d",&item);

    for(loc=0;loc<5;loc++)
    {
         if(data[loc]==item)
         {
             printf("Item Found at location %d",loc+1);
             break;
         }

    }

       if(data[loc]!=item)
       {
           printf("Not Found");
       }

    return 0;
}

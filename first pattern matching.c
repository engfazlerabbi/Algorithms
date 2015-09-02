#include<stdio.h>

int main()
{
    int k,L,S,R,max;
    int index;

    char T[80],P[80];

    printf("Enter text and pattern:\n");
    gets(T);
    gets(P);

    S=strlen(T);
    R=strlen(P);

    max=S-R;
    k=0;

    while(k<=max)
    {
        for(L=0;L<=R;L++)

            if(P[L]!=T[k+L])
               break;
               if(L==R)
               {
                   index=k;
                 break;
               }
                else
                    k=k+1;
    }
    if(k>max)
         index=-1;

    printf("\nText:%s",T);
    printf("\nPattern %s",P);

    if(index!=-1)
        printf("\nPattern matched at %d",index+1); ///since L starts from 0 hence index+1
    else
        printf("\a\a\a Not Found");
   return 0;

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
     //int mert[5]={1,3,5,7,9};
     //printf("%d",mert[0]);
     int mert[10];
     int i;
     for(i=0;i<10;i++)
     {
         mert[i]=2*i;
     }
     for(i=0;i<10;i++)
     {
         printf("%d\n",mert[i]);
     }
    return 0;
}

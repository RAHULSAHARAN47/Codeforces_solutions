#include<stdio.h>
int main()
{ 

   int n,count=0,a,b,c,i=1;
   scanf("%d",&n);
   
     
     for(i=1;i<=n;i++)
     {  scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if(a+b+c>=2)
        count++;
        }
        printf("%d",count);
        return 0;
        }

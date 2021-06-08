#include <stdio.h>
void main()
{
    int num,power,i,temp=1;
      printf("enter the value :\n");
    scanf("%d",&num);
    printf("enter the power value: \n");
    scanf("%d",&power);
   for(i=1;i<power;i++)
   {
       temp=temp*num;
   }
    printf("%d",temp);

         
}

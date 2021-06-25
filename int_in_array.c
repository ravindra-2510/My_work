//put integer in array
#include <stdio.h>

int main()
{
    int num,i=0;
    printf("enter the integer number \n");
    scanf("%d",&num);
    int arr[100],mod,count=0;
    while(num>9)
    {
        mod=num%10;
        num=num/10;
       arr[i]=mod;
       i++;
       count++;
        
    }
    arr[i]=num;
    for(int j=0;j<=count;j++)
    {
        
        printf("%d",arr[j]);

    }
     
    return 0;
}

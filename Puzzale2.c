/*

       *
     *    *
  *    *      *
*   *     *      *


*/

#include <stdio.h>

void main()
{
    int temp, ctemp=3, jtemp, i, n=7,j;
    temp=3;
   int  temp1=0;
   int k=3;
    
    for(i=0;i<4;i++)
    
    {
        
        for(j=0;j<n;j++)
        {
            if(i==temp1 && j==ctemp)
            {
            printf("*");
            if( j<k){
            ctemp=ctemp+2;
            }
            }
            else
        printf(" ");
        
        }
        printf("\n");
       
    
    temp=temp-1;
     ctemp= temp;
    
    temp1=temp1+1;
    k=n-temp-1;
    }
        
        
    
    
}
 

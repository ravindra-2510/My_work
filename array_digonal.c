#include <stdio.h>  
void main ()  
{  
       int num;
       int arr[10][10],i,j;  
      printf("enter the size of array (m*n): \n");
      scanf("%d",&num);
 //take element of array
    for (i=0;i<num;i++)  
    {  
        for (j=0;j<num;j++)  
        {  
            scanf("%d",&arr[i][j]);  
        }  
    }  
    //print array
    printf("\n printing the elements ....\n");   
    for(i=0;i<num;i++)  
    {  
        printf("\n");  
        for (j=0;j<num;j++)  
        {  
            printf("%d\t",arr[i][j]);  
        }  
    }  
   
          printf("\ndigonal is:\n");
   //find digonal
   
    for(i=0;i<num;i++)  
    {  
        printf("\n");  
        for (j=0;j<num;j++)  
        {  
           if(i==j)
           {
            printf("\n %d\t",arr[i][j]); // print digonal
           }
        }  
    }  
   
   
}  

#include<stdio.h>
int main()
{
   /* int a[5],b[5],c[5],i;
    printf("entre the first array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the second array");
    for(i=0;i<5;i++){
        scanf("%d",&b[i]);
        c[i]=a[i]+b[i];
    }
 
    for(i=0;i<5;i++)
    {
    printf("%d",c[i]);
    }
    return 0;*/


    // forword 
 /*int a[5],b[5],i;
printf("enter the number");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{   scanf("%d",&b[i]);
    b[i]=a[i];

}
printf("%d",b[i]);
return 0; */

  //revers

 /* int a[5],b[5],i;
  printf("enter the number");
  for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=5;i>0;i--)
{   
    b[i]=a[i];

}
printf("%d",b[i]);
return 0; */

   // ---> 2-D array

   // addition
    
/*int a[5][5],b[5][5],c[5][5],i,j;
printf("enter the number ");
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the second array");
for(i=0;i<5;i++);
{
    for(j=0;j<5;j++){
        scanf("%d",&b[i][j]);

    }c[i][j]=a[i][j]+b[i][j];
    printf("%d",c[i][j]);
}
printf("\n");*/
  

       // user input and index , sum

        int arr[10],i,range,sum=0,even=0,odd=0;
       printf("Enter the range of array = ");
        scanf("%d",&range);
        printf("enter the %d number of eliment = \n",range);
        for(i=0;i<range;i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("display of number :\n");
        for(i=0; i<range; i++)
        {
          printf("a[%d]=%d \n",i,arr[i]);
          
        }
         for(i=0;i<range;i++)
        {
            if(i%2!=0)
            {
            sum=sum+i;
            }
        }
        printf("sum of odd number = %d\n",sum);
        
    for (int i = 0; i <range; i++) 
    {
        if (i % 2 == 0)
        {
             even += arr[i];
        }
            
        else
        {
           odd += arr[i]; 
        }
            
    }
   
    printf("Even index positions sum %d\n",even);
    printf( "Odd index positions sum %d",odd);
}
   


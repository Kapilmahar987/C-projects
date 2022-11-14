#include<stdio.h>
int main()
{
    
    // switch case

    /* int num;
     printf("eneter the number = ");
     scanf("%d",num);
     switch (num<0)
     {
     case 1:printf("the number is possitive");
        break;
     
     default:printf("the number is negitive");
        break;
     }*/

     // while loop
    /* int s,e;
     printf("enter the number s");
     scanf("%d",&s);
     printf("enter the number");
     scanf("%d",&e);
     while (s<=e)
     {
        printf("the number of s = %d",s);
        s++;
     }
     return 0;*/

     // factorial 
     /*int num,fac=1;
     printf("enter the number ");
     scanf("%d",&num);
     while (num>1)
     {
        fac=fac*num;
        num--;
     }
     printf("the  factorial is=%d",fac); */

     // table
     /*int no=2,i=1,res;
     while (i<=10)
     {
        res=no*i;
        printf("%d=%d*%d = %d\n",no,no,i,res);
        i++;
     }*/

       // do-while
      /*int num,i,res;
       do{
         res=num*i;
         printf("%d\n",res);
         i++;
       }while(i<=10);
      return 0;
*/     
     // for loop
  /*  for (int i=1;i<=10;i++)
    {
        int sqr=i*i;
        printf("%d=%d\n",i,sqr);
    }*/

    // nested loop
    //--->prime or not

    /*int no=2,i;
    for(no=2;no<=100;no++){
        for( i=2;i<=no/2;i++)
        {if(no%i==0)
        break;
        }
        if(i>no/2)
        printf("%d,",no);

    }*/

    // pattern
   for(int i=1;i<9;i++)
   {
      for(int j=1;j<i;j++)
      {
         printf("*");

      }
      printf(" \n");
   }
    

}
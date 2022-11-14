#include<stdio.h>
int main()
{
      // simple pointer
    /* int x=20;
     int *p=&x;
     printf("%d\n",x);
     printf("%u\n",&x);
     printf("%d\n",*p);
     printf("%u\n",p);
     printf("%u\n",&p); */
    
      // swape of number
   /* int a=20,b=30,c;
    int *p=&a,*q=&b,*r;
    *r=*p;
    *p=*q;
    *q=*r;
    printf("%d\n%d",*p,*q); */


    //without using  third variable
     
    /* int a=20,b=30;
     int *p=&a,*q=&b;
     *p=*p+*q;
     *q=*p-*q;
     *p=*p-*q;
     printf("%d\n%d",*p,*q);*/

     // pointer to pointer

     int a=10;
     int*p=&a;
     int **q=&p;
     int***r=&q;
     printf("%d,%u",a,&a);
     printf("%d,%u,%d",p,&p,*p);
     printf("%d,%u,%u,%u",**q,*q,q,&q);
     printf("%d,%u,%u,%u,%u,%u",***r,**r,*r,r,&r);
                            
    

}


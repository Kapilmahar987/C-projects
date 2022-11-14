#include<stdio.h>
int main(){

             // maximum two number
   /* int a,b;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
      printf("%d is grater then %d",a,b);
    }
    else
    printf("%d is grater then %d",b,a);
    return 0;*/

     //maximum three number

     /* int x,y,z;
    printf("enter the number");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y){
    if(x>z)
    {
      printf("%d is grater then ",x);
    }
    else{
          printf("%d is grater then ",z);
    }
    }
     if(y>z)
    {
        printf("%d is grater then ",y); 
    }
    else
    printf("%d is grater then ",z);
    return 0;*/

    // possitive, nagitive ,zero
    /*int no;
    printf("enter the number");
    scanf("%d",&no);
    if(no>0){
        printf("%d number is possitive",no);
    }
    else if(no<0){
        printf("%d number is negitive",no);
    }
    else
     printf("%d number is zero",no);*/

     // division
     /* int n;
     printf("enter the number");
    scanf("%d",&n);
    if((n%5==0) && (n%11==0)){
        printf("number is divisible by 5 and 11 is= %d",n);
    }
    else("number is not divisible by 5 and 11 is %d",n);*/

       // even and odd
     /*  int no;
       printf("enter the number");
    scanf("%d",&no);
    if(no%2==0){
        printf("even");
    }
    else
    printf("odd");*/

    //leap year
    /*int year;
    printf("enter the year");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0))
    {
        printf("leap year =%d ",year);
    }
    else
    printf("common year =%d",year);*/

    //alphabet
   /* char c;
    printf("enter the charecter");
    scanf("%c",&c);
    if((c>='a'&& c<='z')||(c>='A'&& c<='Z'))
    {
        printf("%c is alphabet ",c);
    }
    else
    printf("%c is not",c);*/
 
      // vowel and consonant
     /*  char c;
    printf("enter the charecter");
    scanf("%c",&c);
  if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'){
    printf("%c is vowel",c);
  }
  else
  printf("%c is consonant",c); */

  //n,c,sc

 /*  char c;
    printf("enter the charecter");
    scanf("%c",&c);
  if((c>='a'&& c<='z')||(c>='A'&& c<='Z')){
    printf("%c is alphabet",c);
  }
  else if(c>='0'&&c<='9'){
    printf("%c is number",c);
  }
  else
  printf("%c is special charecter",c);*/

// lower and upper

 /*char c;
    printf("enter the charecter = ");
    scanf("%c",&c);
    if(c>='A'&& c<='Z'){
        printf("%c is upper alphabet",c);
    }
    else
    printf("%c is lower alphabet",c); */
   
   // number input and weak name
   /* char week;
    printf("enter the number and show week = ");
    scanf("%d",&week);
    if(week==1)
    {
        printf("monday");
    }
    else if(week==2){
        printf("tuesday");
    }
    else if(week==3){
        printf("wednesday");
    }
    else if(week==4){
        printf("thursday");
    }
    else if(week==5){
        printf("friday");
    }
    else if(week==6){
        printf("saturday");
    }
    else if(week==7){
    printf("sunday");
    }
    else
    printf("invalid week");*/

    // ammount
    
   /* int amount;
    int note2000,note500,note200,note100,note50,note20,note10,note5,note2,note1;
     note2000=note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
     printf("{enter amount= ");
     scanf("%d",&amount);
     if(amount>=2000){
        note2000=amount/2000;
        amount=amount-note2000*2000;
     }
     if(amount>=500){
        note500=amount/500;
        amount=amount-note500*500;
     }
     if(amount>=200){
        note200=amount/200;
        amount=amount-note200*200;
     }
     if(amount>=100){
        note100=amount/100;
        amount=amount-note100*100;
     }
     if(amount>=50){
        note50=amount/50;
        amount=amount-note50*50;
     }
     if(amount>=20){
        note20=amount/20;
        amount=amount-note20*20;
     }
     if(amount>=10){
        note10=amount/10;
        amount=amount-note10*10;
     }
     if(amount>=5){
        note5=amount/5;
        amount=amount-note5*5;
     }
     if(amount>=2){
        note2=amount/2;
        amount=amount-note2*2;
     }
     if(amount>=1){
        note1=amount/1;
        amount=amount-note1*1;
     }
     printf("total number of notes=\n ");
     printf("2000=%d\n",note2000);
     printf("500=%d\n",note500);
     printf("200=%d\n",note200);
     printf("100=%d\n",note100);
     printf("50=%d\n",note50);
     printf("10=%d\n",note10);
     printf("5=%d\n",note5);
     printf("2=%d\n",note2);
     printf("1=%d\n",note1);*/

     // tringle

     int a1,a2,a3,sum;
     printf("enter the angle= ");
     scanf("%d%d%d",&a1,&a2,&a3);
     sum=a1+a2+a3;
     if(sum==180 && a1>0 && a2>0 && a3>0){
         printf("is valid tringles ");
     }
     else
     printf("not tringles");



  
  

   
}
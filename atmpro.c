#include<stdio.h>

void main(){
    long amount=10000,deposit,withdraw;
    int choice,pin,k;
    
        printf("ENTER YOUR SECRET PIN NUMBER:");
        scanf("%d",&pin);
        
    
    do{
        
        printf("***************Welcome to ATM Service***************\n");
        printf("\t\t1. Check Balence\n");
        printf("\t\t2. Withdraw Cash\n");
        printf("\t\t3. Deposit Cash\n");
        printf("\t\t4. exit\n");
        printf("*****************************************************\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        //printf("\e[1;1H\e[2J");
        switch (choice)
        {
        case 1:
            printf("\nYOUR BALANCE IN RS : %lu\n",amount);
            break;
        case 2:
            printf("\nENTER THE AMOUNT TO WITHDRAW: ");
            scanf("%d",&withdraw);
            if(withdraw%100!=0)
            {
                  printf("\nPLEASE ENTER THE AMOUNT IN MULTIPLES OF 100 \n ");
            } 
            else
            {
                  amount=amount-withdraw;
                  printf("\n\n PLEASE COLLECT CASH");
                  printf("\n YOUR CURRENT BALANCE IS = %lu\n",amount);
            }
            break;
        case 3:
        
            printf("\n ENTER THE AMOUNT TO DEPOSIT: ");
            scanf("%lu",&deposit);
            amount=amount+deposit;
            printf("YOUR BALANCE IS = %lu\n",amount);
            break; 
        case 4:
            printf("\nTHANK YOU USING FOR ATM.\n");
            break;
        default:
            printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N):\n");
            k+1;
        }
    }
    while(!k);
    printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
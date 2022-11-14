#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int num;              // --> Data  for the node
    struct node*nextptr;   // --> Address of the next node
}*stnode;
void createNodeList(int n);  // --> function to create the list
//void NodeInsertatBegin(int num);
void NodeInsertatEnd(int num);
void displayList();          // -->function to display the list
 
void createNodeList(int n){
    struct node *fnNode,*tmp;
    int num,i;
    stnode=(struct node*)malloc(sizeof(struct node));
    if(stnode==NULL)                // -->chack whether the fnNode is null and if no memory allocation
    {
        printf("Memory can not be allocated");
    }
    else
    {
         // -->read data for the node through keybord

        printf("Input data for node 1:");
        scanf("%d",&num);
        stnode->num=num;
        stnode->nextptr=NULL;        // --> link the address field to null
        tmp=stnode;

        // -->creating n bode adding to liked list
        for(i=2;i<=n;i++){
            fnNode=(struct node*)malloc(sizeof(struct node));
          if(fnNode==NULL){
            printf("Memmory can not be allocated");
          } 
          else{
            printf("Input data for node%d:",i);
            scanf("%d",&num);
            fnNode->num=num;          // -->links the num field of fnnode with num
            fnNode->nextptr=NULL;     //--> links the address field of fnnode with null
            tmp->nextptr=fnNode;     // -->links previous node i.e.tmp o\to the fnnode
            tmp=tmp->nextptr;
          }
        }
    }
}
  /*void NodeLnsertatBegin(int num){
    struct node*fnNode;
    fnNode=(struct node*)malloc(sizeof(struct node));
    if(fnNode==NULL){
        printf("Memory can not be allocated");
    }
    else{
        fnNode->num=num;            //--> linked the data part 
        fnNode->nextptr=stnode;     //--> liks the address part
        stnode=fnNode;              // --> makes stnode as first node
    }
   }*/
   void NodeInsertatEnd(int num){
    struct node*fnNode,*tmp;
    fnNode=(struct node*)malloc(sizeof(struct node));
    if(fnNode==NULL){
        printf("Memory can not be allocated");
    }
    else{
        fnNode->num=num;            //--> linked the data part 
        fnNode->nextptr=NULL;     
        tmp=stnode;
        while(tmp->nextptr!=NULL){
           tmp=tmp->nextptr;
           tmp->nextptr=fnNode;         //--> liks the address part
        }              
   }
   }
   void displayList(){
    struct node*tmp;
    if(stnode==NULL){
        printf("list is empty");
    }
    else{
        tmp=stnode;
        while(tmp!=NULL)
        {
           printf("Data=%d\n",tmp->num);  // --> print the data of current node
           tmp=tmp->nextptr;              // --> advances the positionof current node
        }
    }
   }
    int main()
   {
    int n,num;
    printf("input the number of nodes:");
    scanf("%d",&n);
    createNodeList(n);
    printf("\nData entered in  the list:\n");
    displayList();
    printf("\nInput data to insert at the end of the list");
    scanf("%d",&num);
    NodeInsertatEnd(num);
    printf("\n Data after insert at the end of the list:");
    displayList();
    return 0;
   }
  



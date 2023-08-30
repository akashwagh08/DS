#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *create(struct node *list)
{
 int i,n;
 struct node *newnode,*temp;
 printf("Enter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter value:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(list==NULL)
  {
    list=newnode;
    temp=newnode; 
 }
 else
 {
  temp->next=newnode;
  temp=newnode;
 }
 }
 return list;
}
void disp(struct node *list)
{
  struct node *temp;
  for(temp=list;temp!=NULL;temp=temp->next)
  {
    printf("%d\t",temp->data); 
  } 
}
struct node* insertbeg(struct node *list,int num)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 newnode->next=list;
 list=newnode;
 return list;
}
struct node* insertend(struct node *list,int num)
{
 struct node *newnode,*temp;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->next=NULL;
 newnode->data=num;
 for(temp=list;temp->next!=NULL;temp=temp->next);
 temp->next=newnode;
 return list;
}
struct node* insertmid(struct node *list,int num,int pos)
{
 struct node *newnode,*temp;
 int i;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=num;
 for(i=1,temp=list;i<(pos-1)&&temp->next!=NULL;i++,temp=temp->next);
   newnode->next=temp->next;
 temp->next=newnode;
 return list;
}

int main()
{
 int ch,num,pos;
  struct node *list=NULL;
  do
  {
   printf("\n 1-create \n 2-disp \n 3-insert beginning:");
   printf("\n 4-insert End \n 5-insert mid:");
   printf("\n Enter choice:");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:list=create(NULL);
            break;
    case 2: disp(list);
            break;
    case 3:printf("Enter number:");
           scanf("%d",&num);
     list=insertbeg(list,num);
     break;  
   case 4:printf("Enter number:");
           scanf("%d",&num);
     list=insertend(list,num);
     break;
   case 5:printf("Enter number:");
           scanf("%d",&num);
          printf("Enter pos:");
           scanf("%d",&pos);
     list=insertmid(list,num,pos);
     break;
 }
  }while(ch<6);
}

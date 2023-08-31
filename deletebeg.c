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
struct node* deletebeg(struct node* list)
{
  struct node *temp;
  temp=list;
  list=list->next;
  free(temp);
  return  list;
}
int main()
{
 int ch;
  struct node *list=NULL;
  do
  {
   printf("\n 1-create \n 2-disp \n 3-delete beginning:");
   printf("\n Enter choice:");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:list=create(NULL);
            break;
    case 2: disp(list);
            break;
    case 3:list=deletebeg(list);
            break;
 }
  }while(ch<4);
}

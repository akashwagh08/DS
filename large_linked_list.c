#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
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
int findmax(NODE *list)
{
 NODE *temp;
 int max=list->data;
 for(temp=list;temp!=NULL;temp=temp->next)
 {
  if(temp->data>max)
  {
   max=temp->data;
  }
 }
   return max;
}
int main()
{
 NODE *list=NULL;
 list=create(list);
    printf("MAximum no=%d",findmax(list));
}

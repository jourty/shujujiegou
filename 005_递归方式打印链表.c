#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

//插入数据
struct Node* Insert(struct Node* head,int data)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=data;temp->next=NULL;
if(head==NULL)head=temp;
else{
   struct Node* temp1=head;
    while (temp1->next!=NULL) temp1=temp1->next;
    temp1->next=temp;
}
return head;
}

//按顺序打印
void Print(struct Node* head)
{
    if(head==NULL)
    {
        printf("\n");
        return;
    }
    printf("%d ",head->data);
    Print(head->next);
}
//反序打印
void ReversePrint(struct Node* head)
{
if(head ==NULL)
{
    printf("\n");
    return;
}
ReversePrint(head->next);
printf("%d ",head->data);
}
int main()
{
   struct Node* head=NULL;
   head= Insert(head,2);
   head= Insert(head,6);
   head= Insert(head,5);
   head= Insert(head,4);
   Print(head);
   printf("\n");
   ReversePrint(head);
}
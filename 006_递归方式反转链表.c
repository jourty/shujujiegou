#include <stdio.h>
#include <stdlib.h>

struct Node
{
   int data;
   struct Node* next;
};

struct Node* head;

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
//遍历链表
void Print(struct Node* head)
{
while (head !=NULL)
{
    printf("%d ",head->data);
    head=head->next;
}

}
//反转链表
void Reverse(struct Node* p)
{
if(p->next==NULL)
{
    head=p;
    return;
}
Reverse(p->next);
struct Node* q=p->next;
q->next=p;
p->next=NULL;
}

int main()
{
head=NULL;
head=Insert(head,2);
head=Insert(head,6);
head=Insert(head,5);
head=Insert(head,4);
Print(head);

Reverse(head);
printf("\n");
Print(head);
}
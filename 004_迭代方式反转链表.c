#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};


//迭代方式反转链表
struct Node* Reverse(struct Node* head)
{
    struct Node *current,*perv,*next;
    current=head;
    perv=NULL;
    while (current !=NULL)
    {
        next=current->next;
        current->next=perv;
        perv=current;
        current=next;
    }
    head=perv;
    return head;
    
}
 
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


int main()
{
struct Node* head=NULL;
head=Insert(head,2);
head=Insert(head,4);
head=Insert(head,6);
head=Insert(head,8);
Print(head);
head=Reverse(head);
printf("\n");

Print(head);
}

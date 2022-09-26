#include<stdio.h>
#include<stdlib.h>

//创建链表
struct Node
{
    int data;
    struct Node* next;
};
//创建一个列表
struct Node* head;

//遍历链表
void Print()
{
struct Node* temp=head;
while(temp !=NULL)
{
    printf("%d",temp->data);
    temp=temp->next;
}
printf("\n");
}

//插入数据
void Insert(int data,int n)
{

    //建立一个新的节点
struct Node* temp1=(struct Node*)
malloc(sizeof(struct Node));
temp1->data=data;
temp1->next=NULL;
if(n==1)
{
    temp1->next=head;
    head=temp1;
    return;
}

struct Node* temp2=head;
for(int i=0;i<n-2;i++){
    temp2=temp2->next;
}
temp1->next=temp2->next;
temp2->next=temp1;
}

int main()
{
head=NULL;//空列表

//插入数据
Insert(2,1);//List：2
Insert(3,2);//List：2，3
Insert(4,1);//List：4，2，3
Insert(5,2);//List：4，5，2，3
Print();
}
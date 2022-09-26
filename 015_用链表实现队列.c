#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* front=NULL;//令队尾为空
struct Node* rear=NULL;//令队首为空


//写入数据
void Enqueue(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=NULL;
    if(front == NULL && rear==NULL)
    {
        front=rear=temp;
        return;
    }
    rear->next=temp;rear=temp;
}

//删除数据
void Dequeue()
{
    struct Node* temp=front;
    if(front==NULL) return;
    if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    free(temp);
}

void Print()
{
    struct Node* temp=front;
    while(temp !=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;

    }
}

int main()
{
    Enqueue(2);Print();printf("\n");
    Enqueue(4);Print();printf("\n");
    Enqueue(6);Print();printf("\n");
    Dequeue();Print();printf("\n");
    Enqueue(9);Print();printf("\n");
}
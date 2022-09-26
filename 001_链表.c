#include <stdio.h>
#include <stdlib.h>

//创建链表
 struct Node
    {
        int data;
        struct Node* next;
    };

    struct Node* head;//创建一个列表

//插入数据
    void Insert(int x)
    {

        struct Node* temp =(struct Node* ) 
        malloc (sizeof(struct Node));
        //struct  Node* temp=new Node();
        temp->data=x;
        temp->next=head;
        head=temp;
    }

//遍历链表
    void Print()
    {
     struct Node* temp=head;
     printf("List is ");
     while (temp != NULL)
     {
        printf("%d",temp->data);
        temp=temp->next;
     }
     printf("\n");
    }

int main()
{
   head=NULL;//设列表为空
   printf("How many number?\n");
   int n,i,x;
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("Enter the number \n");
    scanf("%d",&x);
    Insert(x);
    Print();
   }

    
}
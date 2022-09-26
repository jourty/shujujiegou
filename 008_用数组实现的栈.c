#include <stdio.h>
#define MAX_SIZE 101

int A[MAX_SIZE];
int top=-1;//空栈的意思

//写入数据
void Push(int x)
{
if(top == MAX_SIZE-1)//超出数组的长度
{
    printf("Error:stack overflow\n");
    return;
}
A[++top]=x;
}

//删除
void Pop()
{
if(top==1)
{
    printf("Error: No element to pop\n");
    return;
}
top--;
}

//打印栈
void Print()
{
int i;
printf("Stack: ");
for(i=0;i<=top;i++)
    printf("%d ",A[i]);
printf("\n");
}

//栈顶
int Top()
{
    return A[top];
}
int main()
{
Push(2);Print();
Push(5);Print();
Push(10);Print();
Pop();Print;
Push(12);Print();
}
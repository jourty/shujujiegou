#include<stdio.h>
#include<stdlib.h>
#include<stack>// C++标准库的stack 


void Reverse(char *C,int n)
{
    stack<char> S;//空字符栈
    for(int i=0;i<n;i++)
    {
        S.push(C[i]);
    }

    for(int i=0;i<n;i++)
    {
        C[i]=S.top();
        S.pop();
    }
}

int main()
{
    char C[51];
    printf("Enter a string: ")
    gets(C);
    Reverse(C,strlen(C));
    printf("Output = %s",C);
}
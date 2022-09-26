#include <stdio.h>
#include <stdlib.h>

struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};
struct BstNode* GetNewNode(int data)
{
    struct BstNode* newNode=(struct BstNode*)malloc(sizeof(struct BstNode*));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
}

struct BstNode* Insert(struct BstNode* root,int data)
{
    if(root==NULL){
        root=GetNewNode(data);
    }
    else if (data <=root->data)
    {
       root->left=Insert(root->left,data);
    }
    else
    {
        root->right=Insert(root->right,data);
    }
    
    return root;
}

int FindMin(struct BstNode* root)
{
if(root==NULL){
    printf("Error: Tree is empty\n");
    return -1;
}
while (root->left !=NULL)
{
    root=root->left;
}
return root->data;
}
int main()
{
    struct BstNode* root =NULL;
    root=Insert(root,15);root=Insert(root,10);root=Insert(root,20);
    root=Insert(root,25);root=Insert(root,8);root=Insert(root,12);

    FindMin(root);

}

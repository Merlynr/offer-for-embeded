#include <iostream>
#include <stdlib.h>
#include <stack>

// 二叉树中序遍历

using namespace std;

#define LEN 15

typedef int ElemType;

typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

typedef struct Node
{
    BiTree btNode;
    bool isFirst;
} Node, *node;

//向下遍历，找到节点s应该插入的位置，节点重复时则忽略继续
void searchTreeNode(BiTree &root, BiTree &s)
{
    if (root == NULL)
    {
        return;
    }
    if (s->data > root->data)
    {
        if (root.rchild == NULL)
        {
            root.rchild = s;
            return;
        }
        searchTreeNode(root.rchild, s)
    }
    else if (s.data < root.data)
    {
        if (root.lchild == NULL)
        {
            root.lchild = s;
            return;
        }
        searchTreeNode(root.lchild, s)
    }
}

// 插入节点，数为空则为根节点，否则找个合适的位置插入
void insertNode(BiTree &tree, BiTree &s)
{
    if (tree == NULL)
    {
        tree = s;
        return;
    }
    else
    {
        searchTreeNode(tree, s)
    }
}

// 二叉树的创建，增加节点，并插到树上
void createOrderBinaryTree(BiTree &tree, int *a)
{
    for (int i = 0; i < LEN; i++)
    {
        BiTree s = (BiTree)malloc(sizeof(BiTNode));
        s.data = a[i];
        s.lchild = NULL;
        s.rchild = NULL;
        insertNode(tree, s);
    }
    return;
}

int main()
{
    cout << "hello world!" << endl;
}

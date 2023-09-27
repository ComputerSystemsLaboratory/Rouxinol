// 木の巡回
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 30
const int NIL = -1;

typedef struct node
{
    // 節点の親
    int parent;
    // 節点の左の子
    int left;
    // 節点の右の子
    int right;
}Node;

// グローバル変数の定義
Node Tree[MAX_N];
int treeWalk[MAX_N];
int n, elementNum;

void print(int num);
void preorderTreeWalk(int ele_num);
void inorderTreeWalk(int ele_num);
void postorderTreeWalk(int ele_num);

int main(void)
{

    int i, node, left, right, root;

    cin >> n;

    for( i = 0; i < n; i++)
    {
        // 全要素の初期化
        Tree[i].parent = NIL;
        Tree[i].left = NIL;
        Tree[i].right = NIL;
    }

    for( i = 0; i < n; i++ )
    {
        cin >> node >> left >> right;

        // 左の子を設定する
        Tree[node].left = left;
        // 右の子を設定する
        Tree[node].right = right;

        // 親の情報を設定
        if( left != NIL )
        {
            Tree[left].parent = node;
        }

        if( right != NIL )
        {
            Tree[right].parent = node;
        }
    }

    for( i = 0; i < n; i++ )
    {
        if( Tree[i].parent == NIL )
        {
            // ルートの要素を検索する
            // [ 親 = NIL ] のものが, rootとなる
            root = i;
        }
    }

    elementNum = 0;
    preorderTreeWalk(root);
    print(1);

    elementNum = 0;
    inorderTreeWalk(root);
    print(2);

    elementNum = 0;
    postorderTreeWalk(root);
    print(3);

    return 0;
}

// 結果の表示用
void print(int num)
{
    switch(num)
    {
        case 1:
            printf("Preorder\n");
        break;

        case 2:
            printf("Inorder\n");
        break;

        case 3:
            printf("Postorder\n");
        break;
    }

    for(int i = 0; i < n; i++)
    {
    	printf(" ");

        printf("%d", treeWalk[i]);
    }

    printf("\n");
}

// 根節点、左部分木、右部分木の順で節点を巡回
void preorderTreeWalk(int ele_num)
{
    if( ele_num == NIL)
    {
    	return;
    }

    treeWalk[elementNum++] = ele_num;
    preorderTreeWalk(Tree[ele_num].left);
    preorderTreeWalk(Tree[ele_num].right);

    return;
}

int pre_right = 0;

// 左部分木、根節点、右部分木の順で節点を巡回
void inorderTreeWalk(int ele_num)
{

    if( ele_num == NIL)
    {
    	return;
    }

    inorderTreeWalk(Tree[ele_num].left);
    treeWalk[elementNum++] = ele_num;
    inorderTreeWalk(Tree[ele_num].right);

    return;
}

// 左部分木、右部分木、根節点の順で節点を巡回
void postorderTreeWalk(int ele_num)
{

    if( ele_num == NIL)
    {
    	return;
    }

    postorderTreeWalk(Tree[ele_num].left);
    postorderTreeWalk(Tree[ele_num].right);
    treeWalk[elementNum++] = ele_num;

    return;
}


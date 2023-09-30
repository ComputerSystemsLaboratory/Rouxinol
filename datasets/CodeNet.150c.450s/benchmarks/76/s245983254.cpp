// 二分探索木の挿入
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
//const int NIL = -1;

typedef struct node
{
    // 節点の値
    int key;
    // 節点の親
    struct node *parent;
    // 節点の左の子
    struct node *left;
    // 節点の右の子
    struct node *right;
}Node;

// グローバル変数の定義
Node *Tree;

void preorderTreeWalk(Node *Tree);
void inorderTreeWalk(Node *Tree);
void postorderTreeWalk(Node *Tree);

void insert(int num);
bool find(int num);

int main(void)
{

    int n, num;
    char str[10];

    cin >> n;

    for(int i = 0; i < n; i++)
    {
    	// 命令を取得
        scanf("%s", str);

        if( str[0] == 'i' )
        {
        	// --- 挿入の命令の時 ---

        	scanf("%d", &num);

            insert(num);
        }
        else if( str[0] == 'f' )
        {
            // --- 検索の命令の時 ---

        	scanf("%d", &num);

            if( find(num) )
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else
        {
        	// --- 表示の命令 ---

            inorderTreeWalk(Tree);
            printf("\n");
            preorderTreeWalk(Tree);
            printf("\n");
        }
    }

    return 0;
}

// 二分探索木の検索関数
bool find(int num)
{
    bool ret = false;
    Node *tree = Tree;

    while( tree != NULL )
    {
        if( num < tree->key )
        {
            // 左の子を探索
            tree = tree->left;
        }
        else if( num > tree->key )
        {
            // 右の子を探索
            tree = tree->right;
        }
        else
        {
            // 値が見つかったので, 処理終了
            ret = true;
            break;
        }
    }

    return ret;
}

// 二分探索木の挿入関数
void insert(int num)
{
    Node *tree, *parent;

    // 追加する要素の親
    parent = NULL;
    // 木の根 ( 先頭アドレス )
    tree = Tree;

    Node *newNode = new Node;

    newNode->key = num;
    newNode->parent = NULL;
    newNode->left = NULL;
    newNode->right = NULL;

    while( tree != NULL )
    {
        // 親の候補の取得
    	parent = tree;

        if( newNode->key < tree->key )
        {
            // 左の子へ移動
        	tree = tree->left;
        }
        else
        {
            // 右の子へ移動
        	tree = tree->right;
        }
    }

    // 追加する要素の親を設定
    newNode->parent = parent;

    if( parent == NULL )
    {
        // 木が空の時
    	newNode->parent = NULL;
        // 木が空のなので, 実体を入れる
        Tree = newNode;

    }
    else if( newNode->key < parent->key )
    {
        // 左の子にする
    	parent->left = newNode;
    }
    else
    {
        // 右の子にする
    	parent->right = newNode;
    }

    return;
}

// 先行順巡回
// 根節点、左部分木、右部分木の順で節点を巡回
void preorderTreeWalk(Node *Tree)
{

    if( Tree == NULL )
    {
    	return;
    }

    printf(" %d", Tree->key);
    preorderTreeWalk(Tree->left);
    preorderTreeWalk(Tree->right);

    return;
}

int pre_right = 0;

// 中間順巡回
// 左部分木、根節点、右部分木の順で節点を巡回
void inorderTreeWalk(Node *Tree)
{

    if( Tree == NULL )
    {
    	return;
    }

    inorderTreeWalk(Tree->left);
    printf(" %d", Tree->key);
    inorderTreeWalk(Tree->right);

    return;
}

// 後行順巡回
// 左部分木、右部分木、根節点の順で節点を巡回
void postorderTreeWalk(Node *Tree)
{

    if( Tree == NULL )
    {
    	return;
    }

    postorderTreeWalk(Tree->left);
    postorderTreeWalk(Tree->right);
    printf(" %d", Tree->key);

    return;
}

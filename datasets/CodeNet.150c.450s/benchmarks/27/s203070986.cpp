#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdlib>

using namespace std;

struct Node
{
    Node *parent;
    Node *left;
    Node *right;
    int key;
};

const int MAX = 500000;

void insert(Node **root, int num)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->key = num;
    newNode->left = newNode->right = NULL;

    Node *targetParent = NULL;
    for (Node *x = *root; x != NULL; )
    {
        targetParent = x;
        x = (newNode->key < x->key) ? x->left : x->right;
    }

    newNode->parent = targetParent;
    // データがまだない場合は、今回作成したノードを根にする
    if (targetParent == NULL)
        *root = newNode;
    else
    {
        if (newNode->key < targetParent->key)
            targetParent->left = newNode;
        else
            targetParent->right = newNode;
    }
}

void inorder(Node *u)
{
    if (u == NULL) return;
    inorder(u->left);
    cout << " " << (u->key);
    inorder(u->right);
}
void preorder(Node *u)
{
    if (u == NULL) return;
    cout << " " << (u->key);
    preorder(u->left);
    preorder(u->right);
}

void freedive(Node *u)
{
    if (u == NULL) return;
    if (u->left != NULL) freedive(u->left);
    if (u->right != NULL) freedive(u->right);
    free(u);
}

int main(int argc, char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    Node *root = NULL;

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line); // 改行が現れるまで読む。改行はスキップ

        const string TARGET("insert ");

        if (line.find(TARGET) != string::npos)
        {
            int num =  std::atoi(line.substr(TARGET.size()).c_str());
            insert(&root, num);
        }
        else
        {
            inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
    }

    freedive(root);

    return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// 双方向連結リスト
struct Node
{
    int key;
    Node *prev;
    Node *next;
};

// リスト操作しやすいように起点ノードとなるnilを用意。
Node *nil;
void init()
{
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

// リストの先頭に要素を追加
void insert(int key)
{
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    x->next = nil->next;
    x->prev = nil;

    // nilの次の要素が先頭なので、その要素のprevをxに向ける
    nil->next->prev = x;

    nil->next = x;
}

// keyに一致するNodeを返す。存在しない場合は、nilノードを返す。
Node *listSearch(int key)
{
    Node *cur = nil->next;
    while (cur != nil && cur->key != key)
    {
        cur = cur->next;
    }
    return cur;
}
void deleteNode(Node *t)
{
    if (t == nil) return;
    t->prev->next = t->next;
    t->next->prev = t->prev;
    free(t);
}
void deleteFirst()
{
    deleteNode(nil->next);
}
void deleteLast()
{
    deleteNode(nil->prev);
}
void deleteKey(int key)
{
    // nilはdeleteNodeで削除されないので、nilのチェックは不要。
    deleteNode(listSearch(key));
}
void cleanList()
{
    for (Node *c = nil->next; c != nil; c = c->next)
        free(c);

    if (nil != NULL)
        free(nil);
}
void printList()
{
    if (nil == NULL) return;

    for (Node *c = nil->next; c != nil; c = c->next)
    {
        cout << c->key;
        if (c->next != nil)
            cout << " ";
    }
    cout << endl;
}


int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    init();

    int n;
    cin >> n;
    cin.ignore(); // 改行読み飛ばし

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);

        string::size_type pos = line.find(" ");
        if (pos == string::npos)
        {
            if (line.find("F") == string::npos)
                deleteLast();
            else
                deleteFirst();
        }
        else
        {
            int key = atoi(line.substr(pos+1).c_str());
            if (line.find("insert") == 0)
                insert(key);
            else
                deleteKey(key);
        }
    }
    printList();
    cleanList();
    return 0;
}

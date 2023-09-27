#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
typedef struct Node{
    struct Node *prev;
    struct Node *next;
    int key;
} *node;
node root;
void Init()
{
    root = (node)malloc(sizeof(*root));
    root->prev=root;
    root->next=root;
    root->key=0;
}
void insert(int x)
{
    node in = (node)malloc(sizeof(*root));
    in->key = x;
    in->next = root->next;
    in->prev = root;
    root->next->prev = in;
    root->next = in;
}
node search(int x)
{
    node i = root->next;
    while(i!=root)
    {
        if(i->key==x)
            break;
        i=i->next;
    }
    return i;
}
void delete_node(node del)
{
    del->prev->next = del->next;
    del->next->prev = del->prev;
    free(del);
}
void delete_key(int x)
{
    node i = search(x);
    if(i!=root)
        delete_node(i);
}
int main()
{
    int n,x;
    char s[12];
    node i;
    cin>>n;
    Init();
    while(n--)
    {
        cin>>s;
        if(strcmp(s,"insert")==0)
        {
            cin>>x;
            insert(x);
        }
        else if(strcmp(s,"delete")==0)
        {
            cin>>x;
            delete_key(x);
        }
        else if(strcmp(s,"deleteFirst")==0)
        {
            delete_node(root->next);
        }
        else
        {
            delete_node(root->prev);
        }
    }
    i = root->next;
    while(i!=root)
    {
        cout<<i->key;
        if(i!=root->prev)
            cout<<' ';
        i = i->next;
    }
    cout<<endl;
    return 0;
}
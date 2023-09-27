#include <cstdio>
#include <cstring>
#include <memory>

using namespace std;

struct node{
    int key;
    shared_ptr<node> prev;
    shared_ptr<node> next;
    /*
    node *prev;
    node *next;
    */
};

shared_ptr<node> head;
//node *head;

void insert(int x)
{
    auto n=make_shared<node>();
    //auto n=new node();
    n->key=x; n->prev=head; n->next=head->next;
    head->next->prev=n;
    head->next=n;
}

void delete_(int x)
{
    auto n=head->next;
    while(n != head && n->key != x){
        n=n->next;
    }
    if(n != head){
        n->prev->next=n->next;
        n->next->prev=n->prev;
    }
    //delete n;
}

void deleteFirst()
{
    auto n=head->next;
    if(n != head){
        head->next=n->next;
        n->next->prev=head;
    }
    //delete n;
}

void deleteLast()
{
    auto n=head->prev;
    if(n != head){
        head->prev=n->prev;
        n->prev->next=head;
    }
    //delete n;
}

int main()
{
    int n;
    char command[16];

    auto print=[]{
        auto nn=head->next;
        bool flag=false;
        while(nn!=head){
            if(flag){
                printf(" ");
            }
            printf("%d", nn->key);
            flag=true;
            nn=nn->next;
        }
        printf("\n");
    };

    head=make_shared<node>();
    //head=new node();
    head->key=-1;
    head->prev=head->next=head;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", command);
        if(!strcmp(command, "insert")){
            int x;
            scanf("%d", &x);
            insert(x);
        } else if(!strcmp(command, "delete")){
            int x;
            scanf("%d", &x);
            delete_(x);
        } else if(!strcmp(command, "deleteFirst")){
            deleteFirst();
        } else if(!strcmp(command, "deleteLast")){
            deleteLast();
        }
    }

    print();
    return 0;
}
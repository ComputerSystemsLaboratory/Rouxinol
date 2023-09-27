#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
 
struct Node{
    int key;
    Node *prev,*next;
};
 
Node *nil;
void init(){
    nil=(Node *)malloc(sizeof(Node));
    nil->next=nil;
    nil->prev=nil;
}
 
void insert(int key){
    Node *x=(Node *)malloc(sizeof(Node));
    x->key=key;
    x->next=nil->next;
    nil->next->prev=x;
    nil->next=x;
    x->prev=nil;
}
 
Node* listSearch(int key){
    Node *cur=nil->next;
    while(cur!=nil && cur->key!=key){
        cur=cur->next;
    }
    return cur;
}
 
void deleteNode(Node *t){
    if(t==nil)return;
    t->prev->next=t->next;
    t->next->prev=t->prev;
    free(t);
}
 
void deleteFirst(){
    deleteNode(nil->next);
}
 
void deleteLast(){
    deleteNode(nil->prev);
}
 
void deleteKey(int key){
    deleteNode(listSearch(key));
}
 
int n;
int main(void){
    init();
    char com[21];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int key;
        scanf("%s",com);
        if(com[0]=='i'){
            scanf("%d",&key);
            insert(key);
        }
        else if(com[0]=='d'){
            if(strlen(com)>6){
                if(com[6]=='F')deleteFirst();
                if(com[6]=='L')deleteLast();
            }else{
                scanf("%d",&key);
                deleteKey(key);
            }
        }
    }
    Node *now=nil->next;
    while(now!=nil){
        printf("%d%c",now->key,now->next==nil?'\n':' ');
        now=now->next;
    }
    return 0;
}


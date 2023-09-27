#include <stdio.h>
#include <string.h>

typedef struct node_ node;

struct node_{
    int x;
    node *before;
    node *next;
};

class list{
    node* head;
    node* tail;
public:
    list(){
        head = NULL;
        tail = NULL;
    }
    void insertX(int n);
    void deleteX(int n);
    void deleteFirst();
    void deleteLast();
    void show();
};

void list::insertX(int n){
    node *tmp = new node;
    if(head)head->before = tmp;
    else tail = tmp;
    tmp->before = NULL;
    tmp->next = head;
    tmp->x = n;
    head = tmp;
}

void list::deleteX(int n){
    if(!head)return;
    if(head->x==n){
        deleteFirst();
        return;
    }
    node *ptr=head->next;
    while(ptr->x!=n){
        ptr=ptr->next;
        if(!ptr)return;
    }
    ptr->before->next = ptr->next;
    if(ptr->next)ptr->next->before=ptr->before;
    else tail = ptr->before;
    delete ptr;
}

void list::deleteFirst(){
    if(!head)return;
    if(head==tail){
        delete head;
        head = NULL;
        tail = NULL;
    }else{
        head = head->next;
        delete head->before;
        head->before = NULL;
    }
}

void list::deleteLast(){
    if(!tail)return;
    if(tail==head){
        delete tail;
        head = NULL;
        tail = NULL;
    }else{
        tail = tail->before;
        delete tail->next;
        tail->next = NULL;
    }
}

void list::show(){
    node *tmp = head;
    while(tmp){
        printf("%d",tmp->x);
        if(tmp->next)printf(" ");
        tmp = tmp->next;
    }
    printf("\n");
}

int main(){
    list ob;
    int i, n, x;
    char command[12];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",command);
        if(strcmp(command,"insert")==0){
            scanf("%d",&x);
            ob.insertX(x);
        }else if(strcmp(command,"delete")==0){
            scanf("%d",&x);
            ob.deleteX(x);
        }else if(strcmp(command,"deleteFirst")==0){
            ob.deleteFirst();
        }else if(strcmp(command,"deleteLast")==0){
            ob.deleteLast();
        }else{
            printf("else.\n");
        }
    }
    ob.show();
    return 0;
}


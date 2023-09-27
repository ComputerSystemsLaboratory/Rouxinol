    #include <iostream>
    #include <cstdio>
    #include <cstring>
    #include <cstdlib>
    using namespace std;

    struct Node{
      int key;
      Node *prev;
      Node *next;
    };

    Node *head;

    Node *listSearch(int key){
      Node *cur = head->next;
      while(cur != head && cur->key != key){
        cur = cur->next;
      }
      return cur;
    }

    void init(){
      head = new Node;
      head->prev = head;
      head->next = head;
    }

    void printlist(){
      Node *cur = head->next;
      int isf = 0;
      while(1){
        if(cur == head)break;
        if(isf++ > 0)printf(" ");
        printf("%d",cur->key);
        cur = cur->next;
      }
      printf("\n");
    }

    void insert(int key){
      Node *x = new Node;
      x->key = key;
      x->next = head->next;
      head->next->prev = x;
      head->next = x;
      x->prev = head;
    }

    void deleteNode(Node *t){
      if(t == head)return;
      t->prev->next = t->next;
      t->next->prev = t->prev;
      free(t);
    }

    void deleteFirst(){
      deleteNode(head->next);
    }

    void deleteLast(){
      deleteNode(head->prev);
    }

    void deletekey(int key){
      deleteNode(listSearch(key));
    }

    int main(){
      int key,n,i;
      char com[20];
      scanf("%d",&n);
      init();
      for(i = 0;i < n; i++){
        scanf("%s%d",com,&key);
        if(com[0] == 'i'){insert(key);}
        else if(com[0] == 'd'){
          if(strlen(com) > 6){
            if(com[6] == 'F')deleteFirst();
            else if(com[6] == 'L')deleteLast();
          }
          else{
            deletekey(key);
          }
        }
      }
      printlist();
      return 0;
    }
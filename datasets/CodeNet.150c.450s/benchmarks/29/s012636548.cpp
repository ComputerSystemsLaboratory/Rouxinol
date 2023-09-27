#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Dllist{
  struct Node{
    T value;
    Node *prev, *next;
  };
  
  Node first,end;
  public:
  Dllist(){
    first.next = &end;
    end.prev = &first;
  }

  void insert(T v){
    Node *n = new Node;
    n->value = v;
    n->next = first.next;
    n->prev = &first;
    n->next->prev = n;
    first.next = n;
  } 

  void delete_node(Node *node){
    node->prev->next = node->next;
    node->next->prev = node->prev;
    delete node;
  }

  void delete_last(){
    delete_node(end.prev);
  }

  void delete_first(){
    delete_node(first.next);
  }

  void delete_val(T v){
    Node *cur = first.next;
    while(cur!=&end){
      if(v==cur->value){
        delete_node(cur);
        return;
      }
      cur = cur->next;
    }
  }

  bool is_empty(){
    return first.next == &end;
  }

  void output(){
    Node *n = first.next;
    int i = 0;
    while(n!=&end){
      if(i) {cout<<" ";}
      cout<<n->value;
      n = n->next;
      i++;
    }
    cout<<endl;
  }
};

int main(){
  Dllist<int> list;
  int n;
  cin>>n;

  string ope;
  int val;
  for(int i=0;i<n;i++){
    cin>>ope;

    if(ope=="insert"){
      cin>>val;
      list.insert(val);
    }else if(ope=="delete"){
      cin>>val;
      list.delete_val(val);
    }else if(ope=="deleteFirst"){
      list.delete_first();
    }else if(ope=="deleteLast"){
      list.delete_last();
    }
  }
  list.output();
}
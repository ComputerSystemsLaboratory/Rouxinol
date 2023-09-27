#include <iostream>
#include <string>

using namespace std;

template <typename T>
struct Node{
  T value;
  struct Node *next;
  struct Node *prev;
  Node(){
    //????????¶?????????????¬??????????????????????
    prev = next = this;
  }
  Node(T value, Node *prev, Node *next){
    this->value = value;
    this->prev = prev;
    this->next = next;
  }
};

template <typename T>
class DoublyLinkedList {
private:
  Node<T> *head;
  Node<T> *cur;
  void add(T value)
  {
    // ?????¨?????????????????????????¬?????????????????¬????
    // ??????????????¨???????????????????????????????¬????????????????
    Node<T> *node = new Node<T>(value, cur, cur->next);
    cur->next = cur->next->prev = node;
    cur = node;
  }
public:
  DoublyLinkedList(){
      head = cur = new Node<T>();
  }

  void push_front(T value){
    cur = head;
    add(value);
  }

  void push_back(T value){
    cur = head->prev;
    add(value);
  }

  void setCurToFirst(){
    cur = head;
  }

  T next(){
    cur = cur->next;
    return cur->value;
  }

  bool isTail(){
    return cur->next == head;
  }

  void deletenum(int num){
    setCurToFirst();
    while(!isTail()){
      int n = next();
      if (n == num){
        remove_current_node();
        return;
      }
    }
  }

  void deleteFirst(){
    cur = head->next;
    remove_current_node();
  }

  void deleteLast(){
    cur = head->prev;
    remove_current_node();
  }

  void remove_current_node(){
    cur->prev->next = cur->next;
    cur->next->prev = cur->prev;
    delete cur;
    cur = cur->prev;
  }
};

int main(int argc, char const *argv[]) {
  DoublyLinkedList<int> list;
  //??\???
  int count;
  cin >> count;
  string cmd;
  int num;
  for (int i = 0; i < count; i++) {
    cin >> cmd;
    if(cmd == "insert"){
      cin >> num;
      list.push_front(num);
    }else if (cmd == "delete"){
      cin >> num;
      list.deletenum(num);
    }else if (cmd == "deleteFirst"){
      list.deleteFirst();
    }else if (cmd == "deleteLast"){
      list.deleteLast();
    }
  }
  //??????
  list.setCurToFirst();
  while(!list.isTail()){
    int n = list.next();
    cout << n;
    if (list.isTail()){
      cout << endl;
    }else{
      cout << ' ';
    }
  }
  return 0;
}
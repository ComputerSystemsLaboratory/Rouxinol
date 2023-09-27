#include<iostream>
using namespace std;

class Node{
  int Date;
  Node* p;
  Node* n;
public:
  Node(int i){
    Date = i;
  }
  void SetPrev(Node* p){
    this->p = p;
  }
  void SetNext(Node* n){
    this->n = n;
  }
  void SetDate(int d){
    Date = d;
  }
  int GetData(){
    return Date;
  }
  Node* GetPrev(){
    return p;
  }
  Node* GetNext(){
    return n;
  }
};

class LinkedList{
  Node* First;
  Node* Last;
public:
  LinkedList(){
    First = new Node(0);
    Last = new Node(0);
    First->SetNext(Last);
    Last->SetPrev(First);
  }
  void insert(int x){
    Node* tmp = new Node(x);
    tmp->SetNext(First->GetNext());
    tmp->SetPrev(First);
    First->GetNext()->SetPrev(tmp);
    First->SetNext(tmp);
  }
  void Delete(int x){
    Node* tmp = First->GetNext();
    while(tmp!=Last){
      if(tmp->GetData() == x){
        tmp->GetPrev()->SetNext(tmp->GetNext());
        tmp->GetNext()->SetPrev(tmp->GetPrev());
        delete tmp;
        break;
      }
      tmp = tmp->GetNext();
    }
  }
  void DeleteFirst(){
    Node* tmp = First->GetNext();
    First->SetNext(tmp->GetNext());
    tmp->GetNext()->SetPrev(First);
    delete tmp;
  }
  void DeleteLast(){
    Node* tmp = Last->GetPrev();
    Last->SetPrev(tmp->GetPrev());
    tmp->GetPrev()->SetNext(Last);
    delete tmp;
  }
  friend ostream& operator<< (ostream& os,const LinkedList& ll);
};

ostream& operator<< (ostream& os,const LinkedList& ll){
  Node* tmp = ll.First->GetNext();
  while(1){
    os << tmp->GetData();
    tmp = tmp->GetNext();
    if(tmp == ll.Last){
      break;
    }
    os << ' ';
  }
  return os;
}

int main(){

  LinkedList ll;
  int num=0;
  cin >> num;
  string order="";
  int x=0;
  for(int i=0; i<num; i++){
    cin >> order;
    if(order == "insert"){
      cin >> x;
      ll.insert(x);
    //  cout << ll << endl;
    }
    else if(order == "delete"){
      cin >> x;
      ll.Delete(x);
      //cout << ll << endl;
    }
    else if(order == "deleteFirst"){
      ll.DeleteFirst();
    //  cout << ll << endl;
    }
    else if(order == "deleteLast"){
      ll.DeleteLast();
    //  cout << ll << endl;
    }
  }
  cout << ll << endl;
  return 0;
}
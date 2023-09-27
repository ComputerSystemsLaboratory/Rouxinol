#include <iostream>
#include <string>

using namespace std;

struct List{
  string str;
  List* next;

  List(){
    str = "";
    next = NULL;
  }
};


struct Dict{
  List list[20000];

  int hash(string str){
    int hash_num = 0;
    for(int i=0;i<str.length();i++){
      int c = (int)str[i];
      hash_num += c*c*c+i*c*c+c*i*i+c;
    }
    return hash_num;
    
  }
  void insert(string str){
    int key = hash(str)%20000;
    List *target;
    List *item = new List();
    item->str = str;
    
    target = &list[key];
    while(target->next != NULL){
      if(target->next->str==str) return;
      target = target->next;
    }
    target->next = item;
  }
  void find(string str){
    int key = hash(str)%20000;
    List *target;
    target = &list[key];
    if(target->next==NULL){
      cout<<"no"<<endl; return;
    }
    target = target->next;
    while(true){
      if(target->str==str){
        cout<<"yes"<<endl;
        return;
      }else if(target->next==NULL){
        cout<<"no"<<endl;
        return;
      }else{
        target = target->next;
      }
    }
  }
};

int main(){
  int n; cin>>n;
  string ope, str;
  Dict dict;
  for(int i=0;i<n;i++){
    cin>>ope>>str;
    if(ope=="insert"){
      dict.insert(str);
    }else if(ope=="find"){
      dict.find(str);
    }
  }
}
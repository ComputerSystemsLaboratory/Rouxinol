#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct DLL{
  ll x;
  DLL *next;
  DLL *prev;
};

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n; cin >> n;
  DLL *head;
  head = (DLL *)malloc(sizeof(DLL));
  head->x = -1;
  head->next = head;
  head->prev = head;
  for(int i = 0; i < n; i++){
    string comm; ll v;
    cin >> comm;
    if(comm == "insert"){
      cin >> v;
      DLL *x;
      x = (DLL *)malloc(sizeof(DLL));
      x->x = v;
      x->next = head->next;
      head->next->prev = x;
      head->next = x;
      x->prev = head;
    }
    if(comm == "delete"){
      cin >> v;
      DLL *key;
      key = head->next;
      while(1){
        if(key == head) break;
        if(key->x == v){
          key->prev->next = key->next;
          key->next->prev = key->prev;
          free(key);
          break;
        }
        key = key->next;
      }
    }
    if(comm == "deleteFirst"){
      DLL *key = head->next;
      key->prev->next = key->next;
      key->next->prev = key->prev;
      free(key);
    }
    if(comm == "deleteLast"){
      DLL *key = head->prev;
      key->prev->next = key->next;
      key->next->prev = key->prev; 
      free(key);
    }
  }

  DLL* a;
  a = head->next;
  while(a != head){
    if(a->next == head)
      cout << a->x << endl;
    else
      cout << a->x << " ";
    a = a->next;
  }

  return 0;
}
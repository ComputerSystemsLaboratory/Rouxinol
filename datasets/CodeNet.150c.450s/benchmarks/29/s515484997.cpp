#include<iostream>
#include<list>
#include<stdio.h>
#include<string>

using namespace std;

list<int> L;

int main(void) { 
  int n, item;
  char c[10];


  cin >> n;
  for(int i = 0; i < n; i++) {
    scanf("%s", c);
    if(c[0] == 'i') {
      scanf("%d", &item);
      L.push_front(item);
    }
    else if(c[6] == 'L') {
      L.pop_back();
    }

    else if(c[6] == 'F') {
      L.pop_front();
    }
    else if(c[0] == 'd') {
      scanf("%d", &item);
      for(list<int>::iterator it = L.begin(); it != L.end(); it++) {
        if(*it == item) {
          L.erase(it);
          break;
        }
      }
    }
  }

  int sep = 0;
  for(list<int>::iterator it =  L.begin(); it != L.end(); it++) {
    if(sep == 0) {
      sep++;
      cout << *it;
    }
    else {
      cout << " " << *it;
    }
  }
  cout << endl;
  return 0;
}
#include <iostream>
#include <cstdio>
#include <list>
#include <algorithm>
using namespace std;

int main() {
  int n,x;
  char a[20];

  list<int> v;
  cin>>n;
  for (int i=0;i<n;i++){
    scanf("%s", a);
    if(a[0]=='i'){
      cin>>x;
      v.push_front(x);
    }else if(a[6]=='L'){
      v.pop_back();
    }else if(a[6]=='F'){
      v.pop_front();
    }else if(a[0]=='d'){
      cin>>x;
      for(list<int>::iterator it=v.begin();it!=v.end();it++) {
	if(*it==x){
	  v.erase(it);
	  break;
	}
      }
    }
  }
  int i=0;
  for(list<int>::iterator it=v.begin();it!=v.end();it++){
    if(i++) cout<<' ';
    cout<<*it;
  }
  cout<<'\n';

  return 0;

}


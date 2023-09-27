#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(void){
  int n;
  string c;
  list<int> l;
  list<int>::iterator it;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>c;
    if(c=="insert"){
      int x;
      cin>>x;
      l.push_front(x);
    }
    if(c=="delete"){
      int x;
      cin>>x;
      for(it=l.begin();it!=l.end();it++){
	if(*it==x){
	  l.erase(it);
	  break;
	}
      }
    }
    if(c=="deleteFirst")
      l.pop_front();
    if(c=="deleteLast")
      l.pop_back();
  }
  int f=0;
  for(it=l.begin();it!=l.end();it++){
    if(f)
      cout<<" ";
    cout<<*it;
    f++;
  }
  cout<<endl;
  return 0;
}
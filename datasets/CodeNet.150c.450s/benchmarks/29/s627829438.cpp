#include <iostream>
#include <list>
#include <string>
using namespace std;
int main(){

  int n,x,i;
  list <int> a;
  list<int>::iterator it;
  string com;

  cin>>n;
  for(i=0;i<n;i++){
    cin>>com;
    if(com=="deleteFirst") a.pop_front();
    else if(com=="deleteLast") a.pop_back();
    else{
      cin>>x;
      if(com=="insert") a.push_front(x);
      else for(it=a.begin();it!=a.end();it++) if(*it==x){
            a.erase(it);
            break;
          }
    }
  }
  i=0;
  for(it=a.begin();it!=a.end();it++){
    if(i++) cout<<" ";
    cout<<*it;
  }
  cout<<endl;

  return 0;

}
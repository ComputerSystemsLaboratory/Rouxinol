#include<iostream>
#include<cstdio>
#include<cstring>
#include<list>
#include<algorithm>
using namespace std;

#define NMAX 2000000+10

int main(int argc,char* argv[]){
  std::ios_base::sync_with_stdio(false);
  int n,x;
  string inp;
  list<int> data;
  list<int>::iterator iter,fun;

  cin>>n;

  while(n--){
    cin>>inp;

    if(inp[6]=='F') data.pop_front();
    else if(inp[6]=='L') data.pop_back();
    else{
      cin>>x;
      if(inp[0]=='i') data.push_front(x);
      else{
	fun=find(data.begin(),data.end(),x);
	if(fun!=data.end()) data.erase(fun);
      }
    }
  }

  iter=data.begin();
  cout<<*iter++;
  while(iter!=data.end()){
    cout<<" "<<*iter++;
  }
  cout<<endl;
  return 0;
}
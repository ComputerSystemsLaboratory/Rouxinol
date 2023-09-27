#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<sstream>
#include<list>
#include<algorithm>
using namespace std;

int main(int argc,char* argv[]){
  std::ios_base::sync_with_stdio(false);
  int n,key;
  list<int> li;
  string str;
  list<int>::iterator itli;

  cin>>n;

  
  while(n--){
    cin>>str;

    if(str[6]=='F') li.pop_front();
    else if(str[6]=='L') li.pop_back();
    else{
      cin>>key;
      if(str[0]=='i')
	li.push_front(key);
      else{
	itli=find(li.begin(),li.end(),key);
	if(itli!=li.end())
	  li.erase(itli);
      }
    }
  }

  itli=li.begin();
  cout<<*itli++;
  while(itli!=li.end()){
    cout<<" "<<*itli++;
  }
  cout<<endl;
}
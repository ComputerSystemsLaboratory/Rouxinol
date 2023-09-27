#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <sstream>
#include <set>

using namespace std;

int l;
string a0;
int used[10000001];
int main(){
  while(cin>>a0>>l&&(l)){
    memset(used,-1,sizeof(used));
    //set<int> st;
    int sz=l-a0.size();
    //st.insert(atoi(a0.c_str()));
    used[atoi(a0.c_str())]=0;
    for(int i=0;i<sz;i++)a0='0'+a0;
    string init=a0;
    string cur=a0;
    //cout<<cur<<endl;
    for(int i=1;;i++){
      string nxt=cur;
      sort(nxt.begin(),nxt.end());
      reverse(nxt.begin(),nxt.end());
      int b=atoi(nxt.c_str());
      reverse(nxt.begin(),nxt.end());
      int a=atoi(nxt.c_str());
      int c=b-a;
      if(used[c]!=-1){
	cout<<used[c]<<" "<<c<<" "<<i-used[c]<<endl;
	break;
      }
      //st.insert(c);
      used[c]=i;
      stringstream ss;
      ss<<c;
      cur=ss.str();
      int sz=l-cur.size();
      for(int i=0;i<sz;i++){
	cur='0'+cur;
      }
      //cout<<cur<<endl;
    }
  }
  
  return 0;
}
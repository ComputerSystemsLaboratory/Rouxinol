#include <iostream>
#include <vector>
#include <set>
using namespace std;

int solve(vector<bool> selected, int s, int n,set<vector<bool> > &visited){
  int cnt=0;
  if(visited.find(selected)!=visited.end())return 0;
  visited.insert(selected);
  if(n==0){
  	if(s==0)return 1;
  	else return 0;
 	}
  for(int i=0;i<=9;++i){
    if(!selected[i]){
    	selected[i]=true;
    	cnt+=solve(selected,s-i,n-1,visited);
    	selected[i]=false;
    }
  }
  return cnt;
}

int main(void){
  int n,s;
  while(cin>>n>>s,n||s){
  	set<vector<bool> > visited;
    vector<bool> a(10);
    cout<<solve(a,s,n,visited)<<endl;
  }
}
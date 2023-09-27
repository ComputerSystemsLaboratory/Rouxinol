#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<stack>
using namespace std;
typedef pair<int,int> P;

int nextPos();

int n;
vector<int>vec[105];
stack<int>st;
map<int,P>mp;

int main(){
  //ios_base::sync_with_stdio(false);
  int a,m,c;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a >> m;
    for(int j=0;j<m;j++){
      cin >> c;
      vec[a].push_back(c);
    }
  }

  int count = 1;
  while(1){
    int next = nextPos();
    if(next == 0) break;
    st.push(next);
    mp[next].first = count;
    count++;
    while(!st.empty()){

      bool flag=false;
      for(int i=0;i<vec[next].size();i++){
	int temp = vec[next][i];
	if(mp[temp].first == 0){
	  st.push(temp);
	  next = temp;
	  mp[temp].first = count;
	  count++;
	  flag = true;
	  break;
	}
      }

      if(!flag){ //いくところが無かったら
	mp[next].second = count;
	count++;
	st.pop();

	while(!st.empty()){
	  int point = st.top();
	  
	  flag = false;
	  for(int i=0;i<vec[point].size();i++){
	    int temp2 = vec[point][i];
	    if(mp[temp2].first == 0){
	      next = temp2;
	      st.push(next);
	      mp[next].first = count;
	      count++;
	      flag = true;
	      break;
	    }
	  }

	  if(flag) break;
	  else{
	    st.pop();
	    mp[point].second = count;
	    count++;
	  }
	}
      }
    }
  }

  for(int i=1;i<=n;i++){
    cout << i << " " << mp[i].first << " " << mp[i].second << endl;
  }

  return 0;
}

int nextPos(){
  int a=0;

  for(int i=1;i<=n;i++){
    if(mp[i].first == 0){
      a = i;
      break;
    }
  }

  return(a);
}
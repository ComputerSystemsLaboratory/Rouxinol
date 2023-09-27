#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int timetime = 0;

void dfs(int cur, vector<vector <int> > &list, vector<int> &d, vector<int> &f) {
		d[cur] =timetime;
		timetime +=1;
    for(int i = 0; i < list.size();i++){
      vector<int>::iterator n1end = list[cur].end();
	  vector<int>::iterator n1sres = find(list[cur].begin(),list[cur].end(),i);
      if(d[i] == -1 &&  n1end != n1sres  ){
        dfs(i,list,d,f);
      }
    }
    f[cur] = timetime;
    timetime +=1;
}

int main() {
  int np;
  int k,t,x;
  cin >> np ;
 
  vector <vector <int> > list(np);
  for(int i = 0;i<np;i++) {
    cin >> k;
    cin >> t;
    for(int j = 0; j < t ;j++) {
      cin >>x;
      list[k-1].push_back(x-1);
    }
  }
  for(int i = 0 ; i< np;i++){
	sort(list[i].begin(),list[i].end());
  }
  vector <int> d(np,-1);
  vector <int> f(np,0);
  dfs(0,list,d,f);
  	  int flag =0;
  do {
	  flag = 0;
	  for(int i = 0; i< np ;i++) {
		if(d[i] == -1){
				  dfs(i,list,d,f);
				  flag = 1;
				  break;
		}
	  }

  }while(flag ==1);
  for(int i = 0;i < np; i++){
    cout << i+1 <<" "<<d[i]+1 <<" "<<f[i]+1<<endl;
  }


  return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
#define REP(i,n) for(int i = 0;i < (n);i++)
#define pb push_back
using namespace std;
const int INF = 1e9;
typedef long long ll;

int main(){
  int map[400][400] = {0};
  REP(i,400){
    REP(j,400){
      map[i][j] = -1;
    }
  }
  int N;
  while(cin >> N,N){
    REP(i,400){
    REP(j,400){
      map[i][j] = -1;
    }
  }
    map[200][200] = 0;
    int t = 0;
    REP(k,N-1){
      int n,d;
      cin >> n >> d;
      int f;
      t++;
      
    REP(i,400){
      REP(j,400){
	f = 0;
	if(map[i][j] == n){
	  //cout << i << " " << j << endl;
	  if(d == 0){
	    
	    map[i][j-1] = t;
	    //cout << map[i][j-1] << endl;
	  }
	  else if(d == 1)
	    map[i+1][j] = t;
	  else if(d == 2)
	    map[i][j+1] = t;
	  else{
	    map[i-1][j] = t;
	    //cout << map[i-1][j] << endl;
	  }
	  
	  /*f = 1;
	    break;*/
	}
      }
      /*if(f == 1)
	break;*/
    }
    
    }
    int u,d,l,r;
    REP(i,400){
      REP(j,400){
	if(map[j][i] != -1)
	  r = i;
	
      }
    }
    //cout << map[199][200] << endl;
    int f = 0;
    REP(i,400){
      REP(j,400){
	if(map[j][i] != -1){
	  l = i;
	  f = 1;
	  break;
	}      
	
      }
      if(f == 1)
	break;
    }
    f = 0;
    REP(i,400){
      REP(j,400){
	if(map[i][j] != -1){
	  u = i;
	  f = 1;
	  break;
	}      
      
      }
      if(f == 1)
	break;
    }
    REP(i,400){
      REP(j,400){
	if(map[i][j] != -1)
	  d = i;
      
      }
    }
    //cout << l << " " << r << " " << u << " " << d << endl; 
    cout << r-l+1 << " " << d-u+1 << endl;
  }
  return 0;
}
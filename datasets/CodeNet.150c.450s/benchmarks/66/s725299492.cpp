#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

string nextString(){string s;cin >> s;return s;}

int main(){
  int n,m;
  vector<string> regid;
  string id;
  int isopen=0;
  cin >> n;
  REP(i,n)regid.push_back(nextString());
  cin >> m;
  REP(i,m){
    cin >> id;
    REP(j,regid.size()){
      if(id == regid[j]){
	if(isopen){
	  isopen--;
	  cout << "Closed by " << id << endl;
	}else{
	  isopen++;
	  cout << "Opened by " << id << endl;
	}
	break;
      }
      if(j == regid.size()-1)
	cout << "Unknown " << id << endl;
    }
  }
      
  return 0;
}
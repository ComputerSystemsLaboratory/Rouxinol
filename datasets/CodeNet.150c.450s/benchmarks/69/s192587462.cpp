//include
//------------------------------------------
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//debug
//-------------------------------------------
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int n;
int m=10;
int** data;

void print_matrix(){

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << data[i][j] << " ";
        }
        cout<<endl;
    }
}

bool dfs(int* row, int c, int head1, int head2){

    if(c+1 == m && (row[c] > head1 || row[c] > head2)){
        return true;
    }

    if(row[c] > head1){
        if(dfs(row, c+1, row[c], head2)){
            return true;
        }
    }

    if(row[c] > head2){
        if(dfs(row, c+1, head1, row[c])){
            return true;
        }
    }

    return false;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  data = (int**)malloc(sizeof(int*)*n);

  for(int i=0; i<n; i++){
      int* b = (int*)malloc(sizeof(int)*10);
      cin >> b[0] >> b[1] >> b[2] >> b[3] >> b[4] >> b[5] >> b[6] >> b[7] >> b[8] >> b[9];
      data[i] = b;

      bool res = dfs(data[i],0,0,0);
      if(res){
          cout << "YES" << endl;
      }else{
          cout << "NO" <<endl;
      }
  }

  for(int i=0; i<n; i++){
      free(data[i]);
  }
  free(data);

  return 0;
}
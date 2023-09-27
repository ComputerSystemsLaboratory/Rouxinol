#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;


using namespace std;

vector<int> tovec(int h,int w){
  vector<int> v(3);
  v[0] = (h*h)+(w*w);
  v[1] = h;
  v[2] = w;
  return v;
}

int main(){

  vector< vector<int> > tbl;

  for(int i=1;i<151;i++){
    for(int j=i+1;j<151;j++){
      tbl.push_back(tovec(i,j));
    }
  }

  sort(tbl.begin(),tbl.end());
  

 // rep(i,tbl.size())  cout << tbl[i][0] << " " << tbl[i][1] << " " << tbl[i][2] << endl;



  while(1){
    int h,w;
    cin >> h >> w;
    if(h==0&&w==0) break;
    
    vector<int> v = *upper_bound(tbl.begin(),tbl.end(),tovec(h,w));
    
    cout << v[1] << " " << v[2] << endl;

  }

}
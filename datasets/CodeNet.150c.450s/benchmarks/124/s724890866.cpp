#include <iostream>
#include <vector>
using namespace std;
#define INF 10000000

int main(){
  int n,k,ti,tv,tc;
  int d[100];
  vector<int> v[100],w[100];
  
  int minc,mi,i;
  bool flg[100];
  
  cin >> n;
  for (i=0;i<n;i++){
    cin >>ti>>k;
    for (int j=0;j<k;j++){
      cin >> tv>>tc;
      v[ti].push_back(tv);
      w[ti].push_back(tc);
    }
    d[i]=INF;
    flg[i]=false;
  }

  d[0]=0;
  while (true){
    minc=INF;
    for (i=0;i<n;i++){
      if (!flg[i]&&d[i]<minc){
	minc=d[i];
	mi=i;
      }
    }

    for (i=0;i<n;i++){
      //cout << d[i] << " ";
    }
    //cout <<" :" << mi << endl;
    if (minc==INF) break;
    flg[mi]=true;
    for (i=0;i<v[mi].size();i++){
      if (!flg[v[mi][i]]&&d[v[mi][i]]>d[mi]+w[mi][i]){
	//cout <<v[mi][i] <<" "<<d[mi]+w[mi][i] << endl;
	d[v[mi][i]]=d[mi]+w[mi][i];
      }
    }
  }
  
  for (i=0;i<n;i++){
    cout << i <<" "<<d[i]<<endl;
  }
  
  return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int i,n,m,d[10001],p[10001];
  while(1){
    cin >> n >> m;
    if(n==0 && m==0)break;
    for(i = 0; i < n; i++){
      cin >> d[i] >> p[i];
    }
    //   for(i = 0; i < n; i++){
    //for(int j = 0; j < n-1; j++){
    //	if(p[i] < p[i+1]){
    //	  swap(p[i],p[i+1]);
    //	  swap(d[i],d[i+1]);
    //	}
    // }
    // }
    for(i = 0; i < n; i++){
      for(int j = 0; j < n-1; j++){
	if(p[j] < p[j+1]){
	  swap(p[j],p[j+1]);
	  swap(d[j],d[j+1]);
	}
      }
    }

    i = 0;
    while(m>0){
      //  cout << "m " << m << endl;
      m--;
      d[i]--;
      if(d[i]==0)i++;
    }
    // for(i = 0; i < n; i++){
    // cout << "d[i]" << d[i] << " " << "p[i]" << p[i] << endl;
    // }
    int result = 0;
    for(i = 0; i < n; i++){
      result += d[i] * p[i];
    }
    cout << result << endl;
  }
  return 0;
}
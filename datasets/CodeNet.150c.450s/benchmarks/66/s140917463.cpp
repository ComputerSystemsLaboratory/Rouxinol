#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,count=0,b;
  string u[300],t[300];
  int a[300];
  cin >> n;
  for(int i=0; i<n; i++) cin >> u[i];
  cin >> m;
  for(int i=0; i<m; i++) cin >> t[i];
    
  b=0;
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(t[i]==u[j]){
	    a[b] = 1;
	    break;
	  }
	  else a[b] = 0;
	}
	b++;
  }
  //for(int i=0; i<m; i++) cout << a[i] << " ";
  for(int i=0; i<m; i++){
    if(a[i]==1){
      if(count==0){
        cout << "Opened by " << t[i] << endl;
	    count = 1;
	    }
	    else if(count==1){
	    cout << "Closed by " << t[i] << endl;
	    count = 0;
	    }
	  }
    else cout << "Unknown " << t[i] << endl;
  }
  return 0;
}
//cout << "Opend by " << t[j] << endl;
//cout << "Closed by " << t[j] << endl;
//cout << "Unknown " << t[j] << endl;

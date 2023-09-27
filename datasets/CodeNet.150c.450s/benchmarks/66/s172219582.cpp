#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,cnt=0;
  int cnt2=0;

  cin >> n;
  
  string a[n];
  
  for(int i =0;i<n;i++){
    cin >> a[i];
  }

  cin >> m ;
  string b[m];
  
  for(int i=0;i<m;i++){
    cin >>b[i];
    for(int j=0;j<n;j++){
      if(b[i]==a[j] && cnt % 2 == 0){
	cnt++;
	cnt2++;
	cout << "Opened by " << b[i] << endl;
	break;
      } 
      else if(b[i]==a[j] && cnt % 2 == 1){
	cnt++;
	cnt2++;
	cout << "Closed by " << b[i] << endl;
	break;
      }
    }
    if(cnt2 == 0)cout << "Unknown " << b[i] << endl;
    cnt2 =0;
    }
}


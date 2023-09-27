#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int count1=0,count2=0;
  for(int i=0; i<n; i++){
	string tarous;
	string hanakos;
	cin >> tarous >> hanakos;

	if(tarous>hanakos) count1 += 3; 
	if(tarous==hanakos) {
	  count1 += 1; count2 += 1;
	}
	if(tarous<hanakos) count2 += 3;
  }
  cout << count1 << " " << count2 << endl;

  return 0;
}


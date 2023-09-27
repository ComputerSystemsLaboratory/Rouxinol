#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;

  while(1){
	cin >> n;

	if(n == 0)
	  break;

	vector<int> a(n);

	for(int i = 0;i < n;++i)
	  cin >> a[i];

	int min_g = 1000000;
	
	for(int i = 0;i < n - 1;++i){
	  for(int j = i + 1;j < n;++j){
		min_g = min(min_g,abs(a[i] - a[j]));
	  }
	}

	cout << min_g << endl;
	
  }

}


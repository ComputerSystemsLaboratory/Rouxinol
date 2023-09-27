#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
	int a[110], i=1, b[110];
	vector<int> ans;
	for(int i=0 ; i<110 ; i++){
		b[i] = 0;
	}

	while(cin >> a[i]){
		if(i==100)break;

		b[ a[i] ]++;
	}
	int num = 0;
	for(int i=1 ; i<=100 ; i++){
		if( num < b[i] ){
			ans.clear();
			num = b[i];
			ans.push_back(i);
		}
		else if( num == b[i] ){
			ans.push_back(i);
		}
	}

	sort( ans.begin() , ans.end() );
	for(int i=0 ; i<ans.size() ; i++){
		cout << ans[i] << endl;
	}
	return 0;
}
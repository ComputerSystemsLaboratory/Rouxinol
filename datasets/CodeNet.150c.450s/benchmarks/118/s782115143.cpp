#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
	int n,y,m,d,ans,small;
	cin >> n;
	for(int i=0;i<n;i++){
		ans =0;
		cin >> y >> m >> d;
		if(y%3==0){
			ans += 200-20*(m-1)-d+1;
		}else{
			small = (m-1)/2;
			ans += 195-20*(m-1-small)-19*small-d+1;
		}
		ans += 200*(333-y/3)+195*(666-(y-y/3));
		cout << ans <<endl;
	}
	return 0;
}
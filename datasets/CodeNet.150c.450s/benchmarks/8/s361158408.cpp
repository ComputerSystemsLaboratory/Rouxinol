#include <bits/stdc++.h>
using namespace std;

int main(){
	int t = 0,h = 0,n = 0;
	string taro,hanako;

	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> taro >> hanako;
		if (taro == hanako){t++;h++;}
		else if(taro < hanako)h = h+3;
		else if(taro > hanako)t = t+3;
	}
	cout << t << " " << h << endl;
	return 0;
}
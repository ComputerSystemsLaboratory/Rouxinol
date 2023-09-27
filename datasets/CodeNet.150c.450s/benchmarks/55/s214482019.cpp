#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <string>

using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()

int main(){
	while(1){
		char buf[1100];
		scanf("%s",buf);
		if(buf[0]=='0') break;
		ll int ans = 0;
		for(int i=0;buf[i]!='\0';i++){
			ans += buf[i] - '0';
		}
		cout << ans << endl;
	}
		
	return 0;

}
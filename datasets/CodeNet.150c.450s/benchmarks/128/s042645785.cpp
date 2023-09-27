#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<climits>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
	int j=0;
	string str;
	char ans[20];
	cin >> str;
	for(int i=str.size()-1;i>=0;i--){
		ans[j] = str[i];
		j++;
	}
	ans[j] = '\0';
	cout << ans << endl;
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	while(true){
	int n,k;
	cin >> n >> k;
	if(n==0&&k==0)break;
	
	vector<int> s(n);
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=s[i];
	}
	int ans = sum;
	for(int i=0;i+k<n;i++){
		sum+=s[i+k]-s[i];
		if(sum>ans)ans=sum;
	}
	cout << ans << endl;
	}
	
	return 0;
}
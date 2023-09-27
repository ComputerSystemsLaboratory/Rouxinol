#include <iostream>
#include <vector>

#define rep(i,a) for(int i = 0;i < (a); i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef vector<int> vi;

int main(){
    int n, k;
    while(cin >> n >> k, n || k){
	vi nums(n);
	int sum = 0;
	rep(i,k){
	    cin >> nums[i];
	    sum += nums[i];
	}
	int ans = sum;
	repi(i,k,n){
	    cin >> nums[i];
	    sum -= nums[i-k];
	    sum += nums[i];
	    if(sum > ans){
		ans = sum;
	    }
	}
	cout << ans << endl;
    }
}
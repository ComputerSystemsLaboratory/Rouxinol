#include <iostream>
using namespace std;

int n, s;
int ans;

void tadoru(int f, int step, int sum)
{
	if(step == n){
		if(sum == s){
			ans++;
		} else {
			return;
		}
	}
	if(sum > s) return;

	for(int i=f+1; i<10; i++){
		tadoru(i, step+1, sum+i);
	}
	return;
}

int main()
{
	while(cin>>n>>s){
		if(!n&&!s) break;
		ans = 0;
		tadoru(-1, 0, 0);
		cout<<ans<<endl;
	}
	return 0;
}
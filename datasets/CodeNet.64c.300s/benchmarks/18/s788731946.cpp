#include<iostream>
#include<algorithm>
#include<utility>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define P pair<int, int>

using namespace std;


int main(){
	int n;
	int ways[31];
	ways[0] = 1, ways[1] = 1, ways[2] = 2;
	loop(i,3,31){
		ways[i] = ways[i - 1] + ways[i - 2] + ways[i - 3];		
	}

	while (1){
		cin >> n;
		if (n == 0){
			break;
		}
		int ans;
		ans = ways[n] / 3650;
		if (ways[n] % 3650){
			ans++;
		}


		cout << ans << endl;
	}

}
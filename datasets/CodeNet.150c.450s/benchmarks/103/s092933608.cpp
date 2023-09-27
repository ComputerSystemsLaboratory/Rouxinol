#include <iostream>
using namespace std;

// グローバル変数としてn, s, ansを定義
int n, s, ans;

void dfs(int i, int sum, int N){  // iは深さ、sumは和、Nは使用した項数
	// 最初はi,sum,Nともに0であることに注意
	
	// 使用した項数がちょうどnかつ、和がsであれば、ans++
	if(N==n && sum==s){
		ans++;
		return;
	}
	// 深さが最後まで到達または、使用した項数がnにもかかわらず和がsでなければ終了
	if(i==10 || N==n){
		return;
	}
	// その数を足す
	dfs(i+1, sum+i, N+1);
	// 足さない
	dfs(i+1, sum, N);
}


int main()
{
	while(cin>>n>>s){
		if(n==0 && s==0){
			break;
		}
		
		// ansを初期化
		ans = 0;
		dfs(0, 0, 0);
		cout<<ans<<endl;
		
	}
	return 0;
}
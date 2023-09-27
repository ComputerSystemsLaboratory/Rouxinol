#include<bits/stdc++.h>

using namespace std;
int N;
int n[210];
int d[210];
int t[210][2];
int input(){
	cin >> N;
	for(int i = 0; i < N-1;i++){
		 cin >> n[i] >> d[i];
	}
	return (N!=0);
}

void solve(){
	t[0][0] = 0;
	t[0][1] = 0;

	int max_x = 0;
	int max_y = 0;
	int min_x = 0;
	int min_y = 0;
	int a;
	for(int i = 0;i < N-1;i++){
		int x;
		int y;
		a = n[i];
		if(d[i] == 0){ 
			x = t[a][0] - 1;
			y = t[a][1];
		}
		else if(d[i] == 1){
			x = t[a][0];
			y = t[a][1] - 1;
		}
		else if(d[i] == 2){
			x = t[a][0] + 1;
			y = t[a][1];
		}
		else if(d[i] == 3){
			x = t[a][0];
			y = t[a][1] + 1;
		}
		max_x = max(max_x, x);
		max_y = max(max_y, y);
		min_x = min(min_x, x);
		min_y = min(min_y, y);
		t[i+1][0] = x;
		t[i+1][1] = y;
		//cout << x << y << endl;
	}

//	int ans = (max_x - min_x + 1) * (max_y - min_y + 1);
 	//cout << ans << endl;
//	cout << max_x << ' ' << min_x << ' ' << max_y << ' ' << min_y << endl;
	cout << (max_x - min_x + 1) << ' ' << (max_y - min_y + 1) << endl;
}


		
int main(){
	while(input())solve();
}	


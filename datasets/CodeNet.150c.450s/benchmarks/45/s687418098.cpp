#include<iostream>
#include<string>
#include<set>
#include<utility>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>
#include<stack>

using namespace std;


//二乗法

int main(){
	long long m,n;
	int MOD = 1000000007;
	cin >> m >> n;
	long long ans = 1;
	while(n != 0){
		if(n%2 == 1){
			ans *= m;
			ans %= MOD;
		}
		n = n/2;
		m = m*m;
		m %= MOD;
	}
	cout << ans << endl;

	return 0;
}

//カードゲーム
/*
int A[100];
int B[100];	
int n;
int ansT, ansH;
int taro = n - 1, hana = n;

void solve(int c, bool b){
		if(taro == 0){
			ansT = hana;
			return;
		}
		if(hana == 0 ){
			ansH = taro;
			return;
		}
		if(b){
			for(int i=0; i<n; i++){
				if(c < B[i]){
					B[i] = -1;
					hana--;
					solve( B[i], !b);
					return;
				}
				else if(i==n-1){
					solve(0 , b);
				}
			}
		}
		else{
			for(int i=0; i<n; i++){
				if(c < A[i]){
					A[i] = -1;
					taro--;
					solve( A[i], !b);
					return;
				}
				else if(i==n-1){
					solve(0, b);
				}
		}
	}
}
int main(){
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}

		for(int i=0; i<n; i++){
			cin >> A[i];
		}
		sort(A, A+n);

		int m = 0;
		for(int i=0; i<n ; i++){
			for(int j=B[m]+1; j<=2*n; j++){
				if(A[i] != j){
					B[m] = j;
					m++;
				}
			}
		}

		solve(A[0], true);

		cout << ansT << endl << ansH << endl;
	}
	return 0;
}
*/
//最高のピザ
/*
int n,a,b,c;
int A[110];
int dp[110][110];

int main(){
	cin >> n >> a >> b >> c;

	for(int i=1; i<=n; i++){
		cin >> A[i];
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + A[i]);
		}
	}

	int ans = c/a;
	for(int i=0; i<=n; i++){
		ans = max(ans, (dp[n][i]+c)/(a + b*i) );
	}

	cout << ans << endl;

	return 0;
}
*/
	/*
	int x = 0;
	dp[0].first = 0;

	for(int j=0; j<n; j++){
		//X.push_back(temp);
		if(dp[j].first < dp[j].first + A[j]){
			dp[j+1].first = dp[j].first + A[j];
			dp[j+1].second = x;
		}
		else{
			dp[j+1] = dp[j];
		}
		//dp.push_back(-1);
	}

	int ans = 0;
	for(int i=0; i<n+1; i++){
		ans = max( (dp[i].first + c)/(dp[i].second * b + a), ans);
	}

	cout << ans << endl;
	*/
	//cout << solve(0) << endl;

//チーズ
/*
int h,w,n;
pair<int,int> factory[10];
int cost[1000][1000];
queue< pair<int,int> > que;
string S[1000];
int A[2][4] = {{-1, 1 ,0, 0}, {0, 0, -1, 1}};

void Solve(pair<int,int> Now){
	for(int i = 0; i<4; i++){
		int x = Now.first + A[0][i];
		int y = Now.second + A[1][i];
		if(x >= 0 && x < h&&y >= 0&&y < w && S[Now.first + A[0][i]][Now.second + A[1][i]] != 'X'){
			if(cost[Now.first][Now.second] + 1 < cost[x ][y]){
				 cost[x][y] = cost[Now.first][Now.second] + 1;
				 que.push(make_pair(x, y));
			}
		}
	}
	
	
	//上
	if(Now.first - 1 >= 0 && S[Now.first - 1][Now.second] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first - 1][Now.second]){
			 cost[Now.first - 1][Now.second] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first -1, Now.second));
		}
	}
	//下
	if(Now.first + 1 < h && S[Now.first + 1][Now.second] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first + 1][Now.second]){
			 cost[Now.first + 1][Now.second] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first + 1, Now.second));
		}
	}
	//hidari
	if(Now.second - 1 >= 0 && S[Now.first][Now.second - 1] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first][Now.second - 1]){
			 cost[Now.first][Now.second - 1] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first, Now.second - 1));
		}
	}
	//r
	if(Now.second +1 < w && S[Now.first][Now.second + 1] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first][Now.second + 1]){
			 cost[Now.first][Now.second + 1] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first , Now.second + 1));
		}
	}
	
}

int main(){
	//チーズ
	
	cin >> h >> w >> n;

	for(int i=0; i<h; i++){
		cin >> S[i];
	}

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(S[i][j] == 'S'){
				factory[0] = make_pair(i, j);
			}
			else if(S[i][j] != 'X' && S[i][j] != '.'){
				factory[S[i][j]-'0'] = make_pair(i,j);
			}
		}
	}


	int ans = 0;
	for(int i=0; i<n; i++){
		
		for(int j=0; j<h; j++){
			for(int k=0; k<w; k++){
				cost[j][k] = 999999;
			}
		}

		cost[factory[i].first][factory[i].second] = 0;
		que.push(factory[i]);
		while(!que.empty()){
			Solve(que.front());
			que.pop();
		}
		ans += cost[factory[i+1].first][factory[i+1].second];
	}

	cout << ans << endl;


	return 0;	
}
*/

	//宝探し
	/*
	int n,m;
	cin >> n >> m;
	int A[5100][5100];
	//A[0][0] = 0;
	/*
	for(int i=0; i<5000; i++){
		for(int j=0; j<5000; j++){
			//A[i+1][j+1] = A[i+1][j] + A[i][j+1] -A[;
			
		}
	}
	*/
	/*
	int Px[5000],Py[5000];
	for(int i=0; i<n; i++){
		int x,y;
		cin >> x >> y;
		
		//A[x][y] = 1;
	}
	
	int B[5100][5100];
	B[0][0] = 0;
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			B[i+1][j+1] = B[i+1][j] + B[i][j+1] - B[i][j] + A[i+1][j+1];
		}
	}

	for(int i=0; i<m; i++){
		int x,y,X,Y;
		cin >> x >> y >> X >> Y;
		cout << B[x][y] - B[X-1][Y-1] << endl;
	}
	*/


	//超観光都市
	/*
		int w,h,n;
		cin >> w >> h >> n;
		int ans = 0;
		int X,Y;
		int x,y;
		cin >> x >> y;
		X = x;
		Y = y;

		for(int i=0; i<n-1; i++){
			cin >> x >> y;
			bool hugou = ((x-X>0&&y-Y>0)||(x-X<0&&y-Y<0));
			if(hugou == 1){
				ans += max(abs(x-X), abs(y-Y));
			}
			else{
				ans += abs(x-X)+abs(y-Y);
			}
			X = x;
			Y = y;
		}
		cout << ans << endl;
*/
	//すごろく
	/*
	while(true){
		int n,m;
		cin >> n >> m;
	if(n==0 && m==0) break;

		int X[1000],Y;
		for(int i=0 ; i<n; i++){
			cin >> X[i];
		}

		int i,a=0;
		for(i=0; i<m; i++){
			cin >> Y;
			a += Y;
			a += X[a];
			if(a+1>=n) break;
		}
		cout << i + 1<< endl;
	}
	*/

	//看板(未完成）
	/*
	int n,Ans;
	string name;
	cin >> n >> name;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		int x[100];
        int l=0;
		for(int j=0; j<name.size(); j++){
			for(int k=0; k<s.size(); k++){		
				if(name[j]==s[k]){
					x[l]=k;
					l++;
				}
			}
		}
		int p=x[1]-x[0];
		for(int j=1; j<l+1; j++){
			if(p!=x[j]-x[j-1])
				break;
			

		}
	}
	*/
	//サッカー
	/*
	int n;
	cin >> n;
	int P[100];
	for(int i = 0; i<n; i++){
		P[i]=0;
	}
	
	for(int i=0; i<n*(n-1)/2; i++){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		if(c>d)
			P[a-1] += 3; 
		if(c==d){
			P[a-1]++;
			P[b-1]++;
		}
		if(c<d)
			P[b-1] += 3;
	}

	int Q[100];
	for(int i =0; i<n; i++){
		Q[i] = P[i];
	}
	sort(Q, Q+n);
	reverse(Q,Q+n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(P[i]==Q[j]){
				cout << j+1 << endl;
				break;
			}
		}
	}
	*/

	//気象予報士
	/*
		int h,w;
		int x=-1;
		cin >> h >> w;
		
		for(int i=0; i<h; i++){
			for(int j =0; j<w; j++){
				char a;
				cin >> a;
				if(a=='c'){
					cout << 0;
					x = j;
				}
				else if(x != -1){
					cout << j-x;
				}
				else
					cout << -1;
				if(j==w-1)
					break;
				cout << " ";
			}
			cout << endl;
			x = -1;
		}
		*/

	/*
	//数あて
	int n;
	cin >> n;
	int p[200][3];

	for(int i=0;i<n;i++)
	{
		cin >> p[i][0] >> p[i][1] >> p[i][2];
	}

	int _p;
	for(int k=0;k<3;k++)
	{
		for(int i=0;i<n;i++)
		{
			_p = p[i][k];
			for(int j=i+1;j<n;j++)
			{
				if(_p == p[j][k])
				{
					p[i][k] = 0;
					p[j][k] = 0;
				}
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		cout << p[i][0] + p[i][1] + p[i][2] << endl;
	}
	*/

	/*
	//得点
	int ai,am,as,ae,bi,bm,bs,be;
	cin >> ai >> am >> as >> ae >> bi >> bm >> bs >> be;
	int answer=ai+am+as+ae;
	if(answer < bi+bm+bs+be)
	{
	/	answer=bi+bm+bs+be;
	}
	cout << answer << endl;
	*/
	
	//おつり
/*	int onum;
	while(true){
		int N;
		cin >> N;
		if(N == 0) break;
		onum=0;
		int oturi = 1000-N;
		if(oturi >= 500)
		{
			onum++;
			oturi -= 500;
		}
		while(oturi>=100)
		{
			onum++;
			oturi -= 100;
		}
		if(oturi >= 50)
		{
			onum++;
			oturi -= 50;
		}
		while(oturi>=10)
		{
			onum++;
			oturi -= 10;
		}
		if(oturi >= 5)
		{
			onum++;
			oturi -= 5;
		}
		while(oturi>=1)
		{
			onum++;
			oturi -= 1;
		}
		 cout << onum << endl;
	}
   */

	//レシート
	/*
	while(true){
		int N;
		cin >> N;
		if(N==0) break;
		int a[9];
		for(int i=0;i<9;i++){
			cin >> a[0];
		}

	}
	
	/*
	int N;
	int i = 0;
	while(i<N){
		i++;
	}
	for(int i=0; i<N; i++)
	*/
	/*
	int N;
	int x;
	set<int> a;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> x;
		a.insert(x);
	}
	cout << a.size() << endl;
	*/
	
	//投票
	/*
	int N,M;
	cin >> N >> M;
	int a;
	int A[1000];
	int B[1000];
	int X[1000][2];
	
	for(int i=0; i<N; i++){
		cin >> A[i];
		X[i][0] = i;
		X[i][1] = 0;
	}
	for(int j=0; j<M;j++){
		cin >> B[j];
	}
	for(int j=0; j<M; j++){
		for(int i=0; i<N; i++){
			if(A[i] <= B[j]){
				X[i][1]++;
				break;
			}
		}
	}
	for(int i=1; i<N; i++){
		if(X[i-1][1]<X[i][1])
			X[i-1][0] = X[i][0];
	}
	cout << X[0][0]+1 << endl;
	*/
	/*
	int N,M;
	cin >> N >> M;
	int A[1000];
	int vote[1000];
	for(int i=0; i<N; i++){
		cin >> A[i];
		vote[i] =0;
	}
	int B;
	for(int i=0; i<M; i++){
		cin >> B;
		for(int j=0; j<N; j++){
			if(A[j]<=B){
				vote[j]++;
				break;
			}
		}
	}
	int temps = 0;
	int ans=0;
	for(int i=0; i<N; i++){
		if(vote[i] >= temps){
			temps = vote[i];
			ans = i;
		}
	}
	cout << ans+1 << endl;
	*/

//	return 0;
//}
/*
int max(int i,int j){
	if(i < j) i=j;
	return i;
}
*/

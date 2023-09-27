#include<set>
using namespace std;
#include<iostream>
int	main(){

/*	int N, C, c[100], n;
	cin >> N;
	C = 0;
	n = 0;

	for (int i = 0; i <N; i++ ){
		cin >> c[i];
		C+= c[i];
	}

	for (int i = 0; i <N; i++ ){
		if (c[i] <= 0.1*C){
			n+= 30;
		}
	}
	cout << n << endl;
}
	/*
	while(true){
	
	int A,B,C,D,E,F,G,H,I,J,answer;
		
	cin >> A;
	if(A == 0) return 0;
	cin >> B >> C >> D >> E >> F >> G >> H >> I >> J;
	answer = A - B - C - D-E-F-G-H-I-J;
	cout << answer << endl;

	}
	*/
	/*
	int A,B,C,D,E,F;

	cin >> A, B, C, D;
	if(A < B, C, D){ 
		cout << B + C + D << endl;
	}
	
	else if(B < A, C, D){
		cout << A + C + D << endl;
	}

	else if(C < A && C < B && C < D){
		cout << A + B + D << endl;
	}

	else if(D < A && D < B && D < C){
		cout << A + B + C << endl;
	}

	if(E < F){
		cout << F << endl;
	}

	else{
		cout << E << endl;
	}
	
	return 0;
}*/
	/*
	int N, M;
	cin >> N >> M;
	cout << N + M << endl << N - M << endl << N * M << endl << N / M << endl;
}*/

/*int N, M; 
	cin >> N >> M;
	cout << N % M << endl;
}*/

/*	int N;
	cin >> N;
	cout << -(N % 2)+1 ;
}*/

	/*int A, B, C, D, E ;
	cin >> A >> B >> C >> D >> E;
	cout << (A + B + C + D + E) / 5 ;
}*/

	/*int A, B, C, D ;
	cin >> A >> B >> C >> D;
	cout << (A + B + C + D) / 60 << endl << (A + B + C + D) % 60 << endl;
	*/

/*	int A,B;
	cin >> A >> B;
	cout << ( A + B ) / 2 << endl;*/

/*	int m, f, b;
	cin >> m >> f >> b;

	if ( m + f >= b && m <= b ){
		cout << b - m << endl;
	}
	
	if ( m + f > b && m > b ){
		cout << 0 << endl;
	}


	if ( m + f < b ){
		cout << "NA" << endl;
	}*/

/*	int X , x ;
	cin >> X ;

	x = X % 7 ;

	if ( x == 2 ){
		cout << "sat" << endl;
	}

	if ( x == 3 ){
		cout << "sun" << endl;
	}

	if ( x == 4 ){
		cout << "mon" << endl;
	}

	if ( x == 5 ){
		cout << "tue" << endl;
	}

	if ( x == 6 ){
		cout << "wed" << endl;
	}

	if ( x == 0 ){
		cout << "thu" << endl;
	}

	if ( x == 1 ){
		cout << "fri" << endl;
	}*/

	/*int a , b , N ;
	cin >> a >> b >> N ;

	int s[100] , f[100];
	for ( int i=0 ; i<N ; i++ ){
		cin >> s[i] >> f[i];
	
		if (( s[i] <= a && a < f[i]) || s[i] < b && b <= f[i] || s[i] >= a && f[i] <= b ){
			cout << 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}*/

	/*int N, A, B, C;
	vector <int> a;
	vector <int> dp;

	int pizza (int C){
		if (C == N) return 0;
		if (dp[C]! = -1) return dp[C];
		dp[C] = max (pizza(C+1); pizza(C+1)+a[C]);
		return dp[C];
	}

		int main(){
			cin >> N;
			for(int i = 0; i<N; i++){
				int tmp;
				cin >> tmp;
				a.push_back(tmp);
				dp.push_back(-1);
			}
			cout << pizza(0) << endl;

			return 0;
	}
		cout << C[i]/(A+B);*/
	
/*	int main(){
		int N, A, B, C, a, dp, i;

		dp[i+1] = max(dp[i], dp[i]+a[]), C[0] = 0;
	}*/

/*	long long N;
	cin >> N;
	cout << 264 + 52 * N << endl;
}*/

	/*int H, W;
	cin >> H >> W;
	if (H * 4 == W * 3){
		cout << "YOKO" << endl;
	}

	else{
		cout << "TATE" << endl;
	}


	}*/


	/*int X, Y;
	cin >> X >> Y;
	int m, n, l;
			cin >> m >> n >> l;
	X/Y == m/n;

	if (X/l == m && Y/l == n && l != 1){
			cout << l*(m+n)+2-(l-1) << endl;
	}

	else {
		cout << X+Y << endl;
	}*/

	int i, m, s, e, I, M, S, E;
	cin >> i >> m >> s >> e >> I >> M >> S >> E;

	if(i + m + s + e >= I + M + S + E){
		cout << i + m + s + e << endl;
	}

	else{
		cout << I + M + S + E << endl;
	}
}

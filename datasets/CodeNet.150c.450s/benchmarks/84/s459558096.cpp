#include <bits/stdc++.h>
#include <cstdlib>  // abs() for integer 絶対値求めやつ
#include <cmath>    // abs() for float, and fabs()
#include <algorithm>
#include <vector>
#include <string>
#include<iomanip>//浮動小数点数を出力する制度の指定
//使い方　数値をnumとして　cout<<setprecision(n)<<num ;nは桁数
#define rep(i,n) for(int i = 0; i < (n);i++)
#define SORT(a) sort((a).begin(),(a).end())
#define rSORT(a) reverse((a).begin(),(a).end())
#define REV(a) reverse((a).begin(),(a).end())
using namespace std;
using ll =long long;
using db = double;
#define INF 2000000000
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
#define che(a,string) cout<<"//"<<string <<"=="<<(a)<<"//" <<endl;
bool IsInt(double a){int b = a/1;if(a==b){return true;}else {return false;}}
/*覚えてないことメaモ
  数値型から文字列に変換　to_string(number);これは簡単
  文字列から数値型に変換　stoi(number)
  文字列からllに変換　stoll(number)
  __gcd(a,b)は最大公約数を取ってくれる、aとb
  の大きい方をNとしたとき、計算量は log(N);
 */
const int mod = 1e9 + 7;
// pie = M_PI
//ここから書き始める
#define MAX 200000
#define SENTINEL 2e9

int L[MAX / 2 + 2], R[MAX/2+2];

ll merge(int A[], int n, int left , int mid , int right){
	int i , j , k;
	ll cnt = 0;
	int n1 = mid - left ;
	int n2 = right - mid;
	rep(i,n1) L[i] = A[left + i];
	rep(i,n2) R[i]= A[mid + i];
	L[n1] = R[n2] = SENTINEL;
	i = j = 0;
	for ( k = left ; k < right ; k++){
		if (L[i] <= R[j]){
			A[k] = L[i++];
		}else{
			A[k] = R[j++];
			cnt += n1 - i;
		}
	}
	return cnt;
}

ll mergeSort(int A[],int n , int left, int right){
	int mid;
	ll v1,v2,v3;
	if(left + 1 < right){
		mid = (left + right ) / 2;
		v1 =mergeSort(A,n,left,mid);
		v2 = mergeSort(A,n,mid,right);
		v3 = merge(A,n,left,mid,right);
		return v1 + v2 + v3;
	}else return 0 ;
}

int main(){
	int A[MAX],n,i;

	cin >> n;
	rep(i,n) cin >> A[i];
	ll ans = mergeSort(A,n,0,n);
	cout << ans << endl;
	return 0;
}


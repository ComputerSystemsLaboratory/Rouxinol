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
#define REV(a) reverse((a).begin(),(a).end())
using namespace std;
using ll =long long;
using db = double;
#define INF 2000000000
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
#define che(a,string) cout<<"//"<<string <<"=="<<(a)<<"//" <<endl;
bool IsInt(double a){int b = a/1;if(a==b){return true;}else {return false;}}
/*覚えてないことメモ
  数値型から文字列に変換　to_string(number);これは簡単
  文字列から数値型に変換　stoi(number)
  文字列からllに変換　stoll(number)
  __gcd(a,b)は最大公約数を取ってくれる、aとb
  の大きい方をNとしたとき、計算量はlog N (この書き方、底は２）
 */
const int mod = 1e9 + 7;
//ここから書き始める
#define MAX 100000
#define SENTINEL 2e9

struct Card{
	char suit;
	int value;
};

struct Card L[MAX/2 +2], R[MAX / 2 + 2];

//関数の定義はここ
void merge(struct Card A[], int n, int left, int mid, int right){
	int i, j, k;
	int n1 = mid - left;
	int n2 = right - mid;
	for(int i = 0; i < n1; i++){
		L[i] = A[left+i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = A[mid+i];
	}
	L[n1].value = R[n2].value = SENTINEL;
	i = j = 0;
	for( k = left; k < right ; k++){
		if(L[i].value <= R[j].value){
			A[k] = L[i++];
		}
		else{
			A[k] = R[j++];
		}
	}
}

void mergeSort(struct Card A[], int n , int left, int right){
	int mid;
	if(left+1 < right){
		mid = (left + right)/2;
		mergeSort(A,n,left,mid);
		mergeSort(A,n,mid,right);
		merge(A,n,left,mid,right);
	}
}

int partition(struct Card A[], int n, int p, int r){
	int i,j;
	struct Card t, x;
	x = A[r];
	i = p - 1;
	for(j = p ; j < r ; j++){
		if ( A[j].value <= x.value){
			i++;
			t = A[i];A[i]= A[j]; A[j] = t;
		}
	}
	t =A[i+1]; A[i+1]=A[r]; A[r] = t;
	return i + 1 ;
}

void quickSort(struct Card A[], int n, int p, int r){
	int q;
	if(p<r){
		q = partition(A,n,p,r);
		quickSort(A,n,p,q-1);
		quickSort(A,n,q+1,r);
	}
}

int main(){
	int n, v;
	struct Card A[MAX], B[MAX];
	char S[10];
	int stable = 1;

	cin >> n ;

	rep(i,n){
		cin >> S[i] >> v;
			A[i].suit = B[i].suit = S[i];
		A[i].value = B[i].value = v;
	}
	mergeSort(A, n, 0, n);
	quickSort(B, n, 0, n-1);

	rep(i,n){
		if (A[i].suit != B[i].suit) stable = 0;
	}

	//以下はマージとクイックの結果が違ったらnot stable を出力する処理
	if(stable) cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;
	rep(i,n){
		cout<<B[i].suit<<" "<<B[i].value<<endl;
	}
}


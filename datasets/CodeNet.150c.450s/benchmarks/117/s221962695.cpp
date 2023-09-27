#include<bits/stdc++.h>
using namespace std;
#define INF 1<<30
void divide_list(int,int);
void marge(int,int,int);
int v[5000000];
int c;
int main(void){
	int num;
	cin >> num;
	for(int i = 0 ; i < num; i++){
		cin >> v[i];
	}
	divide_list(num,0);
	for(int i = 0; i < num; i++){
		if(i) cout << " " ;
		cout << v[i];
	}
	cout << endl;
	cout << c << endl;
	return 0;
}
void divide_list(int right,int left){
	if(left+1 < right){
		int mid = (right + left) / 2 ;
		divide_list(mid,left);
		divide_list(right,mid);
		marge(right,left,mid);
	}
}
void marge(int right,int left,int mid){
	int R[300000],L[300000];
	int n1,n2;

	n1 = mid - left;
	n2 = right - mid;
	for(int i = 0 ; i < n1; i++) L[i] = v[i + left];
	for(int i = 0 ; i < n2; i++) R[i] = v[i + mid];
	R[n2] = L[n1] = INF;
	int k=0;
	int l=0;
	for(int j = left; j < right; j++){
		c++;
		if(L[l] <= R[k]){
			v[j] = L[l++];
		}
		else{
			v[j] = R[k++];
		}
	}
}
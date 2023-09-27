#include<iostream>
using namespace std;

int n , a[500001] ;
long long s;
//void print(){
//	for(int i = 0 ; i < n ; i++) cout << a[i] << ' ';
//	cout << endl;
//}

void merge( int l1 ,int m1 ,int r1){
	int n1 = m1 - l1 + 1;
	int n2 = r1 - m1;
	int L[250001] ; int R[250001];
	for(int i = 0; i < n1 ; i++){
		L[i] = a[l1 + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = a[m1+1 + i];
	}
	L[n1] = 2e9;
	R[n2] = 2e9;
//	cout << l1 << ' ' << m1 << ' ' << r1 << ' ' << n1 << ' ' << n2 << endl;
//	print();
	int i = 0; int j = 0;
	for(int k = l1 ; k <= r1 ; k++){
		if(L[i] < R[j]){
			a[k] = L[i];
			i++;
			s++;
		}
		else{
			a[k] = R[j];
			j++;
			s++;
		}
	}
	
//	print();
//	cout << "###############\n";
}
void msort( int l ,int r){
	if(l < r){
		int m = (l + r) / 2;
		msort(l , m);
		msort(m + 1 , r);
		merge(l , m , r);
	}
}

int main(){
	cin>>n;
	for(int i = 0 ; i < n; i++){
		cin>>a[i];
	}
	msort(0 , n - 1);
	for(int i = 0 ; i < n; i++){
		if(i != 0){
			cout<<' '<<a[i];
		}
		else cout<<a[i];
	}
	cout<<endl;
	cout<<s<<endl;
}
/*
10
8 5 9 2 6 3 7 1 10 4
*/

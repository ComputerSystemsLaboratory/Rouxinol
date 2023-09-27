#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

struct card{
	char m;
	int n;
};

void b_sort(card* a , int n){
	for(int i=n;i>=0;--i){
		for(int j=0;j<i-1;++j){
			if(a[j].n>a[j+1].n){
				swap(a[j].n,a[j+1].n);
				swap(a[j].m,a[j+1].m);
			}
		}
	}
}

void s_sort(card* a , int n){
	int lowest;
	for(int i=0;i<n;++i){
		lowest=i;
		for(int j=i+1 ; j<n ;++j){
			if(a[j].n<a[lowest].n){
				lowest=j;
				}
			}
		if(a[i].n>a[lowest].n){
		swap(a[i].n , a[lowest].n);
		swap(a[i].m , a[lowest].m);
		}
	}	
}

bool stable(card* org , card* sorted , int n){
	bool b[10]={false};
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(!b[org[i].n]){
				if(org[i].n==sorted[j].n){
					if(org[i].m==sorted[j].m) {b[org[i].n]=true;break;}
					else return false;
				}
			} else {
				break;
			}
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	card* a = new card [n];
	card* b = new card [n];
	card* c = new card [n];
	for(int i=0;i<n ;++i){
		cin >>a[i].m >> a[i].n;
		b[i].m=a[i].m;
		b[i].n=a[i].n;
		c[i].m=a[i].m;
		c[i].n=a[i].n;
	}
	b_sort(a , n);
	for(int i=0;i<n-1 ; i++){
		cout << a[i].m << a[i].n << " ";
	}
	cout <<a[n-1].m << a[n-1].n << endl;
	cout << ((stable(c , a , n)) ? "Stable" : "Not stable") << endl;

	s_sort(b , n);
	for(int i=0;i<n-1 ; i++){
		cout << b[i].m << b[i].n << " ";
	}
	cout <<b[n-1].m << b[n-1].n << endl;
	cout << (stable(c , b , n) ? "Stable" : "Not stable")<< endl;
	delete [] a; 
	delete [] b;
	delete [] c;
	return 0; 
}
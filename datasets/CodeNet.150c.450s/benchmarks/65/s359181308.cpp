#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i,o,u) for(int i = o;i < u; i++)
using namespace std;
struct no{
	int value;
	char name;
}a[101],b[101];
int main(){
	int n;
	cin >> n;
	rep(i,0,n){ cin >> a[i].name; cin >> a[i].value;b[i] = a[i];}
	rep(i,0,n-1){
		rep(j,0,n-1-i){
			if(a[j].value > a[j+1].value){ swap(a[j],a[j+1]); }
		}
	}
	rep(i,0,n){ cout << a[i].name << a[i].value;if(i != n-1) cout << " ";}
	cout << endl;
	cout << "Stable" << endl;
	rep(i,0,n){
		int mn = i;
		rep(j,i+1,n){
			if(b[mn].value > b[j].value){
				mn = j;
			}
		}
		swap(b[i],b[mn]);
	}
	rep(i,0,n) { cout << b[i].name << a[i].value;if(i != n-1) cout << " ";}
	cout << endl;
	int flag = 0;
	rep(i,0,n){ if(a[i].name == b[i].name&&a[i].value == b[i].value){ flag++;} }
	if(flag == n){ cout << "Stable" << endl;}
	else cout << "Not stable" << endl;
	return 0;
}
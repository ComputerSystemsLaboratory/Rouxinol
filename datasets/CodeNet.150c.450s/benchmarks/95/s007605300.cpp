#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring> 

using namespace std;

int cnt, a[101] = {0};

int fanc(int n);

int main(){
	int n;
	while(1){
		cin >> n;
		if(n == 0) break;
		cnt = 0;
		string str;
		for(int i = 0; i < n; i++){
			cin >> str;
			if(str == "lu") a[i] = 1;
			else if(str == "ld") a[i] = 2;
			else if(str == "ru") a[i] = 3;
			else if(str == "rd") a[i] = 4;
		}
		cnt = fanc(0);
		cout << cnt << endl;
		for(int i = 0; i < 101; i++){
			a[i] = 0;
		}
	}
	return 0;
}

int fanc(int i)
{
	if(a[i] == 0 || a[i+1] == 0) return 0;
	else if(a[i] % 2 == a[i+1] % 2) return 1 + (fanc(i + 2));
	else return fanc(i + 1);
}
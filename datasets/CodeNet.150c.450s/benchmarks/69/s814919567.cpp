#include<cstdio>
#include<queue>
#include<set> 
#include<cstdlib> 
#include<cstring>
#include<climits>
#include<cstring>
#include<iostream>
#include<algorithm>
const int inf = 0x3f3f3f3f;
using namespace std;

int ball[11], r[11], l[11];
int a, b;

bool DFS(int stp){
	if(stp == 10)
		return true;
	if(ball[stp] > l[a]){
		l[++a] = ball[stp]; 
		return DFS(stp + 1); 
	}
	if(ball[stp] > r[b]){
		r[++b] = ball[stp];
		return DFS(stp + 1);
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t; 
	while(t--){
		a = 0;
		b = 0;
		for(int i = 0; i < 10; i++){
			cin >> ball[i];
		}
		l[a] = 0;
		r[b] = 0;
		cout << ((DFS(0) == 1)?"YES" : "NO") << endl;
//		for(int i = 0; i <= a; i++)
//			cout << l[i] << " ";
//		cout << endl;
//		for(int i = 0; i <= a; i++)
//			cout << r[i] << " ";
//		cout << endl;
		
	}
	
	return 0;
}
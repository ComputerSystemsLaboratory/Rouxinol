#include<iostream>
#include<string>
using namespace std;
int alignment(string s,string t){


	int a[1001][1001];
	int n=s.size();
	int m=t.size();
	a[0][0]=0;
	for(int i=0;i<n;i++){
		a[i+1][0]=a[i][0]+1;
	}
	for(int i=0;i<m;i++){
		a[0][i+1]=a[0][i]+1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i]==t[j]){
				a[i+1][j+1]=min(a[i][j],min(a[i+1][j]+1,a[i][j+1]+1));
			}else{
					a[i+1][j+1]=min(a[i][j]+1,min(a[i+1][j]+1,a[i][j+1]+1));
			}
		}
	}
	return a[n][m];
}

int main(void){

	string s;
	string t;
	cin >> s >> t;
	cout << alignment(s,t) <<endl;
	
}

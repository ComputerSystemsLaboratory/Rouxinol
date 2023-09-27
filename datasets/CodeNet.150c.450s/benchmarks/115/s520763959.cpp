#include<iostream>
#include<string>
using namespace std;
int alignment(string s,string t){


	int a[1001][1001]={};
	int n=s.size();
	int m=t.size();
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(s[i]==t[j]){
					a[i+1][j+1]=max(a[i][j]+1,max(a[i+1][j],a[i][j+1]));
				}else{
					a[i+1][j+1]=max(a[i][j],max(a[i+1][j],a[i][j+1]));
				}
			}
		}
	return a[n][m];
}

int main(void){

	int n;
	
	cin >> n;
	for(int i=0;i<n;i++){

		string s;
		string t;
		cin >> s >> t;
		cout << alignment(s,t) <<endl;
	}
	
}

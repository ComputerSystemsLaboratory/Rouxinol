#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>


using namespace std;

string check(int a,int b,int c){
	int A=a*a,B=b*b,C=c*c;
	if(A+B==C || C+A==B || B+C==A)return "YES";
	else return "NO";
}


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		string ans=check(a,b,c);
		cout<<ans<<endl;
	}
	return 0;
}
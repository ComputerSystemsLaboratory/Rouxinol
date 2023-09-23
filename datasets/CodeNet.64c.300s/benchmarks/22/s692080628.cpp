#include<iostream>

using namespace std;

int main(){
	int N,s1,s2,s3;
	cin>>N;
	while(N--){
		cin>>s1>>s2>>s3;
		s1 = s1 * s1;
		s2 = s2 * s2;
		s3 = s3 * s3;
		if(s1 == s2 + s3 || s2 == s1 + s3 || s3 == s2 + s1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int *s, *t;
	int nums, numt;
	cin>>nums;
	s=new int[nums];
	for( int i=0; i<nums; i++ ){
		cin>>s[i];
	}

	cin>>numt;
	t=new int[numt];
	for( int i=0; i<numt; i++ ){
		cin>>t[i];
	}


	int ans=0;
	bool isfind=false;

	for( int i=0; i<numt; i++ ){

		for( int j=0; j<nums; j++ ){
			if( s[j] == t[i] ){
				ans++;
				break;


			}
		}
	}
	cout<<ans<<endl;
}
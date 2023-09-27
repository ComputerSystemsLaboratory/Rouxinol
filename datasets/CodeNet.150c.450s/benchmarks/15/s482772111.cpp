#include<iostream>
using namespace std;

int linearSearch( int s[], int nums, int t ){
	
	int i=0;
	while( s[i] != t )
		i++;
	return i != nums;
}

int main()
{
	int *s, *t;
	int nums, numt;
	cin>>nums;
	s=new int[nums+1];
	for( int i=0; i<nums; i++ ){
		cin>>s[i];
	}

	cin>>numt;
	t=new int[numt];
	for( int i=0; i<numt; i++ ){
		cin>>t[i];
	}


	int ans=0;

	for( int i=0; i<numt; i++ ){
		s[nums]=t[i];
		ans +=linearSearch(s, nums, t[i]);

	}
	cout<<ans<<endl;
}
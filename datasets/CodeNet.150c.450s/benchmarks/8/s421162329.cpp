#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s1,s2;
	int p1=0,p2=0;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>s1>>s2;
	if(s1==s2){
		p1++;
		p2++;
	}
	else if(s1>s2) p1+=3;
	else if(s1<s2) p2+=3;
	}
	cout<<p1<<" "<<p2<<endl;
	return 0;
}
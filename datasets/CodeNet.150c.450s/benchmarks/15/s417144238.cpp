#include <iostream>
using namespace std;


int main(){

	int n=0;
	cin>>n;
	int *S=new int[n];
	for(int i=0; i<n;i++)
		cin>>S[i];

	int q=0;
	cin>>q;
	int *T=new int[q];
	for(int i=0; i<q; i++)
		cin>>T[i];

	int match=0;
	for(int i=0; i<q; i++)
		for(int j=0; j<n; j++)
			if(T[i]==S[j]){
				match++;
				break;
			}

	cout<<match<<endl;
	return 0;
}
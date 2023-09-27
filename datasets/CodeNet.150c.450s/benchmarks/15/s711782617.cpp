#include<iostream>
#include<cstdlib>

using namespace std;

bool linearSearch(int key);

int *S,*T;
int n,q;

int main(){

	cin>>n;
	S = new int[n+1];
	for(int i=0;i<n;i++)
		cin>>S[i];

	cin>>q;
	T = new int[q];
	for(int i=0;i<q;i++)
		cin>>T[i];

	static int count;
	for(int i=0;i<q;i++){
		if(linearSearch(T[i])) count++;
	}

	cout<<count<<endl;

	cin.get();
	cin.get();
}

bool linearSearch(int key){
	int i = 0;
	S[n] = key;
	while(S[i]!=key){
		i++;
	}
	if(i==n) return false;
	return true;
}
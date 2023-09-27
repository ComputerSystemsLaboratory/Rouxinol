#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void){
	int i=0, n=0, c=0;
	string w;
	vector<string> t;
	cin>>w;
	transform(w.begin(), w.end(), w.begin(), ::toupper);
	do{
		if(!(n%1024)){ t.resize(1024); }
		cin>>t[n];
	}while(t[n++]!="END_OF_TEXT");--n;
	for(i=0; i<n; ++i){
		transform(t[i].begin(), t[i].end(), t[i].begin(), ::toupper);
		if(w==t[i]){ ++c; } 
	}
	cout<<c<<"\n";
	return(0);
}

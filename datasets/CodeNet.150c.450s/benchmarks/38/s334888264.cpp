#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	
	int N;
	vector<int> a(3);
	cin>>N;
	while(N>0){
		for(int i=0;i<3;i++)
			cin>>a[i];
		sort(a.begin(),a.end());
		if(pow(a[2],2.0)==pow(a[1],2.0)+pow(a[0],2.0))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		N--;
	}
	}
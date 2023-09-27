#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;
int main(){
	int i=0;
	vector<int> a(101),b(101);
	while(cin>>a[i]){
		i++;
	}
	for(int j=1;j<=100;j++){
	b[j-1] = count(a.begin(),a.end(),j);
	}
	int p = *max_element(b.begin(),b.end()) ;

	for(int j=0;j<=100;j++){	
	if(b[j] == p )cout<< j+1<<endl;
	}
		//for(int j=1;j<=100;j++) cout<<j<<"="<<b[j-1]<<endl;
}
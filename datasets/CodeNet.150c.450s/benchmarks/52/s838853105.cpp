#include <iostream>
#include<iomanip>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;

int main(){
	int n;
	vector <int> g;
	while(cin>>n){
		if(n!=0){
			g.push_back(n);
		}else{
			n=g.back();
			g.pop_back();
			cout<<n<<endl;
		}
	}
	return 0;
} 
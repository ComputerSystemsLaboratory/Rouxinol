#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int a,b,A,B;
	while(cin>>A>>B){
		a=A,b=B;

		if(a<b)swap(a,b);
		for(int r;(r=a-b)!=0;){
			a=b,b=r;
			if(a<b)swap(a,b);
		}

		int L=b,G=A*(B/L);
		cout<<L<<" "<<G<<endl;
	}
	return 0;
}
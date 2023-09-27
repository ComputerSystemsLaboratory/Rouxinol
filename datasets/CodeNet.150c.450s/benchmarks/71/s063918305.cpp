#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
int main() {
	int a,b,c,d,n,count=0;
	while(cin>>n){
		if(n>36){
			cout<<0<<endl;
		}
		else{
			for(a=0;a<10;a++){
				for(b=0;b<10;b++){
					for(c=0;c<10;c++){
						for(d=0;d<10;d++){
							if(a+b+c+d==n){
								count++;
							}
						}
					}
				}
			}
			cout<<count<<endl;
		}
		count=0;
	}
}
#include<unordered_map>
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<chrono>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<functional>
using namespace std;
typedef long long ll;
int main(){
	int n;
	while(cin>>n&&n!=0){
		n=1000-n;
		int sum=0;
		int c[6]={500,100,50,10,5,1};
		for(int i=0;i<6;i++){
			while(n>=c[i]){
				n-=c[i];
				sum++;
			}
		}
		cout<<sum<<endl;
	}
}
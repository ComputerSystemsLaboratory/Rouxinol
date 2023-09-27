#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <algorithm>
#include <cctype>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);

int x,y,tu[11]={31,29,31,30,31,30,31,31,30,31,30};

int main(){
	while(1){
		cin>>x>>y;
		if(!x&&!y) break;
		int num=0;
		for(int i=0;i<x-1;i++) num+=tu[i];
		num+=y;
		int ans=num%7;
		if(ans==1) cout<<"Thursday"<<endl;
		else if(ans==2) cout<<"Friday"<<endl;
		else if(ans==3) cout<<"Saturday"<<endl;
		else if(ans==4) cout<<"Sunday"<<endl;
		else if(ans==5) cout<<"Monday"<<endl;
		else if(ans==6) cout<<"Tuesday"<<endl;
		else if(!ans) cout<<"Wednesday"<<endl;
	}
}
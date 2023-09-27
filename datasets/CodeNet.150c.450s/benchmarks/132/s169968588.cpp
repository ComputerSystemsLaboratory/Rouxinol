#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;


int main() {
	int n, p; // テ、ツクツ甘ゥツ卍?50 50
	int kouho[50];

	//10^6
	while(cin >> n >> p && n && p)
	{
		//cout << n << " " << p << endl;
		rep(i,50){kouho[i]=0;}
		int box = p;
		int index=0;
		while(true)
		{
			if(index >= n){ index=0; }	
			if(box>0){ 
				box--; kouho[index]++;
			}else{
				box=kouho[index]; kouho[index]=0;
				bool flag=false;
				/*
				rep(i,n){if(kouho[i]!=0){flag=false;}}
				if(flag){cout << index << endl; break;}
				*/
				rep(i,n){
					if(kouho[i]==p){flag=true;}	
				}
				if(flag){
					if(index==0){index=n;}
					cout << (index-1)%n << endl; break;
				}
			}
			index++;
		}
	}
	return 0;
}
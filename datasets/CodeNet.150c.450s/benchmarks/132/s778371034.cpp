#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<iomanip>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;

int main(){

	while(true){
		int a,b;
		cin >> a >> b;
				
		if(a==0&&b==0) break;
		

		int people[a];
		int stone=b;
		for(int i=0;i<(sizeof(people)/sizeof(int));i++){
			people[i]=0;
		}

		
		int count=0;
		bool flag = false;
		while(true){
			for(int i=0;i<(sizeof(people)/sizeof(int));i++){
				if(people[i]==b){
					cout << i << endl;
					flag = true;	
				}
			}
			
			if(flag){
				break;
			}

			if(stone>0){
				people[count]++;
				stone--;
			}
			else if(stone<=0){
				stone+=people[count];
				people[count]=0;
			}

			count++;
			if(count>=a) count=0;
		}
	
	}
}
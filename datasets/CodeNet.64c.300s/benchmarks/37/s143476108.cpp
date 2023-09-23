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
		int max,count=0;
		cin >> max;

		if(max==0){
			break;
		}

		for(int i=1;i<max;i++){
			int sum=0;
			for(int k=i;k<max;k++){
				sum+=k;
				if(sum==max){
					count++;
					break;
				}
			}
		}
		cout << count << endl;
	}


}
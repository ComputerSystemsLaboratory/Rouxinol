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

string table[]={"qwertasdfgzxcvb","yuiophjklnm"};


int main(){
	
	while(true){
		long n,a,b,c,x;
		cin >> n >> a >> b >> c >> x;
		if(n==0&&a==0&&b==0&&c==0&&x==0) break;

		vector<int> list;
		for(int i=0;i<n;i++){
			int tmp;
			cin >> tmp;
			list.push_back(tmp);	
		}

		int count=list.size()-1;

		for(int i=0;i<=10001;i++){
			bool flag=true;
			for(int k=0;k<list.size()-count;k++){
				if(list[k]==x){
		//			cout << "X:" << x << ",i:" << i << endl;
					list[k]=-1;
					count--;
					break;
				}
			}
			for(int k=0;k<list.size();k++){
				if(list[k]!=-1){
					flag=false;
				}
			}
				
			x=((a*x)+b)%c;
			
			if(i>=10001){
				cout << -1 << endl;
				break;
			}

			if(flag){ 
				cout << i << endl;
				break;
			}
		}

	}

}
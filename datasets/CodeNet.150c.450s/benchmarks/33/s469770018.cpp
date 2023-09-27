#include <iostream>
#include <vector>
#include <numeric>
#include <climits>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> 


#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{"; for(auto nth : list){ cout << nth << " ";}cout << "}" << endl;

using namespace std;


int main() {

	while(1){
		int a,b,s;
		cin >> a >> b >> s;

		if(a==0&&b==0&&s==0) break;
			
		int ans=0;
		vector<int> list1;
		vector<int> list2;
		for(int i=1;i<s+1;i++){
			for(int j=1;j<s+1;j++){
				int item1=i,item2=j;
				//if(i+j>=s) break;
				//cout << item1+item2 << endl;
				if((((item1*(100+a))/100)+((item2*(100+a))/100))==s){
					list1.push_back(item1);
					list2.push_back(item2);

				}
			}
		}
		rep(i,list1.size()){
			int item1=list1[i],item2=list2[i];	

		//	if(ans<(item1*(100+b)/100)+(item2*(100+b)/100)) cout << "DEBUG:" << item1 << " " << item2 << endl;
			ans=max(ans,(item1*(100+b)/100)+(item2*(100+b)/100));

		}

		cout <<  ans << endl;
	}


}
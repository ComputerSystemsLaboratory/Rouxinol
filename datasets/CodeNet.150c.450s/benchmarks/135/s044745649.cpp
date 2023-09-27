#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cstdlib>

using namespace std;

const int MAX_SIZE=2000001;

int main(){

	//int mtate[MAX_SIZE];
	//int myoko[MAX_SIZE];
	vector<int> mtate(MAX_SIZE,0);
	vector<int> myoko(MAX_SIZE,0);

	int n,m;
	vector<int> tate;
	vector<int> yoko;
	while(cin>>n>>m&&!(n==0&&m==0)){
		tate.clear();
		yoko.clear();
		tate.push_back(0);
		for(int i = 0; i < n; i++){
			int t;
			cin>>t;
			int p=tate.size()-1;
			tate.push_back(t+tate[p]);
		}
		yoko.push_back(0);
		for(int i = 0; i < m; i++){
			int t;
			cin>>t;
			int p=yoko.size()-1;
			yoko.push_back(t+yoko[p]);
		}
		// ツ閉敖づ個青板づーcnt
		//fill(mtate,mtate+MAX_SIZE,0);
		//fill(myoko,myoko+MAX_SIZE,0);
		//memset(mtate,0,sizeof(mtate));
		//memset(myoko,0,sizeof(myoko));
		for(int i = 0; i < MAX_SIZE; i++){
			mtate[i]=myoko[i]=0;
		}

		for(int i = 0; i < tate.size(); i++){
			for(int j = i + 1; j < tate.size(); j++){
				mtate[tate[j]-tate[i]]++;
			}
		}
		for(int i = 0; i < yoko.size(); i++){
			for(int j = i + 1; j < yoko.size(); j++){
				myoko[yoko[j]-yoko[i]]++;
			}
		}
		int cnt=0;
		for(int i = 0; i < MAX_SIZE; i++){
			cnt+=(mtate[i]*myoko[i]);
		}
		cout<<cnt<<endl;
	}

	return 0;
}
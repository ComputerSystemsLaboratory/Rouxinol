#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main(){

		while(1){
			int N,M,E=0;
			cin >> N>>M;
			if(N==0 &&M ==0) break;
			vector<pair<int,int> > data(N);
			for(int i = 0; i< N; i++) {
				cin >> data[i].second;//distance
				cin >> data[i].first;//P
			}
		sort(data.begin(),data.end());//sort by P
		int k,flag=0 ;
		for(int j = N-1;j>=0;j--){
				M -= data[j].second;
				if(M<=0){
					k = j;
					M+=data[j].second;
					break;
				}
				if(j ==0){
					k = 0;
					flag =1;
				}
			}
		for(int m = 0;m <k;m++){
			E +=data[m].first * data[m].second;
		}
		if(flag !=1){
			E += data[k].first * (data[k].second-M);
		} 
		cout << E <<endl;
		}


		return 0;
}
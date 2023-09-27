#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int a,L;


int result(int a){
	vector<int> S;
	for(int i=0;i<L;i++){
		S.push_back(a%10);
		a/=10;
	}
	sort(S.begin(),S.end());
	int min=S[0];
	for(int i=1;i<L;i++)
		min*=10,min+=S[i];
	int max=S[L-1];
	for(int i=L-2;i>=0;i--)
		max*=10,max+=S[i];
	return max-min;
}

int main(void){
	while(cin >> a >> L,a|L){
		map<int ,int> list;
		int j;
		list[a]=0;
		for(j=1;j<21;j++){
			a=result(a);
			if(list.find(a)!=list.end())
				break;
			else
				list[a]=j;
		}
	cout << list[a] <<" " << a <<" " << j-list[a] << endl;
	}
	return 0;
}
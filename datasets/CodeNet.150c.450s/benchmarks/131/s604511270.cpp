#include <stdlib.h>
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <math.h>
#include <queue>
#include <list>
#include <sstream>

using namespace std;

int a[21];

pair<int,pair<int,int> > solve(string a0,int L){
	pair<int,pair<int,int> > test;
	list<int> tmp;
	list<int> tmpmax;
	int nexta;
	int max,min;
	string current;

	current=a0;
	a[0]=atoi(a0.c_str());

	int k=1;
	while(true){
		int len=current.length();
		
	//	cout << "1:" << current << endl;
		for(int i=1;i<=L-len;i++){
			current="0"+current;
		}
	
		for(int i=0;i<current.length();i++){
			tmp.push_back((int)((current.at(i))-'0'));
			tmpmax.push_back((int)((current.at(i))-'0')*-1);
		}
		
//		cout << "2:" << current << endl;
		tmp.sort();
		tmpmax.sort();
		list<int>::iterator it = tmp.begin();
		int cnt=L-1;
		min=0;
		while(it!=tmp.end()){
			min+=pow(10,cnt)*(*it);
			++it;
			cnt--;
		}
	
		it = tmpmax.begin();
		cnt=L-1;
		max=0;
		while(it!=tmpmax.end()){
			max+=pow(10,cnt)*((*it))*-1;
			++it;
			cnt--;
		}
	//	cout << min << ":" << max << endl;
	
		a[k]=max-min;
	
		for(int i=0;i<k;i++){
			if(a[i]==a[k]){
	//			return abs(k-i);
	//			cout << "aaa" << endl;

				test.first=i;
				test.second.first=a[k];
				test.second.second=abs(k-i);
				return test;
			}
		}

		stringstream sst;
		sst << a[k];
		current=sst.str();

	//	cout << a[k] << endl;
	//	getchar();
		k++;

		tmp.clear();
		tmpmax.clear();
	}
	


	return test;
}

int main(void){

	string a0;
	int L;
	pair <int, pair<int,int> > res;

	while(true){
		cin >> a0;
		cin >> L;
		if(L==0) return 0;

		res=solve(a0,L);
		cout << res.first << " " << res.second.first << " " << res.second.second << endl;
//		cout <<  << endl;
	}

	return 0;
}
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	vector<pair<int,int> > kanri;
	int n,tmpmax;
	bool flag;

	while(cin >> n){
		flag = false;

		if(kanri.empty()){
			kanri.push_back(pair<int,int>(n,1));
			tmpmax = 1;
		}
		else{
			for(vector<pair<int,int> >::iterator it = kanri.begin(); it != kanri.end(); it++){
				if(it->first == n){
					it->second++;
					if(tmpmax < it->second){
						tmpmax = it->second;
					}
					flag = true;
					break;
				}
			}
			if(flag == false){
				kanri.push_back(pair<int,int>(n,1));
				sort(kanri.begin(),kanri.end());
			}
		}
	}

	for(vector<pair<int,int> >::iterator it = kanri.begin(); it != kanri.end(); it++){
		if(it->second == tmpmax){
			cout << it->first << endl;
		}
	}
	

	return 0;
}
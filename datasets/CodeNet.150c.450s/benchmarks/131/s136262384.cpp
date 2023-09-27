#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<cmath>
#include<stdlib.h>

using namespace std;

vector<int> jans,ajans,ijans;

string tost(int num,int len);

int main(){
	while(1){
		string num;
		int l;
		
		cin >> num >> l;
		if(num == "0" && l == 0) break;
		int ind = 0;
		map<int,int> nin;
		nin[atoi(num.c_str())] = ind;
		ind++;
		
		while(1){
			map<int,int> nmp;
			for(int i = 0;i < 10;i++){
				nmp[i] = 0;
			}
			int dif = l - num.size();
			for(int i = 0;i < num.size();i++){
				int tn = num[i] - '0';
				nmp[tn]++;
			}
			if(dif > 0)nmp[0] += dif;
			
			string nmx,nmn;
			for(int i = 0;i < 10;i++){
				for(int j = 0;j < nmp[i];j++){
					string ts(1,'0' + i);
					nmn += ts;
				}
			}
			
			for(int i = 9;i >= 0;i--){
				for(int j = 0;j < nmp[i];j++){
					string ts(1,'0' + i);
					nmx += ts;
				}
			}
			
			int tnum = atoi(nmx.c_str()) - atoi(nmn.c_str());
			map<int,int>::iterator it = nin.find(tnum);
			if(it != nin.end()){
				jans.push_back(nin[tnum]);
				ajans.push_back(tnum);
				ijans.push_back(ind - nin[tnum]);
				break;
			}else{
				num = tost(tnum,l);
				nin[tnum] = ind;
				ind++;
			}
		}
	}
	for(int i = 0;i < jans.size();i++) cout << jans[i] << " " << ajans[i] << " " << ijans[i] << endl;
	
	return 0;
}

string tost(int num,int len){
	string snum;
	for(int i = len - 1;i >= 0;i--){
		string st(1,'0' + (int)(num / (int)pow(10.,i)) % 10);
		snum += st;
	}
	return snum;
}
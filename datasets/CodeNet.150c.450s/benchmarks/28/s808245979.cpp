#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool judge(vector< int > &w, int k, int p){
	vector< int > track(k,0);
	int j=0;
	
	for(int i=0;i<w.size();++i){
		if(w[i] > p)return false;
		if(track[j] + w[i] <= p){
			track[j] += w[i];
		}else{
			++j;
			if(j>=k){
				return false;
			}else{
				track[j] = w[i];
			}
		}
	}
	return true;
}

int main() {
	int n,k,min,max,sum,mid;
	vector< int > w;
	
	
	cin >> n >> k;
	w.resize(n);
	sum = 0;
	for(int i=0;i<n;++i){
		cin >> w[i];
		sum += w[i];
	}
	
	min = sum / k;
	max = sum;

	while(max - min > 1){
		mid = ceil(0.5 *(min + max));
		
		if(judge(w,k,mid)){
			max = mid;
		}else{
			min = mid;
		}
	}
	
	if(judge(w,k,min))cout << min << endl;
	else cout << max << endl;
	
	return 0;
}
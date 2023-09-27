#include <iostream>
#include <vector>

using namespace std;

class bit{
	
	public:
	vector<int> v;
	int n;

	bit(int arg){
		n = arg;
		//initially all nodes are 0
		for(int i=0;i<n+1;i++){
			v.push_back(0);
		}
	}
	
	int sum(int i){
		int s = 0;
		while(i>0){
			s += v[i];
			i -= i & -i;
		}
		return s;
	}
	
	void add(int i, int x){
		while(i <= n){
			v[i] += x;
			i += i & -i;
		}
	}
};

int main(void){
	int n,k;
	
	while(cin >> n >> k){
		if((n|k) == 0) break;
		
		bit b = bit(n);
		int tmp;
		vector<int> sumvec;

		//construct Binary Index Tree
		for(int i=1;i<=n;i++){
			cin >> tmp;
			b.add(i,tmp);
			//cerr << "added " << tmp << endl;
		}
		
		sumvec.push_back(0);
		//calculate sum
		for(int i=1;i<=n;i++){
			sumvec.push_back(b.sum(i));
			//cerr << sumvec[i] << endl;
		}
		
		int maxi = 0;
		for(int i=1;i<=n-k;i++){
			maxi = max(maxi, sumvec[i+k] - sumvec[i]);
		}
		
		cout << maxi << endl;
	}
}
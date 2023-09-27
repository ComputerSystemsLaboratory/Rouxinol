#include <iostream>
#include <vector>

using namespace std;

int main(){
	while(1){
		int n, p; cin >> n >> p;
		if(!n && !p)break;
		
		int i=0, num=p;
		vector <int> count(n);
		while(1){
			if(num==0){
				num = count[i];
				count[i] = 0;
			} else{
				count[i]++;
				num--;
				if(count[i] == p) break;
			}
			i++;
			if(i >= n) i=0;
		}
		cout << i << endl;
	}
	return 0;
}

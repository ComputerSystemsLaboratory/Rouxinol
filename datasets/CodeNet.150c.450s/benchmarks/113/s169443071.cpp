#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> a;
	int in;
	while(cin >> in){
		if(in != 0)
			a.push_back(in);
	}
	int no = 1;
	for(auto it : a){
		cout << "Case " << no << ": " << it << endl;
		no++;
	}
return 0;
}
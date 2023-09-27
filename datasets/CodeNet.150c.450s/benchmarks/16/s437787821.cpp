#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main(){

	string cliff;
	int pond=0;
	cin >> cliff;

	stack<int> S1;
	stack<pair<int, int> > S2;

	for(int i=0; i < cliff.length(); i++){
		if(cliff[i] == '\\'){
			S1.push(i);
		}else if(cliff[i] == '/'){
			if(S1.size() > 0){
				int cliff_left_i = S1.top();
				int subpond = i - cliff_left_i;
				pond += subpond;
				S1.pop();
			
				if(S2.size() == 0){
					S2.push(make_pair(cliff_left_i, subpond));
				}else{
					// ?????§????°´????????????????????´???
					while(S2.size() > 0 && S2.top().first > cliff_left_i){
						int newsubpond_left = S2.top().first;
						int oldsubpond = S2.top().second;
						subpond += oldsubpond;
						S2.pop();
					}
					S2.push(make_pair(cliff_left_i, subpond));
				}
				
			}
		}
	}
	


	cout << pond << endl;
	int n_subponds = S2.size();
	int subponds[n_subponds];
	for(int i=0; i < n_subponds; i++){
		subponds[i] = S2.top().second;
		S2.pop();
	}
	cout << n_subponds;
	for(int i=n_subponds-1; i >= 0; i--){
		cout << " " << subponds[i];
	}
	cout << endl;

	return 0;

}
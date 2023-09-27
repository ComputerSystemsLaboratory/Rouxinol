#include <iostream>
#include <string>
#include <map>

using namespace std;


map<int, int> tree;

int find(int o){
	if (tree[o] == o){
		return o;
	}
	else{
		tree[o] = find(tree[o]);
		return tree[o];
	}
}

bool check(int a, int b){
	return (find(a) == find(b));
}

void unite(int a, int b){
	if (find(a) == find(b)){ return; }
	tree[find(a)] = find(b);
}

int main(){
	int n;
	int NumberOfOperation;

	cin >> n >> NumberOfOperation;
	
	for (int i = 0; i < n; ++i){
		tree[i] = i;
	}



	for (int j = 0; j < NumberOfOperation; ++j){
		int TypeOfOperation;
		int TrialNumbers[2];

		cin >> TypeOfOperation >> TrialNumbers[0] >> TrialNumbers[1];

		if (TypeOfOperation == 0){
			
			unite(TrialNumbers[0], TrialNumbers[1]);
		}
		else{
			cout << check(TrialNumbers[0],TrialNumbers[1])<<endl;
		}


	}

	
	return 0;


}
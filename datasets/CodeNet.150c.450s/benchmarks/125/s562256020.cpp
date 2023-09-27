#include<iostream>
#include<vector>

using namespace std;

int N;
vector<vector<int>> tree;
vector<pair<int,int>> times;

void stamp(int ind, int &time){
	//cout << ind << "," << time << endl;
	if(times[ind].first == 0) times[ind].first = time++;
	else return;
	if(tree[ind].size() == 0){
		times[ind].second = time++;
		//cout<<"break! " << ind << endl;
		return;
	}
	for(int i=0;i<tree[ind].size();i++){
		//cout << tree[ind][i] << endl;
		stamp(tree[ind][i],time);
	}
	//cout << ind << ":" << time << endl;
	times[ind].second = time++;
	if(ind == 1){
		for(int i=2;i<=N;i++){
			stamp(i,time);
		}
	}
}

int main(){
	cin >> N;
	tree = vector<vector<int>>(N+1);
	times = vector<pair<int,int>>(N+1,make_pair(0,0));

	for(int i=1;i<N+1;i++){
		int ind, branch;
		cin >> ind >> branch;
		vector<int> tmp(branch);
		for(int j=0;j<branch;j++){
			int in;
			cin >> in;
			tmp[j] =  in;
		}
		tree[ind] = tmp;
	}

	int time = 1;
	stamp(1,time);

	int i = 1;
	for(auto st:times){
		if(i<=N)
			cout << i << " " << times[i].first << " " << times[i].second << endl;
		i++;
	}

	return 0;
}
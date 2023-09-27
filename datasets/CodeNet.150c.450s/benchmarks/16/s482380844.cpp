#define _USE_MATH_DEFINES

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

long long int INF = 1e18;
using namespace std;

int H_left[30000], H_right[30000], H_w[30000];
int H1[30000], H2[30000];

typedef pair<long long int, long long int> P;

int main(){
	
	string str;
	cin >> str;
	
	int N = str.size();
	
	int H_max = 0;
	int H_cur = 0;
	H_left[0] = 0;
	H1[0] = 0;
	for(int i = 0; i < N; i++){
		if(str[i] == '/'){
			H_cur++;
		}
		if(str[i] == '\\'){
			H_cur--;
		}
		H_max = max(H_max, H_cur);
		H_left[i + 1] = H_max;
		H1[i + 1] = H_cur;
	}
	
	H_max = H_cur;
	H_right[N] = H_cur;
	H2[N] = H_cur;
	for(int i = N - 1; i >= 0; i--){
		if(str[i] == '/'){
			H_cur--;
		}
		if(str[i] == '\\'){
			H_cur++;
		}
		H_max = max(H_max, H_cur);
		H_right[i] = H_max;
		H2[i] = H_cur;
	}
	
	
	for(int i = 0; i <= N; i++){
		H_w[i] = min(H_left[i], H_right[i]);
		//cout << H_w[i] << " ";
	}
	//cout << endl;
	
	/*
	for(int i = 0; i <= N; i++){
		cout << H1[i] << " ";
	}
	cout << endl;
	*/
	
	vector<long long int> v;
	double S = 0;
	long long int SS = 0;
	for(int i = 0; i <= N; i++){
		if(H_w[i] == H1[i]){
			v.push_back(S);
			SS += S;
			S = 0;
		}
		S += (double)(H_w[i] - H1[i] + H_w[i + 1] - H1[i + 1]) / 2.0;
		//cout << S << " ";
	}
	
	vector<long long int> v_ans;
	for(int i = 0; i < v.size(); i++){
		if(v[i] > 0){
			v_ans.push_back(v[i]);
		}
	}
	
	cout << SS << endl;
	
	if(v_ans.size() == 0){
		cout << 0 << endl;
		return 0;
	}
	cout << v_ans.size() << " ";
	
	for(int i = 0; i < v_ans.size() - 1; i++){
		cout << v_ans[i] << " ";
	}
	cout << v_ans[v_ans.size() - 1] << endl;
	
	return 0;
}

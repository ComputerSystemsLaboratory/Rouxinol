#include<iostream>
#include<queue>

using namespace std;

int main(){
	queue<string> procces;
	queue<int> p_time;
	int n; cin >> n;
	int q; cin >> q;
	int all_time = 0;
	for (int i = 0; i < n; i++){
		string pro; cin >> pro;
		int time; cin >> time;
		procces.push(pro);
		p_time.push(time);
	}
	while (!procces.empty()){
		if (p_time.front() <= q){
			all_time += p_time.front();
			cout << procces.front() << " " << all_time << endl;
			procces.pop();
			p_time.pop();
		}else{
			all_time += q;
			string p_tmp = procces.front();
			procces.pop();
			procces.push(p_tmp);
			int t_tmp = p_time.front();
			p_time.pop();
			p_time.push(t_tmp-q);
		}
	}

return 0;
}
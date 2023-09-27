#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
struct process{
	char name[11];
	int time;
	process(char* n, int t){strcpy(name, n); time = t;}
};

int main(){
	char nm[11];
	int i, n, t, q, t_elapsed = 0;
	int *tp;
	queue<process> prcs;
	
	cin >> n >> q;
	for(i=0;i<n;i++){
		cin >> nm >> t;
		prcs.push(process(nm, t));
	}
	while(!prcs.empty()){
		tp = &(prcs.front().time);
		if(*tp <= q){
			t_elapsed += *tp;
			cout << prcs.front().name << " " << t_elapsed << endl;
			prcs.pop();
		}else{
			t_elapsed += q;
			*tp -= q;
			prcs.push(prcs.front());
			prcs.pop();
		}
	}
	return 0;
}
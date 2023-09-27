#include<iostream>
using namespace std;

int main(){
	int i,j;
	int n,m; //??\?????°
	int tarou_num[100],hanako_num[100]; //??????????????°
	int tarou_sum,hanako_sum; //????????????????¨?
	int s,t;
	while(1){
		cin >> n >> m;
		tarou_sum=0; 
		hanako_sum=0;
		s=0;
		t=0;
		if(n==0 && m==0){
			break;
		}
		for(i = 0 ; i < n ; i++){
			cin >> tarou_num[i];
			tarou_sum+=tarou_num[i];
		}
		for(i = 0 ; i < m ; i++){
			cin >> hanako_num[i];
			hanako_sum+=hanako_num[i];
		}
		for(i = 0 ; i < n ; i++){
			for(j = 0 ; j < m ; j++){
				if(tarou_sum-tarou_num[i]+hanako_num[j]==hanako_sum+tarou_num[i]-hanako_num[j]){
					t=tarou_num[i];
					s=hanako_num[j];
					i=200;
					break;
				}
			}
		}
		if(t==0&&s==0){
			cout << -1 << endl;
		}else{
			cout << t << " " << s << endl;
		}
	}
	return 0;
}
#include<iostream>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int num[20];
int res[100000];

int main(){

    int n,m,temp;
    cin >> n >> m;
    for(int i=0;i<m;i++){
	cin >> temp;
	num[i] = temp;
	res[temp] = 1;
    }
    bool flag=true;
    while(flag){
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
		if(res[i] > 0 ){
		    if(res[i+num[j]] == 0) res[i+num[j]] = res[i]+1;
		    else{res[i+num[j]] = min(res[i+num[j]],res[i]+1);
			if(i+num[j] == n) flag = false;
		    }
		}
	    }
	}
    }
    
    cout << res[n]<< endl;

    return 0;
}
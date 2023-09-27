#include <bits/stdc++.h>
#define BORDER (int)1e6
#define INF (int)1e7

using namespace std;

int main(){
	vector<int> t(1,0),t1(1,0);
	int c=1;
	while(t[c-1]<=BORDER){
		int temp;
		temp=c*(c+1)*(c+2)/6;
		t.push_back(temp);
		if(temp%2==1 ){
			t1.push_back(temp);
		}
		c++;
	}

    vector<int> table(BORDER,0),table1(BORDER,0);

    for(int i = 1; i < BORDER; i++){
        int ans = INF;
        for(int j = 1; j < t.size(); j++){
            if(t[j] > i)break;
            if(i - t[j] >= 0){
                ans = min( ans, table[i-t[j]]+1);
            }
        }
        table[i] = ans;
        ans = INF;
        for(int j = 1; j < t1.size(); j++){
            if(t1[j] > i) break;
            if(i - t[j] >= 0){
                ans = min( ans, table1[ i - t1[j]] + 1);
            }
        }
        table1[i] = ans;
    }



	while(true){
		int n;
		cin >> n;
		if(n==0)break;
		cout << table[n] << " " << table1[n] << endl;
	}
	return 0;
}
		
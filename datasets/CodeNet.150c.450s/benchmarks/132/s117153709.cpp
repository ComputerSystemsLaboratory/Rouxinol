#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int n,p;
    while(true){
	cin >> n >> p;
	vector<int> part(n);
	int peb = p;
	int winner=-1,count = 0;
	if(n == 0&& p==0)  break;
	while(true){
	    count++;
	    if(count > 1e6) break;
	    for(int i=0;i<n;i++){
		if(peb>0){
		    peb--;
		    part[i]++;
		}else{
		    peb = part[i];
		    part[i] = 0;
		}
		if(part[i] == p){
		    winner = i;
		    break;
		}
	    }
	    if(winner!=-1) break;
	}
	cout << winner << endl;
    }


    return 0;
}
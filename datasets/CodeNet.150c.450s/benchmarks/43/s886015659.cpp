#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n;
	int inputa,inputb;
	int atotal,btotal;
	vector<int> a;
	vector<int> b;
	while(cin >> n, n !=0){
		a.clear();
		b.clear();
		atotal=btotal=0;
		for(int i=0;i<n;i++){
			cin>>inputa>>inputb;
			if(inputa > inputb){
				atotal += inputa + inputb; 
			}else if(inputa < inputb){
				btotal += inputa + inputb;
			}else{
				atotal +=inputa;
				btotal +=inputb;
			}
		}
		cout<<atotal<<" "<<btotal<<endl;
	}
	return 0;
}
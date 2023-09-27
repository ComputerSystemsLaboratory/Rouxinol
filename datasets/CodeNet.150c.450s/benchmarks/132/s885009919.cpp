#include <iostream>
#include <vector>

using namespace std;

int main(){
	int num,stone;
	while(1){
		cin >> num >> stone;
		if(num==0&&stone==0){ break; }
		vector<int> vec(num, 0);
		int flag, who;
		while(1){
			for(int i=0;i<vec.size();i++){
				flag = 0;
				if(stone>1){
					vec[i]++;
					stone--;
				}else if(stone==1){
					for(int j=0;j<vec.size();j++){
						if(vec[j]!=0 && i!=j){
							flag = 1;
							break;
						}
					}
					vec[i]++;
					stone--;
					if(flag==0){
						who = i;
						flag = 2;
					}	
				}else{
					stone += vec[i];
					vec[i] = 0;
				}
				if(flag==2){ break;	}
			}
			if(flag==2){ break;	}
		}
		cout << who << endl;
	}	
	return 0;
}
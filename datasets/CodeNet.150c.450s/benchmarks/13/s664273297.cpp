#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	//s=long p=short
    string s,p;
	int answer = 0;
	cin >>s;
	cin >>p;
	int lenp,lens;
	lenp = p.size();
	lens = s.size();
	// check if p[0]~p[lenp-1] = s[i]~s[i+lenp-1] or s[i]~s[i+lenp-lens-1]
	for(int i = 0; i<lens; i++){
		if (answer == 1){
			break;
		}
		if(i+lenp-1<lens){
			for(int j=0; j<lenp;j++){
				if(s[i+j]!=p[j]){
					break;//if one charcter is wrong,break it.
				}
				if(j ==lenp-1 && s[i+j]==p[j]){
				 answer = 1;
				 //if all charcter is wrong ans =1
				}
				
			}//no loop check end
		}
		else{//loop check start
			if (answer == 1){
				break;
			}
			for(int j=0;j<lenp;j++){
				if(i+j<lens){
					if(s[i+j] != p[j]){
						break;
					}
				}
				else{
					if(s[i+j-lens] != p[j]){
						break;
					}
					if(s[i+j-lens] == p[j] && j==lenp-1){
						answer = 1;
						
					}
				}
			}
		}	
	}
	if(answer == 1){
		cout << "Yes" <<"\n";
	}
	else{
		cout << "No" <<"\n";
	}
	return 0;
} 
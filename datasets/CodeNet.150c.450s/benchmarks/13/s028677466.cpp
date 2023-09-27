#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	string s, p;
	bool flag=false;
	int i=0;
	
	cin >> s;
	cin >> p;
	
	int len=s.size();
	int len2=p.size();
	//printf("len=%d, %d\n", len, len2);
	
	while(i<len && !flag){
		if(s[i] == p[0]){
			for(int a=0; a<len2; ++a){
				if(s[ (i+a)%len ] != p[a]){
					flag = false; 
					break;
				}
				else flag = true;
			}
		}
	
		++i;
	}
	
	if(flag) printf("Yes\n");
	else printf("No\n");

	return 0;
}
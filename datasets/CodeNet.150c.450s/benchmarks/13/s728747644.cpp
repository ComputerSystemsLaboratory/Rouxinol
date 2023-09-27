#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string s,p="";
	int position = 0;
	int temp_i = 0;
	string output = "No";
	cin >> s;
	cin >> p;

	for(int i=0; i<s.length(); i++){
		if(s[i] == p[0]){
			output = "Yes";
			temp_i = i+1;
			for(int ip=1; ip<p.length(); ip++){
				position = temp_i% s.length();
				if(s[position] != p[ip] ){
					output = "No";
					break;
				}
				++temp_i;
			}	
		}
		if(output == "Yes")
			break;
	}
	cout << output << endl;
 return 0;
}
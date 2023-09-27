#include <iostream>
#include <string>
using namespace std;


int main(){

	string s[1002];
	int k=0,size_max=0,s_max=0,count_max=0,count_max_number;
	int scount[1002]={0};
	
	
	
	while (cin>>s[k]){
		k++;
	}
	for (int i=0; i<k; i++) {
		for (int j=i+1; j<k; j++) {
			if (s[i]==s[j]) {
				scount[i]++;
			}
		}
	}
	
	for (int i=0; i<k; i++) {
		if (count_max<scount[i]) {
			count_max=scount[i];
			count_max_number=i;
		}
		if (size_max<s[i].size()) {
			size_max=s[i].size();
			s_max=i;
		}
	}
	
	cout << s[count_max_number] << ' '<< s[s_max] << endl;
	
	return 0;
}
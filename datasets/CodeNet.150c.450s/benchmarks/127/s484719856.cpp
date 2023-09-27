#include<iostream>
#include<set>
#include<string>

using namespace std;
#define rev(s) (string((s).rbegin(), (s).rend()))

int main(void){
	int n;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		set<string> a;
		for(int i=1;i<str.size();i++){
			string head=str.substr(0,i);
			string tail=str.substr(i);
			for(int j=0;j<2;j++){
				a.insert(head+tail);
				a.insert(head+rev(tail));
				a.insert(rev(head)+tail);
				a.insert(rev(head)+rev(tail));
				if(j==0)
					swap(head,tail);
			}
		}
		cout<<a.size()<<endl;
	}
	return 0;
}
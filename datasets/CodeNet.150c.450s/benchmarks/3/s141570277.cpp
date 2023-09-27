#include <iostream>
#include <string>
using namespace std;

int main(){
	string str,str2;
	cin >> str;
	int n,a,b;
	cin >> n;
	for(int i=0;i<n;i++){
		string cm;
		cin >> cm >> a >> b;
		if(cm=="print"){
			cout << str.substr(a,b-a+1) << endl;
		}else if(cm=="reverse"){
			for(int i=a,j=b;i<j;i++,j--){
				swap(str[i],str[j]);
			}
		}else if(cm=="replace"){
			cin >> str2;
			for(int i=a;i<=b;i++){
				str[i]=str2[i-a];
			}
		}
	}
	return 0;
}
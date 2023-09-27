#include <iostream>
#include <string>
using namespace std;

int main(){
	string str,op;
	string tmp;
	string p;
	int a , b; 
	int q;
	int i , j;
	cin>>str;
	cin>>q;
	for(i=0; i<q ; i++){
		cin>>op;
		cin>> a >> b;
		if(op=="print"){
			cout << str.substr(a,b-a+1) << endl;
		} else if (op=="reverse"){
			tmp=str.substr(a,b-a+1);
			for(j=0;j<tmp.length();j++){
				str[a+j]=tmp[tmp.length()-1-j];
			}
		} else if (op=="replace"){
			cin>>p;
			//for(j=0;j<b;j++){
				//str[a+j]=p[j];
				str=str.replace(a , b-a+1 , p);
			//}
		}
	}
	return 0;
}
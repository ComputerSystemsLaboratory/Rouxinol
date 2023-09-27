#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	string order;
	string p;
	char temp;
	int n=0;
	int a,b;
	
	cin>>str;
	cin>>n;
	for(int i=0;i<n;i++){
		cin >> order >> a >> b;
		if(order == "print"){
   			cout << str.substr(a, b-a+1) << endl;
  		} 
		else if(order == "reverse") {
   			while(a < b){
    				temp = str[a];
    				str[a] = str[b];
    				str[b] = temp;
    				a++;
    				b--;
   			}
  		} 
  		else if(order == "replace"){
   			cin >> p; 
   			str = str.replace(a, b-a+1, p);
  		}
	}
	}
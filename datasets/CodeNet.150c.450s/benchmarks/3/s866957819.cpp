#include<iostream>
#include<string>
using namespace std;
int main(){
   string str_m,command,str_1,str_2;
   int a,b,q;
   cin >> str_m >> q;

   for(int i=0;i<q;i++){
	cin >> command >> a >> b;
	if(command == "replace"){
		cin >> str_1;
		str_m = str_m.replace(a,b-a+1,str_1);
	}

	if(command == "print"){
		cout << str_m.substr(a,b-a+1) << endl;
	}

	if(command == "reverse"){
			str_1 = str_m.substr(a,b-a+1);
			str_2 = str_1;
			for(int j=0;j<str_1.size();j++){
				str_2[j] = str_1[b-a-j];
			}
			str_m = str_m.replace(a,b-a+1,str_2);
	}

   }

   return 0;
}
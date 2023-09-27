#include <iostream>
#include <string>
using namespace std;

int comand(string s){
		if(s == "print"){
				return 1;
		}else if(s == "reverse"){
				return 2;
		}else if(s == "replace"){
				return 3;
		}
}

int main(){
		int a,b,q,num;
		string str,com;
		string temp,rep,r_str;

		cin >> str >> q;

		for(int i = 0;i < q;i++){
				cin >> com;
				num = comand(com);

				switch(num){
						case 1: //print a b　a文字目からb文字目まで表示
								cin >> a >> b;
								cout << str.substr(a,b-a+1) << endl;
								break;
						case 2: //reverse a b a文字目からb文字目まで逆順
								cin >> a >> b;
								temp = str.substr(a,b-a+1);
								r_str = temp;
								for(int i = 0;i < temp.size();i++){
										r_str[i] = temp[b-a-i];
								}
								str = str.replace(a,b-a+1,r_str);
								break;
						case 3: //replace a b rep a文字目からb文字目まで任意の文字で置換
								cin >> a >> b >> rep;
								str = str.replace(a,b-a+1,rep);
								break;
						default:
								break;
				}
		}
		return 0;
}
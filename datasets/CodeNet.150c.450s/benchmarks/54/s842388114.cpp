#include <iostream>
#include <string>
using namespace std;

int main(){
		string w,t;
		int num = 0;
		cin >> w;
		while(cin >> t){
				if( t == "END_OF_TEXT") break;
				for(int i = 0;i < t.size();i++){
						t[i] = tolower(t[i]);
				}
				if(w == t){
						num++;
				}
		}
		cout << num << endl;
		return 0;
}
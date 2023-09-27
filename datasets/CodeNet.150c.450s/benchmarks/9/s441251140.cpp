#include<iostream>
#include<string>

using namespace std;

int main(){
        string str; cin >> str;
        int m; cin >> m;
        string str1,str2;
        int n;
        while(str != "-"){
                for (int i = 0;i < m; i++){
                        cin >> n;
                        str1 = str.substr(0,n);
                        str2 = str.substr(n);
                        str = str2 + str1;
                }   
                cout << str<< endl;    
                cin >> str;
                cin >> m;

        }   
        return 0;
}
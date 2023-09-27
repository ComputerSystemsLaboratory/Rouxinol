#include <iostream>
#include <string>

using namespace std;

#define SIZE 100

int main(){
    int i, j, k, flag;
    string s, p;
    cin >> s;
    cin >> p;
    flag = 0;

    for(i = 0; i < s.length(); i++){
        for(j = 0; j < p.length(); j++){
            
            if((i + j) >= s.length()){
                k = (i + j) - s.length();
            }else{
                k = i + j;
            }
            
//            cout << "s[k]:" << s[k] << " p[j]:" << p[j] << " flag:" << flag << endl;            
            
            if(s[k] != p[j]){
                break;    
            }else if(j == p.length() -1){
                flag =1;
            }
        }
    }
    if(flag == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;    
    }
    return 0;
}
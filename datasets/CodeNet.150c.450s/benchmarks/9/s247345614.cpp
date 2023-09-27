#include<iostream>
#include<string>
using namespace std;
int main(){
    string word;
    int m,h;
    while(1){
        cin >> word;
        if (word == "-") break;
        else{
            int len = word.size();
            cin >> m;
            for(int i = 1; i <= m; i++){
                cin >> h;
                word += word;
                word = word.substr(h,len);
                
            }
        }
        cout << word << endl;
        
    }
    return 0;
}

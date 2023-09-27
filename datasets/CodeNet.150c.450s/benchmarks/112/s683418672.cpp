#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n,m;
    string tmp,tmp2,s;
    bool judge;
    while(1){
        map <string,string> data;
        map <string,string>::iterator itr;
        cin >> n;
        if(n == 0) break;
        for(int i=0;i<n;i++){
            cin >> tmp >> tmp2;
            data.insert(map <string,string>::value_type(tmp,tmp2));
        }
        cin >> m;
        while(m--){
            judge = false;
            cin >> s;
            for(itr=data.begin();itr!=data.end();itr++){
                if(s == (*itr).first) {
                    cout << (*itr).second;
                    judge = true;
                    break;
                }
            }
            if(!judge) cout << s;
        }
        cout << endl;
    }
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    string s, p;
    int flg=0;
    cin >> s;
    cin >> p;
    s+=s;

    int cnt=0;
    int cnt2=0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == p[cnt]){
            for(int j=0; j<p.size(); j++){
                if(s[i+j] == p[cnt] ){
                    flg = 1;
                    cnt2++;
                }else{
                    flg = 0;
                }
                cnt++;
            }
            if(flg == 1 && cnt2 == p.size()){
                break;
            }
            cnt=0;
            cnt2=0;
        }
        
    }    

    if(flg == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
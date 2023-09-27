#include <iostream>
#include <map>
using namespace std;

int main(){
    int n,m;
    string dic[100000];
    string words[100000];
    map<string, string> mp;
    while(true){
        cin >> n;
        if(n==0){
            return 0;
        }
        string result = "";
        for(int i=0;i<n;i++){
            cin >> dic[i];
            cin >> mp[dic[i]];
        }
        cin >> m;
        for(int k=0;k<m;k++){
            cin >> words[k];
            for(int j=0;j<n;j++){
                if(words[k]==dic[j]){
                    words[k]=mp[dic[j]];
                    break;
                }
            }
            result = result + words[k];
            
        }
        cout << result << "\n";
    }
    return 0;
}
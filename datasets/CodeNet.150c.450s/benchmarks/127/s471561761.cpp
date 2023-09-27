#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    
    for(int i = 0; i < n; i++){
        int ans = 0;
        set<string> aft;
        string temp1, temp2, flip1, flip2;
        vector<bool> ch;
        
        cin >> str;
        
        for(int j = 1; j < str.size(); j++){
            temp1 = str.substr(0, j);
            temp2 = str.substr(j);
            
            flip1.resize(temp1.size());
            flip2.resize(temp2.size());
            
            for(int k = 0; k < temp1.size(); k++){
                flip1[k] = temp1[temp1.size() - k - 1];
            }
            
            for(int l = 0; l < temp2.size(); l++){
                flip2[l] = temp2[temp2.size() - l - 1];
            }
            
            aft.insert(temp1 + temp2);
            aft.insert(temp2 + temp1);
            aft.insert(flip1 + temp2);
            aft.insert(temp2 + flip1);
            aft.insert(temp1 + flip2);
            aft.insert(flip2 + temp1);
            aft.insert(flip1 + flip2);
            aft.insert(flip2 + flip1);
        }
        
        cout << aft.size() << endl;
    }
    
    return 0;
}
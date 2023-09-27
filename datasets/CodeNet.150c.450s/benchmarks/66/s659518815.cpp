#include <iostream>
#include <vector>

using namespace std;
 
int main(){
    int n;
    string str;
    vector<string> v;
     
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> str;
        v.push_back(str);
    }
    cin >> n;
    int st = 0; //0 Closed , 1 Opened
    for(int i = 0 ; i < n ; i++){
        int flg = 0;
        cin >> str;
        for(int j = 0 ; j < v.size() ; j++){
            if(str == v[j]){
                if(!st){
                    cout << "Opened by " << str << endl;
                    st = 1;
                }
                else{
                    cout << "Closed by " << str << endl;
                    st = 0;
                }
                flg = 1;
                break;
            }
        }
        if(!flg) cout << "Unknown " << str << endl;
    } 
    return 0;
}
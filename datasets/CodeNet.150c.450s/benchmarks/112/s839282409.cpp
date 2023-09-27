#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<char> str;

    while(cin >> n, n){
        map<char,char> m;
        char a, b;
        for(int i=0; i<n; i++){
            cin >> a >> b;
            m[a] = b;
        }
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            if(m[a]){
                str.push_back(m[a]);
            }else{
                str.push_back(a);
            }
        }

        vector<char>::iterator it = str.begin();
        while(it != str.end()){
            cout << *it;
            it++;
        }
        cout << endl;
        str.clear();
    }
    return 0;
}
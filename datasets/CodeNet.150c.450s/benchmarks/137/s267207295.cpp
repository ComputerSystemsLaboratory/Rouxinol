#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    set<string> S;

    string command, str;
    for(int i=0; i<n; ++i){
        cin >> command >> str;
        if( command == "insert"){
            S.insert(str);
        }else if( command == "find"){
            auto itr = S.find(str);
            if( itr == S.end() ){
                cout << "no" << endl;
            }else{
                cout << "yes" << endl;
            }
        }
    }

}


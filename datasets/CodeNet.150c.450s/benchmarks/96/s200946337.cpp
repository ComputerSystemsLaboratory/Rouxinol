#include <iostream>
#include <vector>
using namespace std;

int main(){
    char moji[][6] = {
        {'.',',','!','?',' '},
        {'a','b','c',},
        {'d','e','f',},
        {'g','h','i',},
        {'j','k','l',},
        {'m','n','o',},
        {'p','q','r','s',},
        {'t','u','v',},
        {'w','x','y','z',}
    };

    int jo[9] = {5,3,3,3,3,3,4,3,4};

    int n; cin>>n;

    for(int i=0; i<n; i++){
        string s; cin>>s;
        int count =-1;
        int v;

        for(int j=0; j<s.size(); j++){ 
            if(s[j] != '0'){
                v = s[j] - '0';
                v--;
                count++;
            }

            else{
                if(count == -1) continue;
                cout<<moji[v][count % jo[v]];
                count = -1;
            }
        }

        cout<<endl;
    }

    return 0;
}

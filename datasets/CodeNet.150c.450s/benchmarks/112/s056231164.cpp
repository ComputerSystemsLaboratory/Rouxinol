#include<iostream>
#include<map>
using namespace std;

int main(){
    while(true){
        int n;
        map<char,char> ctable; 
        cin >> n;
        if(n == 0) break;
        char tA, tB;
        for(int i = 0; i < n; i++){
            cin >> tA >> tB;
            ctable[tA] = tB;
        }
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> tA;
            map<char,char>::iterator itr = ctable.find(tA);
            if(itr != ctable.end()) cout << ctable[tA];
            else cout << tA;
        }
        cout << endl;
    }
    return 0;
}

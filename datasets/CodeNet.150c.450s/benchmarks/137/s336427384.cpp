#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(void){
    ios::sync_with_stdio(false);
    int n;
    string order,str;
    set<string> set;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> order >> str;
        if(order=="insert"){
            set.insert(str);
        }
        else{
            if(set.find(str)!=set.end()){
                cout << "yes" << endl;
            }
            else cout << "no" << endl;
        }
    }
    return 0;
}
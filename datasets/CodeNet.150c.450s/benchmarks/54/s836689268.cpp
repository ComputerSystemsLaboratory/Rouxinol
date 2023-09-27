#include <algorithm>
#include <iostream>
using namespace std;
int main(void){
    string x;
    cin >> x;
    transform(x.begin(), x.end(),x.begin(), ::tolower);

    int cnt=0;
    while(true){
        string t;
        cin >> t;
        if(t == "END_OF_TEXT")break;
        transform(t.begin(), t.end(),t.begin(), ::tolower);
        
        if(t==x){
            cnt++;            
        }
    }

    cout << cnt << endl;
}
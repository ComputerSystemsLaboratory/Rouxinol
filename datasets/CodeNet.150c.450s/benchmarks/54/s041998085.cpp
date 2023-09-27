#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
        string W; cin >> W;
        string T;
        int ans = 0;
        cin >> T;
        transform(W.begin(),W.end(),W.begin(),::toupper);
        transform(T.begin(),T.end(),T.begin(),::toupper);
        while (true) {
                if(W == T) ans++;
                cin >> T;
                if(T == "END_OF_TEXT") break;
                transform(T.begin(),T.end(),T.begin(),::toupper);
        }   
        cout << ans << endl;

return 0;
}
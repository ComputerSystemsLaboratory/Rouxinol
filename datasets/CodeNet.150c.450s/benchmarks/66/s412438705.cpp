#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;cin >> n;
    vector<string> u(n);
    for(int i = 0; i < n; i++)cin >> u[i];
    sort(u.begin(), u.end());
    bool isopen = false;
    cin >> m;
    for(int i = 0; i < m; i++){
        string m;cin >> m;
        bool find = false;
        for(int j = 0; j < n; j++) if(u[j] == m){
            find = true;
            break;
        }
        if(find){
            if(isopen){
                cout << "Closed by " << m << endl;
            }
            else{
                cout << "Opened by " << m << endl;
            }
            isopen = !isopen;
        }
        else{
            cout << "Unknown " << m << endl;
        }
    }
	return 0;
}



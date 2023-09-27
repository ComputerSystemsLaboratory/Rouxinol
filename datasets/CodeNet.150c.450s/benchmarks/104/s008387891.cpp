#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int w, n;
    int d[31];
    while(cin >> w >> n){
        for(int i=1;i<=w;i++) d[i] = i;
        for(int i=0;i<n;i++){
            string s; cin >> s;
            for(int j=0;j<s.size();j++)
                if(s[j]==',') s[j] = ' ';
            istringstream iss(s);
            int a, b; iss >> a >> b;
            swap(d[a], d[b]);
        }
        for(int i=1;i<=w;i++) cout << d[i] << endl;
    }
}
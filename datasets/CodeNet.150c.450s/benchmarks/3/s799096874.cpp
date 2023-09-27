#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,c,x;
    int y,a,b;
    cin >> s >> y;
    for(int t=0;t < y;t++){
        cin >> c >> a >> b;
        if(c == "print"){
            cout << s.substr(a,b-a+1) << endl;
        }else if(c =="reverse"){
            string k =s.substr(a,b-a+1);
            int n = k.size();
            for(int i =0;i<n;i++) s[i+a]=k[n-i-1];
        }else if (c == "replace"){
            cin >> x;
            s = s.replace(a,b-a+1,x);
        }
        
    }
}

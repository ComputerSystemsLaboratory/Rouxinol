#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
 
struct Ses{
    int st, en, si;
};
 
int main(){
    string str;
    cin >> str;
    int n = str.size();
    int Am = 0;
    stack<Ses> Em;
    stack<int> F;
    Ses Km; 

    for(int i = 0; i < n; i++){
        if(str[i] == '\\'){
            F.push(i);
        } else if(str[i] == '/'){
            if(!F.empty()){
                int b = F.top();
                F.pop();
                Km.st = b;
                Km.en = i;
                Km.si = i-b;
                Am += Km.si;
                while( !Em.empty() ){
                    if(Km.st < Em.top().st){
                        Km.si += Em.top().si;
                        Em.pop();
                    } else {
                        break;
                    }
                }
                Em.push(Km);
            }
        }
    }
    cout << Am << endl;
    int m = Em.size(), T[m];
    cout << m;
    for(int i = 0; i < m; i++){
        T[m - i - 1] = Em.top().si;
        Em.pop();
    }
    for(int i = 0; i < m; i++)
        cout << " " << T[i];
    cout << endl;
}
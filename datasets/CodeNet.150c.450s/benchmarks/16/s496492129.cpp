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
    int Ma = 0;
    stack<Ses> S;
    stack<int> slope;
    Ses temp; 

    for(int i = 0; i < n; i++){
        if(str[i] == '\\'){
            slope.push(i);
        } else if(str[i] == '/'){
            if(!slope.empty()){
                int b = slope.top();
                slope.pop();
                temp.st = b;
                temp.en = i;
                temp.si = i-b;
                Ma += temp.si;
                while( !S.empty() ){
                    if(temp.st < S.top().st){
                        temp.si += S.top().si;
                        S.pop();
                    } else {
                        break;
                    }
                }
                S.push(temp);
            }
        }
    }
    cout << Ma << endl;
    int m = S.size(), A[m];
    cout << m;
    for(int i = 0; i < m; i++){
        A[m - i - 1] = S.top().si;
        S.pop();
    }
    for(int i = 0; i < m; i++)
        cout << " " << A[i];
    cout << endl;
}
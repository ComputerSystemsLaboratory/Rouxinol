#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main(){

    list<int> S;
    stack<int> T;

    int n;
    cin >> n;
    int num;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> num;
        S.push_front(num);
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> num;
        T.push(num);
    }

    int length = T.size();

    for(int i=0; i<length; i++){
        num = T.top(); T.pop();
        for(auto itr = S.begin(); itr != S.end(); itr++){
            if(*itr == num){
                S.erase(itr);
                cnt++;
                break;
            }
        }      
    }

    cout << cnt << endl;

    return 0;
}
/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0006&lang=jp*/

#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    string::reverse_iterator rt=str.rbegin();
    while(rt!=str.rend()){
        cout<<*rt++;
    }
    cout<<endl;
    return 0;
}
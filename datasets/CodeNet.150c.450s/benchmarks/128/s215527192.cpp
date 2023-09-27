#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string str;
    cin>>str;
    for (int i = str.length()-1; i>=0; i--) {
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define LISTSIZE 3000
 
int main(){
    string n[LISTSIZE];

    int count = 0;
    while (1){
        int a, b, tmp;
        ostringstream ostr;

        cin >> a >> b;
        if (a==0 && b==0) {
            break;
        }

        if (a>b) {
            tmp = a;
            a = b;
            b = tmp;
        }

        ostr << a << ' ' << b;
        n[count] = ostr.str();
        count += 1;
    }

    for (int t=0; t<count; t+=1) {
        cout << n[t] << endl;
    }
    return 0;
}
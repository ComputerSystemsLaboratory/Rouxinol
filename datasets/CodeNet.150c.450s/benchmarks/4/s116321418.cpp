#include <iostream>
using namespace std;

int main() {
    int m, f, r;

    do{
        cin >> m >> f >> r;

        if (m == -1 || f == -1){
            if (m == -1 && f == -1 && r == -1) break;
            else cout << "F" << endl;
        }
        else if ((80<=(m+f))) cout << "A" << endl;
        else if ((65<=(m+f)) && ((m+f)<80)) cout << "B" << endl;
        else if ((50<=(m+f)) && ((m+f)<65)) cout << "C" << endl;
        else if ((30<=(m+f)) && ((m+f)<50)) {
            if (50<=r) cout << "C" << endl;
            else cout << "D" << endl;
        }
        else if (((m+f)<30)) cout << "F" << endl;
        else cout << "No such score!" << endl;
    } while (1);


    return 0;
}
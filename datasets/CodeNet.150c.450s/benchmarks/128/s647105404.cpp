#include <iostream>
#include <cstring>

using namespace std;

int main() {
        string teks;
        getline(cin,teks);
        int n=teks.size();
        for (int i=n-1; i>=0; i--) {
                cout << teks[i];
        }
        cout << endl;
        return 0;
}
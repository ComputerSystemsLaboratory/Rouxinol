#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    string pickles, ickles;
    int count = 0;
    cin >> pickles;
    transform(pickles.begin(), pickles.end(), pickles.begin(), ::tolower);
    while(cin >> ickles) {
        if (ickles == "END_OF_TEXT") {
            break;
        }
        transform(ickles.begin(), ickles.end(), ickles.begin(), ::tolower);
        if (ickles == pickles) {
            count++;
        }
    }
    cout<< count << endl;
    return 0;
}

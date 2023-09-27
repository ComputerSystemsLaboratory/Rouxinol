#include <iostream>
using namespace std;

int main()
{
    string hcard, tcard;
    int tscore, hscore, n;

    cin >> n;

    tscore = hscore = 0;
    for (int i = 0; i < n; i++){
        cin >> tcard >> hcard;

        if (tcard > hcard){
            tscore += 3;
        }
        else if (tcard < hcard){
            hscore += 3;
        }
        else {
            tscore++;
            hscore++;
        }
    }

    cout << tscore << " " << hscore << endl;

    return 0;
}
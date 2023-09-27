#include <iostream>


using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int debt = 100000;
    for(int i=0;i<n;i++){
        double tmp = (double)debt * 1.05;
        debt = (int)tmp;
        int xsen = debt / 1000;
        if( debt % 1000 != 0){
            debt = 1000 * (xsen+1);
        }
    }
    cout << debt << endl;
    return 0;
}
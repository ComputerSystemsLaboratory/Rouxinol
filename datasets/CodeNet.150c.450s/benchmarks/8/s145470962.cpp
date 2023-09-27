#include<iostream>
using namespace std;
#include<string>

int main()
{
    int i, n;
    int sc_t = 0, sc_h = 0;
    string w_t, w_h;

    cin >> n;
    for(i = 0; i < n; i++){
        cin >> w_t >> w_h;
        if(w_t > w_h){
            sc_t = sc_t + 3;
        }else if(w_t < w_h){
            sc_h = sc_h + 3;
        }else{
            sc_t = sc_t + 1;
            sc_h = sc_h + 1;
        }
    }
    cout << sc_t << " " << sc_h << endl;

    return 0;
}
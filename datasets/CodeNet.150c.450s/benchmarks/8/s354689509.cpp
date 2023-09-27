#include<iostream>
#include<string>
using namespace std;

int main(){
    int t,h,n;
    cin >> n;
    string tc,hc;
    t = h = 0;
    for (int i = 0; i < n; i++){
        cin >> tc >> hc;
        if(tc > hc) t += 3;
        else if (hc > tc) h += 3;
        else{
            t++;
            h++;
        }
    }
    cout << t << " " << h << endl;
    return 0;
}

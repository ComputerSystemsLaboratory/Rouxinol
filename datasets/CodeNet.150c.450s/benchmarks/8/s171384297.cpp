#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int n=0, ph=0, pt=0;
    string ct, ch;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> ct >> ch;
        if(ct == ch) {
            pt++;
            ph++;
            continue;
        }
        for(int j=0;j<fmin(ct.size(), ch.size());j++) {
            if(ct[j] < ch[j]) {
                ph += 3;
                break;
            } else if (ct[j] > ch[j]) {
                pt += 3;
                break;
            }
            if(j == fmin(ct.size(), ch.size()) - 1) {
                if(ct.size() < ch.size()) {
                    ph += 3;
                } else {
                    pt += 3;
                }
            }
        }
    }
    cout << pt << " " << ph << endl;
}
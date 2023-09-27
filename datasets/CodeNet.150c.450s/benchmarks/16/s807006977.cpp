#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
    int l,A=0,d,i,j;
    vector<int> L = vector<int>();
    string in;
    cin>>in;
    for (i=0;i<in.size();i++) {
        switch (in[i]) {
        case '\\':
            l=1;d=1;
            for (j=i+1;j<in.size() && d>0;j++) {
                switch (in[j]) {
                case '\\':
                    l=l+d*2+1;
                    d++;
                    break;
                case '/':
                    l=l+d*2-1;
                    d--;
                    break;
                case '_':
                    l=l+d*2;
                    break;
                default:
                    break;
                }
            }
            if (d<1) {
                L.push_back(l);
                A += l;
                i = j-1;
            }
            break;
        case '/':
            break;
        case '_':
            break;
        default:
            break;
        } 
    }
    
    cout<<A/2<<endl;
    cout<<L.size();
    for (i=0;i<L.size();i++) cout<<" "<<L[i]/2;
    cout<<endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    int c,nc,l,x;
    do{
        cin >> n;
        if (n=="-")
            break;
        l=n.size();
        cin >> nc;
        c=0;
        for (int i=0;i<nc;i++){
            cin >> x;
            c+=x;
        }
        c%=l;
        string s2=n;
        if (c!=0){
            s2.assign(n,c,l-c);
            s2.append(n,0,c);
        }
        cout << s2 << endl;
    }while (1==1);
    return 0;
}

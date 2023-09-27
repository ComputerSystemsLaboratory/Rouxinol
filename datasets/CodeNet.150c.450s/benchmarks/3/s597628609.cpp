#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str;
    cin >> str;
    int q, a, b;
    string p, o, tmp, ttmp;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> o;
        if(o=="replace"){
            cin >> a >> b >> p;
            str = str.replace(a, p.size(), p);
        }else{
            cin >> a >> b;
            if(o=="reverse"){
                tmp = str.substr(a, b-a+1);
                ttmp = "";
                for(int j=0;j<b-a+1;j++){
                    ttmp += tmp[b-a-j];
                }
                str = str.replace(a, b-a+1, ttmp);
            }else if(o=="print"){
                cout << str.substr(a, b-a+1) << endl;
            }
        }
    }
}

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,order,p;
    int q,a,b,i,j;
    char swap;

    cin >> str;
    cin >> q;
    for(i=0;i<q;i++){
        cin >> order >> a >> b;
        if(order == "print"){
            for(j=a;j<=b;j++){
                cout << str[j];
            }
            cout << endl;
        }else if(order == "reverse"){
            for(j=0;j<(b-a)/2+1;j++){
                swap = str[a+j];
                str[a+j] = str[b-j];
                str[b-j] = swap;
            }
        }else if(order == "replace"){
            cin >> p;
            for(j=0;j<b-a+1;j++){
                str[j+a] = p[j];
            }
        }
    }
    return 0;
}


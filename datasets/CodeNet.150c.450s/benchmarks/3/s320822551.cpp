#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,order;
    int q,a,b;
    cin >> str >> q;
    for(int i = 1; i <= q; i++){
        string rev;
        cin >> order;
        if(order == "print"){
            cin >> a >> b;
            for (int j = a; j <= b; j++){
                cout << str[j];
            }
            cout << endl;
        }
        else if(order == "reverse"){
            cin >> a>> b;
            for (int j = b; j >= a; j--){
                rev += str[j];
            }
            str = str.replace(a,b-a+1,rev);
        }
        if(order == "replace"){
            cin >> a >> b >> rev;
            str = str.replace(a,b-a+1,rev);
        }
    }
    return 0;
    
}

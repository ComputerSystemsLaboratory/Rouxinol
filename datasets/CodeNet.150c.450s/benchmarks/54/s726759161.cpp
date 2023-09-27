#include<string>
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string a,b,c;
    int x=0,y;
    cin >> a;
    while(1){
        b="";
        cin >> c;
        y=c.size();
        if(c=="END_OF_TEXT"){
               cout << x << endl;
            break;
        }
        for(int i=0;i<y;i++){
            b += tolower(c[i]);
        }
        if(b==a){
            x++;
        }
    }return 0;
}

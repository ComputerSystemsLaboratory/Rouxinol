#include <iostream>
using namespace std;
 
#include <stdio.h>
#include <algorithm>
#include <string>

int main(void)
{
    string str;
    string command;
    string print   ="print";        //strstr ??? a??????????????? b???????????????§??????????????????
    string replace ="replace";      //strstr ??? a??????????????? b???????????????§??? p?????????????????????
    string reverse ="reverse";      //strstr ??? a??????????????? b???????????????§?????????????????????
    string p ;
    int a , b;
    int q ;
    string rrr;
    string sss;
    int s,r;
     
     
    cin >> str;
    cin >> q;
 
    s = str.length();
     
    for(int i =0; i < q ; i++){
         
        cin >> command >> a >> b;
         
        if(command == print ){
            cout << str.substr(a, (b-a+1)) << endl;
        }
        else if(command == replace){
            cin >> p ;
            str  = str.replace(a, (b-a+1), p);
        }
        else if(command == reverse ){
            rrr = str.substr(a, (b-a+1));
            sss  = rrr;
            r = rrr.length();
//          cout << rrr << endl;
            for (int j = 0 ;  j < (r/2) ; j++){
                rrr[j] = rrr[r-j-1];
                rrr[r-j-1] = sss[j];
//              cout <<rrr<< " keisango"<<endl;
            }
//          cout << str.substr(0,a) << rrr<< endl<< str.substr(b+1,s) << endl<<"fin.";
            str = str.substr(0,a)+ rrr +  str.substr(b+1,s);
        }
        else {
            //??????????????\??????
        }
//      cout << str << endl;
    }
    return 0;
}
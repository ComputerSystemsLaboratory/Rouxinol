#include<iostream>

using namespace std;

int main(){
        string str; cin >> str;
        int q; cin >> q;
        for (int i = 0; i < q; i++){
                int a,b;
                string oreder; cin >> oreder;
                if (oreder == "print"){
                        cin >> a >> b;
                        cout << str.substr(a,b-a+1) << endl;
                }else if(oreder == "reverse"){
                        cin >> a >> b;
                        char tmp;     
                        for ( int j = 0; j <= (b-a)/2; j++){
                                tmp = str[a+j];
                                str[a+j] = str[b-j];
                                str[b-j] = tmp;
                        }       
                }else if(oreder == "replace"){
                        string rp_str;
                        cin >> a >> b >> rp_str;
                        for ( int j = a; j <= b ; j++){
                                str[j] = rp_str[j-a];  
                        }       
                }       
        }       
return 0;
}
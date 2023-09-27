#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cin >>str1;
    int q,a,b;
    string str2, str3;
    cin>>q;
    
    for(int i=0; i<q; i++){
        cin >>str2 >>a >>b;
        if(str2 == "print"){
            cout <<str1.substr(a, b-a+1) <<endl;
        }else if(str2 == "reverse"){
            string str4 = str1.substr(a,b-a+1);
            reverse(str4.begin(), str4.end());
            str1 = str1.substr(0,a) + str4 + str1.substr(b+1, str1.size()-a-1); 
        }else{
            cin >>str3;
            str1 = str1.substr(0,a)+ str3 + str1.substr(b+1, str1.size()-a-1);
        }
    }
}

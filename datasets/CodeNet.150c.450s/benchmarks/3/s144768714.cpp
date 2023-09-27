#include<iostream>
#include<stdio.h>
#include<cctype>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int a,b,n;
    char t;
    string str,order,p;
    cin >> str >> n;
    for(int i=0;i<n;i++){
        cin >> order >> a >> b;
        if(order == "print"){
            cout << str.substr(a,b-a+1) << endl;
        }
        
        else if(order == "reverse"){
            for (int i=0;i<(b-a+1)/2;i++){
				char t = str[a+i];
				str[a+i] = str[b-i];
				str[b-i] = t;
			}
        }
        else if(order == "replace"){
            cin >> p;
            str = str.erase(a,b-a+1);
            str = str.insert(a,p);
        }
    }
}

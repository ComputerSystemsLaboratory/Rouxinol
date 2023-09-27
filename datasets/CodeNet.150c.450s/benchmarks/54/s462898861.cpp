#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    int n = 0;
    string W, T;
    
    cin >> W;
    for(int i=0;W[i]!='\0';i++)
    	W[i]=static_cast<char>(toupper(W[i]));
    	
    while (cin >> T){
        if (T== "END_OF_TEXT")
            break;

    	for(int i=0;T[i]!='\0';i++)
      	    T[i]=static_cast<char>(toupper(T[i]));
       
        if (W == T)
            n++;
    }
    cout <<n<< endl;
}
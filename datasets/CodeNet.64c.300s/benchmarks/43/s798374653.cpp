#include <iostream>
using namespace std;
int main(void){
    int Ai,Am,As,Ae,Bi,Bm,Bs,Be;
    cin>>Ai>>Am>>As>>Ae>>Bi>>Bm>>Bs>>Be;
    cout<<(Ai+Am+As+Ae>Bi+Bm+Bs+Be?Ai+Am+As+Ae:Bi+Bm+Bs+Be)<<endl;
}
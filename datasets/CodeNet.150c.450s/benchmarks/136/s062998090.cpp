#include <iostream>
 
using namespace std;
 
int main() {
 
    long long int ain[50],bin[50];
    long long int a,b,c,d,e,gcm,lcd;
    int loop=50;
    
    for(int i = 0;i<50;i++) {
    	ain[i]=0;
    	bin[i]=0;
        cin >> ain[i] >> bin[i];
        /*if (ain[i]==null) {
        	loop = i;
        	break;
        }*/
    }
    for (int i = 0;i <= loop;i++) {
    a = ain[i];
    b = bin[i];
    if (a==0&&b==0) break;
    if (a < b) {
        c  = a;
        a  = b;
        b = c;
        c=0;
    }
 
    c=a;
    d=b;
 
    for(;;) {
        if(d==0) {
            gcm = c;
            lcd = (a * b) / gcm;
            break;
        }
        e = c % d;
        c = d;
        d = e;
    }
 
    cout << gcm << " " << lcd << endl;
    }
 
    return 0;
}
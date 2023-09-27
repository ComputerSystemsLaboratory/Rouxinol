#include <iostream>

using namespace std;

char d[1<<22];
unsigned char key[256];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, hash;
    char com[8], str[16], *p;
    key['A']=0;
    key['C']=1;
    key['G']=2;
    key['T']=3;
    
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>com>>str;
        hash=1;
        p=str;
        while(*p) hash = (hash<<2)+key[(unsigned)*(p++)];
        
        if(com[0]=='i') {
            d[hash>>3] |= 1<<(hash&7);
        } else {
            if(d[hash>>3] & (1<<(hash&7)) ) cout<<"yes\n";
            else cout<<"no\n";
        }
    }
    return 0;
}
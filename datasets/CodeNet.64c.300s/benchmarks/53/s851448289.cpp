#include <iostream>

using namespace std;

int main()
{
    int ap,a,b,c,p=0,count=0;
    cin >> a >> b >> c;
    for(int i=0;i<b+1-a;i++){
    ap=a+p;
        if(c%ap==0){
            count++;
        }
        p++;

    }
    cout << count << endl;
}

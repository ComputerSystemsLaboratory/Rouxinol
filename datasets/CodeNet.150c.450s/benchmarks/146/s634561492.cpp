#include<iostream>
#include<complex>
using namespace std;
int main(){
    int time;
    cin>>time;
    for(int i=0;i<time;++i){
        float a,b,c,d;
        cin>>a>>b>>c>>d;
        complex<float> x(a-c,b-d);
        cin>>a>>b>>c>>d;
        complex<float> y(a-c,b-d);
        y = conj(y);
        complex<float> z = x*y;
        if(z.imag()==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

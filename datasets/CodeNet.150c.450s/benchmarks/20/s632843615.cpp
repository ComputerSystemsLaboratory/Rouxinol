#include <iostream>

using namespace std;

int main(){
    int s,h,mm,mmm,m,ss;
    cin >> s;
    h = s/3600;
    m = s%3600;
    mm = m/60;
    mmm=m%60;
    ss=s-h*3600-m/60;
    cout <<h <<":"<< mm<<":"<<mmm<<endl;
    
    
    
}

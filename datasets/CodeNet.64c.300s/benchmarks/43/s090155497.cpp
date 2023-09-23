#include <iostream>
using namespace std;
int main()
{
 int aj,am,as,ae;
 int bj,bm,bs,be;
 int s=0,t=0;

 cin >> aj >> am >> as >> ae;
 cin >> bj >> bm >> bs >> be;

 s = aj+am+as+ae;
 t = bj+bm+bs+be;

 if(s>=t){
    cout << s << endl;
 }
 else if(t>s)
    cout << t << endl;

return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){
    double a, b, c, d, e, f;
    double p, q;
    while(cin >> a >> b >> c >> d >> e >> f){
        cin >> p >> q;
        vector<int> x(3), y(3);
        x[0] = a; x[1] = c; x[2] = e;
        y[0] = b; y[1] = d; y[2] = f;
        int ret = 0;
        bool is = false;
        for(int i=0; i < x.size(); i++){
            double X1 = x[i%3], X2 = x[(i+1)%3], X3 = x[(i+2)%3];
            double Y1 = y[i%3], Y2 = y[(i+1)%3], Y3 = y[(i+2)%3];
            int ans = 0;
            if ((X2-X1)*(q-Y1)-(Y2-Y1)*(p-X1)>0.0) ans++;
            if ((X3-X2)*(q-Y2)-(Y3-Y2)*(p-X2)>0.0) ans++;
            if ((X1-X3)*(q-Y3)-(Y1-Y3)*(p-X3)>0.0) ans++;
            if(ans%3==0) is = true;
        }
        cout << (is?"YES":"NO") << endl;
    }
}
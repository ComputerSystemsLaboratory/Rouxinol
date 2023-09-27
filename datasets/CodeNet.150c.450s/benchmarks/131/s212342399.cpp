#include<bits/stdc++.h>
using namespace std;
const int INF=1000000000;
int main(){
    int a, l, numlog[30];
    while (cin >> a >> l && l)
    {
        for (int i = 0; i < 30; i++){
            numlog[i] = 0;
        }
        numlog[0] = a;
        char tmp[l];
        int tmpa = a,flag=0;
        for (int j = 1;; j++){
            for (int i = 0; i < l; i++)
            {
                tmp[i] = tmpa % 10;
                tmpa /= 10;
            }
            int amax = 0, amin = 0;
            sort(tmp, tmp + l);
            for (int i = 0, p = 1; i < l; i++,p*=10){
                amin += (int)tmp[l - 1 - i] * p;
                amax += (int)tmp[i] * p;
            }
            tmpa = amax - amin;
            int now = 0;
            for (int i = 0; i<j;i++){
                if(numlog[i]==tmpa){
                    cout << i << " " << tmpa << " " << j - i<< endl;
                    flag = 1;
                    break;
                }
                now++;
            }
            numlog[now] = tmpa;
            if(flag)
                break;
            
        }
   }
   return 0;
}

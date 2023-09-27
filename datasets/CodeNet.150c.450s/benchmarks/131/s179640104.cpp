#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){

    int a, b, tmpmax = 0, tmpmin = 0, tmpdif = 0;

    vector<int> v;
    while(cin>>a>>b,a||b){

        map<int,int> mp;
        mp[a] = 1;
        v.resize(b,0);

        for(int i=b-1;i>=0;i--){
            v[i]=a%10;
            a/=10;
        }
        for(int i=2;;i++){
            tmpmax = 0;
            tmpmin = 0;
            tmpdif = 0;
            sort(v.begin(),v.end(),greater<int>());
            for(int j=0;j<b;j++){
                tmpmax=tmpmax*10+v[j];

            }
            //cout << tmpmax;
            sort(v.begin(),v.end());
            for(int j=0;j<b;j++){
                tmpmin=tmpmin*10+v[j];

            }
          //  cout << " " << tmpmin << endl;
            tmpdif = tmpmax-tmpmin;
            if(mp[tmpdif]!=0){
                cout << mp[tmpdif]-1 << " " << tmpdif<<" " << i - mp[tmpdif] << endl;
                break;
            }else{
                mp[tmpdif] = i;
                
                for(int j=b-1;j>=0;j--){
                    v[j]=(tmpdif)%10;
                    tmpdif/=10;
               //     cout << v[j];
                }
                //cout << endl;
            }
        }

    }
}

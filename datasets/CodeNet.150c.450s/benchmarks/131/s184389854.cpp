#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;
typedef long long ll;

int main(){
    while(true){
        string f;
        int n;
        cin >> f >> n;
        if(f=="0" && n==0) break;
        vector<string> S;
        S.push_back(f);
        for(int i=1;;i++){
            stringstream ins;
            ins << setw(n) << setfill('0') << f;
            string os;
            ins >> os;
            string mis,mas;
            sort(os.begin(),os.end());
            mis = os;
            reverse(os.begin(),os.end());
            mas = os;

            stringstream miss,mass;
            miss << mis;
            mass << mas;

            ll mii,mai;
            miss >> mii;
            mass >> mai;

            ll fi = mai - mii;
            stringstream fs;
            fs << setw(n) << setfill('0') << fi;
            string newf;
            fs >> newf;
            if((find(S.begin(),S.end(),newf)) != S.end()){
                vector<string>::iterator it=find(S.begin(),S.end(),newf);
                int ind = it - S.begin();
                cout << ind << " " << fi << " " <<  i-ind <<  endl;
                break;
            }
            f = newf;
            S.push_back(newf);
        }
    }
}
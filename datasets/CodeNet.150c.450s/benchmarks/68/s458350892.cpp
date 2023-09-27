#include <iostream>
#include <vector> 
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <cerrno>
#include <cfenv>
#include <math.h>
#include <iomanip>
#include <limits>
#define ll long long int

using namespace std;

int main(){

    int n;

    while(true){

        vector<int> data(1000);

        cin >> n;

        if(n==0){
            break;
        }

        for(int i=0;i<n;i++){
            cin >> data[i];
        }

        sort(data.begin(),data.begin()+n);

        vector<int> dis(1000);

        for(int i=0;i<n-1;i++){
            dis[i] = data[i+1]-data[i];
        }

        sort(dis.begin(),dis.begin()+n-1);

        cout << dis[0] << endl;

    }

    return 0;
}

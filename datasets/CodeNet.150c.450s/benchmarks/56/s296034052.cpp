#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    int input_num;
    cin >> n;

    vector<int> vec_num;
    for(int i = 0;i < n;i++){
        cin >> input_num;
        vec_num.push_back(input_num);
    }

    int nmin=vec_num[0],nmax=vec_num[0];
    long nsum = 0;

    for (auto x : vec_num){
        if(nmin > x)
          nmin = x;
        if(nmax < x)
          nmax = x;
        nsum += x;
    }
    cout << nmin << " " << nmax << " " << nsum << endl;
}

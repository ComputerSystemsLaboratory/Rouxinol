#include<iostream>
using namespace std;
#include<string>

int main()
{
    string *name;
    int *work;
    int i, n, q, rest, st_rest, yet, total;
    cin >> n >> q;
    name = new string [n * 2 + 1];
    work = new int [n * 2 + 1];
    if(name == NULL || work == NULL) return 0;
    for(i = 0; i < n; i++) cin >> name[i] >> work[i];
    rest = n; yet = n, total = 0;

    while(rest){
        st_rest = rest;
        for(i = 0; i < st_rest; i++){
            if(work[i] > q){
                name[yet] = name[i];
                work[yet] = work[i] - q;
                yet++; total += q;
            }else{
                total += work[i];
                cout << name[i] << " " << total << endl;
                rest--;
            }
        }
        if(rest){
            for(i = 0; i < rest; i++){
                name[i] = name[i + n];
                work[i] = work[i + n];
            }
        }
        yet = n;
    };
    return 0;
}
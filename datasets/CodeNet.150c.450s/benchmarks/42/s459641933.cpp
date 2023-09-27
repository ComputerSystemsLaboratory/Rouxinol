#include<iostream>
using namespace std;
#include<string>

int main()
{
    string name[100001];
    int work[100001];
    int i, n, q, rest, time, head;
    cin >> n >> q;
    name[0] = "*";
    work[0] = 0;
    rest = n; time = 0; head = 0;

    for(i = 1; i <= n; i++) cin >> name[i] >> work[i];

    while(rest > 0){
        for(i = 0; i <= n; i++){
            if(work[i] > q){
                time = time + q;  // q???????????????
                name[head] = name[i];
                work[head] = work[i] - q;
                head++;
                if(head > n) head = head - n - 1;
                work[i] = 0;
            }else if(work[i] > 0){
                time = time + work[i];  // work[i]???????????????
                cout << name[i] << " " << time << endl;
                work[i] = 0;
                rest--;
            }else{}
            if(rest == 0) break;
        }
    };

    return 0;
}
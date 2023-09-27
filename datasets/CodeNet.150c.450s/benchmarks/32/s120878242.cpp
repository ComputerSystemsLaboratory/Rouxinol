#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
        int i,m,nmin,nmax,Diff,num;

        while(1){
                num = 0;
                Diff = 0;
                cin >> m >> nmin >> nmax;
                if(m == 0 && nmin == 0 && nmax == 0){
                        break;
                }

                vector<int> data(m);
                for(i = 0; i < m; i++){
                        cin >> data[i];
                }

                vector<int> diff(m-1);
                for(i = 0; i < m-1; i++){
                        diff[i] = data[i] - data[i+1];
                }

                for(i = nmin-1; i < nmax; i++){
                        if(diff[i] >= Diff){
                                Diff = diff[i];
                                num = i;
                        }
                }
                cout << num + 1 << endl;
                vector<int>().swap(data);
                vector<int>().swap(diff);
        }
        return 0;
}
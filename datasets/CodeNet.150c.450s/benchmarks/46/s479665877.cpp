#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int N,M;
    // cin >> N>>M;
    // int Mat[N][M];
    int n,x;
    cin >> n >> x;
    int count;
    int a,b,c;
    while((n != 0) || (x!=0)){
        count = 0;
        for (a =1; a<=n; a++){

            for(b=a+1; b<=n; b++){
                for(c=b+1; c<=n; c++){
                    if (a+b+c == x){
                        count++;
                        // printf("%d %d %d\n", a,b,c);
                    }
                }
            }
        }
        cout << count<<endl;
        cin >> n >> x;

    }
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
    int n;
    int x=1;
    cin >> n;
    while(x<=n){
        if(x%3==0||x%10==3||(x/10)%10==3||(x/100)%10==3||(x/1000)%10==3)
            cout << " " << x ;
        x++;
    }
    cout << endl;
    return 0;
}


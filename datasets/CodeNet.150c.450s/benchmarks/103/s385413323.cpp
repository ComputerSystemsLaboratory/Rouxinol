#include <iostream>

using namespace std;

int n, s, cont, cost;

void dps(int sum, int i, int cost);

int main()
{
    while(cin >> n >> s)
    {
        if(n == 0 && s == 0)    break;
       
        cont = 0;
        dps(0, 0, 0);
        cout << cont << endl;
    }

    return 0;
}

void dps(int sum, int i, int cost)
{
	if(cost == n && sum == s)	cont++;
	if(i == 10 || cost == n)	return;
	dps(sum+i, i+1, cost+1);
	dps(sum, i+1, cost);
}
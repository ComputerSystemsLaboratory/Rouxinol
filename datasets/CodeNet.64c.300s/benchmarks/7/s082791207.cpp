#include<iostream>

using namespace std;

int main()
{
int n;
cin >> n;

int cards[4][13] = {0};
char p[4] = {'S','H','C','D'};

char c[52];
int x[52];

for (int i = 0; i < n ; i++)
{
cin >> c[i] >> x[i];
}

for (int i = 0; i < n; i++)
{
if (c[i] == 'S')
cards[0][x[i]-1] = 1;
else if (c[i] == 'H')
cards[1][x[i]-1] = 1;
else if (c[i] == 'C')
cards[2][x[i]-1] = 1;
else
cards[3][x[i]-1] = 1;
}



for (int i = 0; i < 4; i++)
{
for (int j = 0; j < 13; j++)
{
if (cards[i][j] != 1)
   cout << p[i] << ' ' << j + 1 << '\n';
}
}

}
#include <iostream>
#include <bits/stdc++.h>
#include<string>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <vector>

#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define SPACE " "
#define nLINE '\n'
#define ss second
#define ff first
//scanf("%d",&x) ,s.insert(x);
using namespace std;

ll GCD(ll a, ll b) {
	//Euclidian
	if (!b) return a;
	else return GCD(b, a % b);
}
const ll MAX = 51;
bool prime[MAX];
void sieve() {
	for (int p = 2; p * p <= MAX; p++)
		if (prime[p] == false)
			for (int i = p * 2; i <= MAX; i += p)
				prime[i] = true;
}

int comb(int a, int b)
{
	if (a < b) return 0;
	if (a == b) return 1;
	if (b == 0) return 1;
	return comb(a - 1, b) + comb(a - 1, b - 1);
}
int x[30];
long long int y[30];
long long int func(int s, int t)
{
	if (t == 0) return 1;
	if (s == 0) return 1;

	if (x[s] == 0) return func(s - 1, t);
	else
	{
		long long int sum = 0;
		for (int i = 0;i <= t;i++) sum += comb(s - 1, i) * y[i];

		long long int s1 = sum;

		sum = 0;
		for (int i = 0;i <= t - 1;i++) sum += comb(s - 1, i) * y[i];
		long long int s2 = (x[s] - 1) * sum;
		long long int s3 = func(s - 1, t - 1);
		return s1 + s2 + s3;
	}
}



int dp[13][1 << 13];
double arr[20][20];
int n;
int dvds[13],svs[13];
vector<double> sssp(int);
vector<double> minDis[20];
int Size;

double solve(int current, int mask) {
    if(mask == ((1 << Size) - 1)) return -arr[dvds[current]][0];

    if(dp[current][mask] != -1)
        return dp[current][mask];


    double Max = -arr[dvds[current]][0];
    for(int i= 0; i< Size; i++)
        if((mask & (1 << i)) == 0)
            Max = max(Max, svs[i] - arr[dvds[current]][dvds[i]]+ solve(i, mask | (1 << i)));

    return dp[current][mask]= Max;
}

int nextMin(int,int);
int lis[100001];
int main() {
	int N;
	cin >> N;
    for (int x=1;x<=100;x++){
        for (int y=1;y<=100;y++){
            for (int z=1;z<=100;z++){
                int n = x*x + y*y + z*z + x*y + y*z + z*x;
                    lis[n] ++;
            }
        }
    }
    for (int n=1;n<=N;n++)
        cout << lis[n] << nLINE;
}

bool used[20];
vector<double> sssp(int src) {
	vector<double> disSource(n);
	fill(disSource.begin(), disSource.end(), INT_MAX);
	disSource[src] = 0;
	int curr = src;
	memset(used, false, sizeof used);
	used[curr] = true;
	while (curr != -1) {
		for (int j = 0;j < n;j++) {
			if (arr[curr][j] != -1) {
				if (disSource[j] == INT_MAX) disSource[j] = arr[curr][j] + disSource[curr];
				else disSource[j] = std::min(disSource[j], disSource[curr] + arr[curr][j]);
			}
		}
		used[curr] = true;
		curr = nextMin(curr,src);
	}
	return disSource;
}

int nextMin(int curr,int src) {
	int indx = -1;
	double Min = 1e9;
	for (int i = 0;i < n;i++) {
		if (arr[curr][i]!=-1 && arr[curr][i] <= Min && used[i] == false) {
			Min = arr[curr][i];
			indx = i;
		}
	}
	if (indx == -1){
        for(int i=0;i<n;i++)
            if(arr[src][i]!=-1 && arr[curr][i] <= Min && used[i]== false)
                indx = i , Min = arr[curr][i];
	}
	if (indx == -1) return -1;
	return indx;
}

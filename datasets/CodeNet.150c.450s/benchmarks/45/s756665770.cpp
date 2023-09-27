// template ///////////////////////////////////////////////////////////
#include <stdlib.h>
#include <sys/time.h>
#include <stdio.h>
#include <sys/resource.h>
#include <iostream>
using namespace std;

class timer{
	enum KIND{ REAL, CPU }; // real_time or cpu_time 
	double t0; // start
	double t1; // end
	KIND kind_of_time; // default is real_time
	double get_realtime(){struct timeval tv; gettimeofday(&tv, NULL);
		return tv.tv_sec + (double)tv.tv_usec*1e-6;}
	double get_cputime(){struct rusage RU; getrusage(RUSAGE_SELF, &RU); 
		return RU.ru_utime.tv_sec + (double)RU.ru_utime.tv_usec*1e-6;}
public:
	timer(){kind_of_time = REAL;}
	void set(KIND k){kind_of_time = k;}
	void start(){t0 = get_realtime();}
	void stop(){t1 = get_realtime();}
	void print(){printf("TotalTime : %.3fsec\n", t1-t0);}
};
////////////////////////////////////////////////////////////////////////
typedef long long int ll;

ll pow(ll x, int n);
ll rem(ll x, ll n, int mod);

#define MOD 1000000007

int main()
{
	timer T;
    int m, n;
    cin >> m >> n;
	
	ll r;
	T.start();
	r = rem(m, n, MOD);
	T.stop();

    cout << r << endl;
	//T.print();

    return 0;
}

ll rem(ll x, ll n, int mod)
{
	if(!n) return 1;
	long long res;
	res = rem(x*x%mod, n/2, mod);
	if(n%2) res = res*x%mod;
	return res;
}

ll pow(ll x, int n)
{
	if(!n) return 1;
	ll res;
	res = pow(x*x, n/2);
	if(n%2) res *= x;
	return res;
}
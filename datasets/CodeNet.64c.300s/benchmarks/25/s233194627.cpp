////   template  ///////////////////////////////////////////////////////
#include <stdlib.h>
#include <sys/time.h>
#include <stdio.h>
#include <sys/resource.h>
#include <iostream>
#include <vector>
#include <bitset>
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

int main()
{
	int a[4], b[4];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3], cin>>b[0]>>b[1]>>b[2]>>b[3]){
		int hit=0, blow=0;
		bitset<10> fa, fb;
		for(int i=0; i<4; i++){
			if(a[i]==b[i]) hit++;
			fa.set(a[i]), fb.set(b[i]);
		}
		for(int i=0; i<10; i++)
			if(fa[i]&fb[i]) blow++;
		blow -= hit;
		cout << hit << " " << blow << endl;
	}

    return 0;
}
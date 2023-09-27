#include <stdio.h>


using namespace std;

class CSolver{
public:
	CSolver();
	int solve();
	int in_S_;
	int out_h_;
	int out_m_;
	int out_s_;
};

CSolver::CSolver(){
	in_S_ = 0;
};

int CSolver::solve(){
	scanf("%d", &in_S_);
	out_h_ = in_S_ / 3600;
	out_m_ = (in_S_ % 3600) / 60;
	out_s_ = (in_S_ % 3600) % 60;
	printf("%d:%d:%d\n", out_h_ , out_m_ , out_s_);
	return 0;
};

int main(){

	CSolver mysol;

	mysol.solve();

	return 0;
}
#include <stdio.h>


using namespace std;

class CSolver{
public:
	CSolver();
	int solve();
	int in_;
	int out_;
};

CSolver::CSolver(){
	in_ = 0;
	out_ = 0;
};

int CSolver::solve(){
	scanf("%d", &in_);
	out_ = in_ * in_ * in_;
	printf("%d\n",out_);
	return 0;
};

int main(){

	CSolver mysol;

	mysol.solve();

	return 0;
}
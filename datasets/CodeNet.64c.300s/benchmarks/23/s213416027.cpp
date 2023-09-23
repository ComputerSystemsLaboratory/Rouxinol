#include <stdio.h>


using namespace std;

class CSolver{
public:
	CSolver();
	int solve();
	int in_a_;
	int in_b_;
	int out_length_;
	int out_area_;
};

CSolver::CSolver(){
	in_a_ = 0;
	in_b_ = 0;
};

int CSolver::solve(){
	scanf("%d %d", &in_a_,&in_b_);
	out_length_ = (in_a_+ in_b_) * 2;
	out_area_ = in_a_ * in_b_;
	printf("%d %d\n", out_area_ , out_length_);
	return 0;
};

int main(){

	CSolver mysol;

	mysol.solve();

	return 0;
}
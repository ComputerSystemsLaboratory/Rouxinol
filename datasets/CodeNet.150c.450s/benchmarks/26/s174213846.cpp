#include <stdio.h>


using namespace std;

class CSolver{
public:
	CSolver();
	int solve();
	int in_a_;
	int in_b_;
	int out_;
};

CSolver::CSolver(){
};

int CSolver::solve(){
	scanf("%d %d", &in_a_, &in_b_);

	if (in_a_ < in_b_){
		printf("a < b\n");
	}
	else if(in_a_ > in_b_){
		printf("a > b\n");
	}
	else{
		printf("a == b\n");
	}

	return 0;
};

int main(){

	CSolver mysol;

	mysol.solve();

	return 0;
}
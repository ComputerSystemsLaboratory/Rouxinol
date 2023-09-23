#include <cstdio>

int main(void)
{
	int n,hensai=100000;

	std::scanf("%d",&n);
	for (int i=0;i<n;++i){
		hensai = hensai*1.05;
		if (hensai%1000){
			hensai -= hensai%1000;
			hensai += 1000;
		}
	}

	std::printf("%d\n",hensai);
}
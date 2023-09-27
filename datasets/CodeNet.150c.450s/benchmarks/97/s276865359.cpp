#include <iostream>
#include <vector>

typedef struct _POS{
	int x,
		y;
}POS;

POS incl[4] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

int main()
{
	int n,
		num,
		d,
		term[4] = {0, 0, 0, 0};
	POS tmp;
	std::vector<POS> p;
	while(true){
		tmp.x = tmp.y = 0;
		p.push_back(tmp);
		std::cin >> n;
		if(n==0) break;
		for(int i=1; i<n; i++){
			std::cin >> num >> d;
			tmp.x = p[num].x+incl[d].x;
			tmp.y = p[num].y+incl[d].y;
			
			if(tmp.x < term[0]) term[0] = tmp.x;
			else if(tmp.x > term[1]) term[1] = tmp.x;

			if(tmp.y < term[2]) term[2] = tmp.y;
			else if(tmp.y > term[3]) term[3] = tmp.y;

			p.push_back(tmp);
		}
		p.clear();
		std::cout << -term[0]+term[1]+1 << ' ' << -term[2]+term[3]+1 << std::endl;
		term[0] = term[1] = term[2] = term[3] = 0;
	}
	return 0;
}
#include<iostream>
using namespace std;

double x1, y1, x2, y2, x3, y3, xp, yp;

int side(double p1_x, double p1_y, double p2_x, double p2_y){
	double n = xp*(p1_y - p2_y) + p1_x*(p2_y - yp) + p2_x*(yp - p1_y);
	if(n > 0) return 1; // left
	else if(n < 0) return -1; //right
	else return 0; //on_line
}

bool judge_in(){
	int pab = side(x1,y1,x2,y2);
	int pbc = side(x2,y2,x3,y3);
	int pca = side(x3,y3,x1,y1);

	if((pab > 0) && (pbc > 0) && (pca > 0)) return true;
	if((pab < 0) && (pbc < 0) && (pca < 0)) return true;
	return false;
}


int main(){
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp){
		bool judge = judge_in();
		if(judge == true) cout << "YES" << endl;
		else if(judge == false) cout << "NO" << endl;
	}
}
#include <cmath>
#include <complex>
#include <vector>
#include <cfloat>
#include <algorithm>
#include<iostream>
using namespace std;


//二次元幾何テンプレート
//点クラス point->x,y
//直線クラス line->s,v
//
class point;
class line;
point vec_add(point vec1,point vec2);//ベクトルの足し算
point vec_sub(point vec1,point vec2);//ベクトルの引き算
double inner_product(point a,point b);//内積
double outer_product(point a,point b);//外積
bool vec_parallel(point vec1,point vec2);//ベクトルの並行判定(交差判定falseとしても使える)
bool vec_angle_right(point vec1,point vec2);//ベクトルの直行判定
bool cross_line_segment(line a,point p1,point p2);//直線と線分の交差判定
//


class point{
public:
	double x,y;
	point(){
		x=0;
		y=0;
	}
	point(double a,double b){
		x=a;
		y=b;
	}
};

//直線クラス
class line{
public:
	point s,v;
public:
	line(point a,point b){
		s=a;
		v=vec_sub(a,b);
	}
};

//多角形(頂点を保持する)
typedef vector<point> polygon;

//ベクトルの足し算
point vec_add(point vec1,point vec2){
	point res(vec1.x+vec2.x,vec1.y+vec2.y);
	return res;
}
//ベクトルの引き算
point vec_sub(point vec1,point vec2){
	point res(vec1.x-vec2.x,vec1.y-vec2.y);
	return res;
}
//内積
double inner_product(point a,point b){
	return a.x * b.x + a.y * b.y;
}
//外積
double outer_product(point a,point b){
	return a.x * b.y - a.y * b.x;
}


//ベクトルの並行判定
bool vec_parallel(point vec1,point vec2){
	if(outer_product(vec1,vec2)==0){
		return true;
	}else{
		return false;
	}
}
//ベクトルの直交判定
bool vec_angle_right(point vec1,point vec2){
	if(inner_product(vec1,vec2)==0){
		return true;
	}else{
		return false;
	}
}

bool cross_line_segment(line l,point p1,point p2){
	p1=vec_sub(p1,l.s);
	p2=vec_sub(p2,l.s);
	if(outer_product(p1,l.v)*outer_product(p2,l.v)<0){
		return true;
	}else{
		return false;
	}
}



//
int main(){
	int n;
	point p[4];
	cin>>n;
	for(;n--;){
		for(int i=0;i<4;i++){
			cin>>p[i].x;
			cin>>p[i].y;
		}
		p[0]=vec_sub(p[0],p[1]);
		p[2]=vec_sub(p[2],p[3]);
		if(vec_parallel(p[0],p[2])){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
#include <cmath>
#include <stdio.h>

double PI = 3.141592653589;
//ベクトルの定義
struct Vector2D{
	double x;
	double y;
};

//ベクトルの長さを計算する
double get_vector_length( Vector2D v ) {
	return pow( ( v.x * v.x ) + ( v.y * v.y ), 0.5 );
}

//ベクトル内積
double dot_product(Vector2D vl, Vector2D vr) {
	return vl.x * vr.x + vl.y * vr.y;
}

//２つのベクトルABのなす角度θを求める
double AngleOf2Vector(Vector2D A, Vector2D B )
{
	//　※ベクトルの長さが0だと答えが出ませんので注意してください。

	//ベクトルAとBの長さを計算する
	double length_A = get_vector_length(A);
	double length_B = get_vector_length(B);

	//内積とベクトル長さを使ってcosθを求める
	double cos_sita = dot_product(A,B) / ( length_A * length_B );

	//cosθからθを求める
	double sita = acos( cos_sita );	

	//ラジアンでなく0〜180の角度でほしい場合はコメント外す
	sita = sita * 180.0 / PI;

	if(sita > 180){
		sita = 360 - sita;
	}

	return sita;
}

int main()
{
	Vector2D v1,v2,v3;
	double x[3],y[3],xp,yp;
	double sum;
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &xp, &yp) != EOF){
		v1.x = x[0] - xp;
		v1.y = y[0] - yp;
		v2.x = x[1] - xp;
		v2.y = y[1] - yp;
		v3.x = x[2] - xp;
		v3.y = y[2] - yp;
		sum = AngleOf2Vector(v1, v2) + AngleOf2Vector(v1, v3) + AngleOf2Vector(v3, v2);
		if(sum < 360){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
//#define debug

class Triangle{
	float m_x[3],m_y[3],m_xp,m_yp;
	float m_vx[3],m_vy[3];//点Pからの相対座標
	float m_nv1,m_nv2, m_rot,m_rot_sum,m_cos_sita;
	int m_p1,m_p2;
	bool m_pointIsSetted;
public:
	Triangle(){m_pointIsSetted=false;m_rot_sum=0;}
	void setPoint(float x1, float y1, float x2, float y2, float x3, float y3){
		m_x[0]=x1; m_y[0]=y1;
		m_x[1]=x2; m_y[1]=y2;
		m_x[2]=x3; m_y[2]=y3;
		m_pointIsSetted=true;
	}
	bool isPointIn(float xp,float yp){
		m_xp=xp;m_yp=yp;

		//点Pからの相対座標の計算
		for(int i=0;i<3;++i){
			m_vx[i]=m_x[i]-xp;
			m_vy[i]=m_y[i]-yp;
		}

		m_rot_sum = 0;
		for(int i=0;i<3;++i){
			m_p1=i;
			if(i==2)m_p2=0; else m_p2=i+1;
			m_nv1=sqrt(pow(m_vx[m_p1],2.0)+pow(m_vy[m_p1],2.0));
			m_nv2=sqrt(pow(m_vx[m_p2],2.0)+pow(m_vy[m_p2],2.0));

			m_cos_sita = (m_vx[m_p1]*m_vx[m_p2]+m_vy[m_p1]*m_vy[m_p2]) / (m_nv1*m_nv2);
			m_rot = acos( m_cos_sita );
//			if(m_cos_sita<0){m_rot=-m_rot;}
			m_rot_sum += m_rot;
#ifdef debug
			cout<<m_p1<<"  "<<m_p2<<endl;
			cout<<"cos_sita: "<<m_cos_sita<<endl;
			cout<<"sita: "<<m_rot<<endl;
			cout<<"sum of rot: "<<m_rot_sum<<endl;
#endif
		}

		if(abs(m_rot_sum)>6.0){return true;}else{return false;}

	}
};

int main(){

	float x1,y1,x2,y2,x3,y3,xp,yp;
	Triangle oTri;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		oTri.setPoint(x1,y1,x2,y2,x3,y3);
		if(oTri.isPointIn(xp,yp)){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}


	}
	return 0;
}
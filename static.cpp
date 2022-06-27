#include<iostream>
using namespace std;

class complex
{
	private:
		int a,b;
		static float roi;
		
	public:
		void setdata(int,int);
		
		void showdata()
		{
			cout<<"value of a="<<a<<",b="<<b;
		}
		
		complex operator+(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
		 static void getroi(float r){
			roi=r;
		}
		void setroi(){
			cout<<"value of roi="<<roi;
		}
};
	void complex::setdata(int x,int y)
		{
			a=x;  b=y;
		}
int main()
{
	complex c1,c2,c3;
	c1.getroi(23.33);
	c1.setroi();
    c1.setdata(3,7);
	c1.showdata();
	c2.setdata(4,9);
	c2.showdata();
	c3=c1+c2;
	c3.showdata();
}

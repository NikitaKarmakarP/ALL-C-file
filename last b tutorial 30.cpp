#include<iostream>
using namespace std;

class point{
	int x,y;
	public:
		point (int a, int b){
		      x = a;
			  y = b;	
		}
		
		void DisplayPoint(){
			cout<<"The point is "<<x<<","<<y<<endl;
		}
		
};
//take two points objects and compute the distance between those point:
int main(){
	point p(1,1);
	p.DisplayPoint();
	
	point q(4,6);
	q.DisplayPoint();
	return 0;
}

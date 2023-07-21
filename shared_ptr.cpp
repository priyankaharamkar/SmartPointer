#include<iostream>
using namespace std;
#include<memory>
class rectangle{
	int length;
	int breadth;
	public:
		rectangle(int l,int b){
		length=l;
		breadth=b;
		}
		int area()
		{
			return length*breadth;
		}
};
int main()
{
	shared_ptr<rectangle> r(new rectangle(3,4));
	cout<<r->area()<<endl;
	shared_ptr<rectangle>p1;
	p1=p;
	cout<<p1->area()<<endl;
	cout<<p->area()<<endl;
	cout<<p.use_count()<<endl;
}

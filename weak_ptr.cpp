#include<iostream>
using namespace std;
#include<memory>
class rectangle{
	int length;
	int breadth;
	public:
		rectangle(int l, int b)
		{
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
	auto r1=r;
	auto r2=r1;
	cout<<r1->area()<<endl;
	cout<<r1->area()<<endl;
	cout<<r1->area()<<endl;
	cout<<r2->area()<<endl;
	//then count is 3 because we can create 3 reference of rectangle
	cout<<r1.use_count()<<endl;//counting by when we create the reference then chnge count
}

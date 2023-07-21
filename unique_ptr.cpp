#include<iostream>
using namespace std;
#include<memory.h>
class Rectangle{
	int length;
	int breadth;
	public:
		Rectangle (int l,int b)
		{
			length=l;
			breadth= b;
		}
		int area()
		{
			cout<<(length*breadth)<<endl;
		}
		~Rectangle()
		{
			cout<<"destructor"<<endl;
		}
};
int main()
{
	unique_ptr<Rectangle> p(new Rectangle(10,5));
	cout<<p->area()<<endl;
	cout<<p.get()<<endl;	
	unique_ptr<Rectangle> p1;
	p1=move(p);
	cout<<p1->area();
	cout<<p1.get()<<endl;
	
}


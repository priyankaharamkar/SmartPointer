#include<iostream>
using namespace std;
/*Smart Pointer is a  pointer-wrapping stack-allocated object. Smart pointers, in plain terms, are classes that wrap a pointer, or scoped pointers.

C++ libraries provide implementations of smart pointers in the following types:

auto_ptr
unique_ptr
shared_ptr
weak_ptr*/
class smartptr{
	int* ptr;//actual pointer
	public:
	smartptr(int* p=NULL)
	{
		ptr=p;
	}
	~smartptr()
	{
		delete ptr;
	}
	int& operator*() //overload dereferencing operator
	{
		return *ptr;
	}
	
};
int main()
{
	smartptr ptr(new int());
	*ptr=33;
	cout<<*ptr;
}

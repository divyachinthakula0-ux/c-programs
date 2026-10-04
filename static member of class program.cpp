//static variable program 
#include<iostream>
using namespace std;
class Student{
	static int count ;
	public:
	static void display()
	{
		cout<<"value f count is:"<<count;
	}
};
int Student ::count=5;
main()
{
	Student::display();
}
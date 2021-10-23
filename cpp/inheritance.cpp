// C++ program to demonstrate implementation
// of Inheritance

#include <iostream>
using namespace std;

//Base class
class Parent
{
	private:
    int x ;
    protected:
    int y = 9;
    public:
    Parent () {cout<<"Parent constructor";

    }
	int id_p = 10;
    void show () {
        cout << id_p;
    }
};

// Sub class inheriting from Base Class(Parent)
class Child : private Parent
{
	public:
    Child () {cout<<"Child constructor";}
	int id_c;
    void show () {
        cout << y;
    }
};

//main function
int main()
{
	
		Child obj1;
		
		// An object of class child has all data members
		// and member functions of class parent
		obj1.id_c = 7;
		// obj1.id_p = 91;
		// cout << "Child id is " << obj1.id_c << endl;
		// cout << "Parent id is " << obj1.id_p << endl;

        obj1.show();
		
		return 0;
}

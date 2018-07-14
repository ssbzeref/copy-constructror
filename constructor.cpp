/*Write a class that can store Department ID and Department Name with constructors to
initialize its members. Write destructor member in the same class and display the message
"Object n goes out of the scope". Your program should be made such that it should show the
order of constructor and destructor invocation.
#include<iostream>
using namespace std;
class Cons
{
	private:
		int dep_ID;
		char dep_name[25];
	public:
		Cons()
		{
			dep_ID=0;
		//	dep_name="jj";
		}
		Cons(int id)
		{
			dep_ID=id;
//			dep_name=name;
			
		}
		~Cons(){
			cout<<"object out of the scope"<<dep_ID<<endl;
		}
		
};
int main()
{
	Cons c2,c4;
	char nam[25] = "shyam";
	Cons c1(3);
	Cons c3(2);
	return 0;
}


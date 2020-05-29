#include <iostream>
using namespace std;

class Student
{
	string fname; int age;
	
	public:
		void setFname(string f);	
		string getFname();	

	// friend class Student2;	

	// friend void printName(Student s);
};


// Global Function
// void printName(Student s)
// {
// 	cout << s. fname;
// }


// class Student2
// {
// 	public:
// 		void printName(Student s)
// 		{
// 				cout << s.fname;
// 		}

// };

inline void Student :: setFname(string fname)
{
	this->fname = fname;
}

inline string Student :: getFname()
{
	return fname;
}


int main()
{
	// Student2 s2;
	Student s1;

	s1.setFname("Arpit");

	// printName(s1);
	// s2.printName(s1);
	
	// cout<<s1.getFname();
	return 0;
}



/*

		Parent Class (A)
				|-- void goesSomeWhereIntheMorning()
						{
							cout << "Office";
						}

						void goesSomeWhereIntheMorning(string place)
						{
							cout << place;
						}

		Child Classs (B) : Class A
				|-- void goesSomeWhereIntheMorning()
				{
					cout << "School";
				}




*/












// Friend Class and Friend Funtion.





// Inline functions
// Scope resolution operator(::)







// class Student
// {
// 	public:
// 		Student()
// 		{
// 			cout<<"Calling the constructor"<<endl;
// 		}
// 		~Student()
// 		{
// 			cout<<"Ending the execution.";
// 		}	
// };

// int main() {

// 	Student s;

//   	cout << "Hello World!\n";
// 	return  0;
// }


// constructors
// 			invokes at the time of creation of the instance.

//          helps to cuntruct the instance of the class.

// destructors
// 			invokes when promagrame finshes it execution.
//          invokes when scope is ended.
//          using delete operator.   e.g. delete obj;

//          destructing the instance and freeing up the memory.

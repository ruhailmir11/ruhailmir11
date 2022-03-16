#include <iostream>
#include <string>

class Person {
	private:
		std::string name;
		int age;
	
	public:
		// Parameterized Constructor ...
		Person ( std::string n, int a ): name(n), age(a){};
		
		void print(){
			std::cout << "Hello I am " << name << ", I am " << age << " years old \n";
		}
};

int main(){
	Person p1("Foo", 16);
	Person p2("Bar", 19);
	
	p1.print();
	p2.print();
	
	return 0;
}
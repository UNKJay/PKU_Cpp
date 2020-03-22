#include <iostream>
using namespace std;
// 在此处补充你的代码

class Animal{

public:
    static int number;
    Animal();
    virtual ~Animal();          
    Animal(const Animal &a);
};

int Animal::number=0;

Animal::Animal() {++number;}
Animal::~Animal() {--number;}
Animal::Animal(const Animal &a) { ++number;}

class Dog : public Animal{
 
public:
	static int number;
    Dog();
    ~Dog();
    Dog(const Dog &d);
};

int Dog::number = 0;
Dog::Dog() {++number;}
Dog::~Dog() {--number;}
Dog::Dog(const Dog &d) {++number;}

class Cat:public Animal{

public:
	static int number;
    Cat();
    ~Cat();
    Cat(const Cat &c);
};

int Cat::number = 0;

Cat::Cat() {++number;}
Cat::~Cat() {--number;}
Cat::Cat(const Cat &c) {++number;}

void print() {
	cout << Animal::number << " animals in the zoo, " << Dog::number << " of them are dogs, " << Cat::number << " of them are cats" << endl;
}

int main() {
	print();
	Dog d1, d2;
	Cat c1;
	print();
	Dog* d3 = new Dog();
	Animal* c2 = new Cat;
	Cat* c3 = new Cat;
	print();
	delete c3;
	delete c2;
	delete d3;
	print();
}
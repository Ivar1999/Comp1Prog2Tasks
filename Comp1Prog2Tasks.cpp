#include <string>
#include <iostream>
#include <string>
using namespace std;


template <class Temp1, class Temp2>
class TemplateTask {
public:
	TemplateTask(Temp1 a, Temp2 b) : x{ a }, y{ b }
	{

	}
	void print() {
		cout << "Result = " << x << " " << y << endl;
	}

private:
	Temp1 x;
	Temp2 y;
};

class Animal {
public:
	string name;
	string place_of_birth;
	int age;

	Animal(string name_, string p_o_b, int age_, int A_ID);

	virtual void Speak() {
		cout << "\nWhat animal do you want to speak?\n";
	}
	Animal() {};

private:
	int Animal_ID;

};
Animal::Animal(string name_, string p_o_b, int age_, int A_ID) {
	name = name_;
	place_of_birth = p_o_b;
	age = age_;
	A_ID = Animal_ID;
}
class Dog : public Animal {
public:
	virtual void Speak() {
		cout << "\nWoof woof\n";
	}
	Dog(string name_, string p_o_b, int age_) {
		name = name_;
		place_of_birth = p_o_b;
		age = age_;

	}

};
class Cat : public Animal {
public:
	virtual void Speak() {
		cout << "\nMeow meow\n";
	}

	Cat(string name_, string p_o_b, int age_) {
		name = name_;
		place_of_birth = p_o_b;
		age = age_;

	}



};
class Bird : public Animal {
public:
	virtual void Speak() {
		cout << "\nTweet tweet\n";
	}
	Bird(string name_, string p_o_b, int age_) {
		name = name_;
		place_of_birth = p_o_b;
		age = age_;

	}

};
class Ball {
public:
	double pi = 3.14;
	double getVolume(void) {
		return radius * radius * radius * pi * 4 / 3;
	}
	void setRadius(double rad) {
		radius = rad;
	}
	Ball operator+(const Ball& b) { // Adding operator for Ball class
		Ball ball;
		ball.radius = this->radius + b.radius;

		return ball;
	}

private:
	double radius;

	// Radius of ball
	//double diameter = radius * 2; // Diameter of ball
};
void Task1();
void Task1() {

	Cat cat1("Pfill", "Havanna", 15);
	cat1.Speak();

	Bird bird1("Birdy", "Zoo", 3);
	bird1.Speak();

	Dog dog1("Minty ", "England ", 8);
	cout << "\nThis dogs info is : \n" << "Name: " << dog1.name << "Place of birth: " << dog1.place_of_birth << "Age: " << dog1.age << endl;
	dog1.Speak();


	//Animal dog("Dog", "Dog birthplace", 0, 1234);
	//dog.Speak();


}
void Task2();
void Task2() {
	double volume = 0.0;
	Ball Ball1;
	Ball Ball2;
	Ball Ball3;
	Ball1.setRadius(4.0);
	Ball2.setRadius(5.0);
	volume = Ball1.getVolume();
	cout << "Volume of Ball1 = " << volume << endl;

	volume = Ball2.getVolume();
	cout << "Volume of Ball2 = " << volume << endl;

	Ball3 = Ball1 + Ball2; // We are adding ball1 radius and ball2 radius together for ball3 radius

	volume = Ball3.getVolume();
	cout << "Volume of Ball3 = " << volume << endl;

}
void Task3();
void Task3() {
	TemplateTask<string, int> obj1{ "Ivar", 21 };
	obj1.print();
}



int main() {
	Task1();
	system("pause");
	Task2();
	system("pause");
	Task3();
	system("pause");

	return 0;
}


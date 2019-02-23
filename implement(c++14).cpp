#include<iostream>
using namespace std;
class Shape {
    public:
	int length;
	int breadth;
	float area;
	void setParameter () {
		int length, breadth;
		cout<<"Enter the length and the breadth: "<<endl;
		cin>>length>>breadth;
		this->length=length;
		this->breadth=breadth;
	}
	void displayParameter (){
		cout<<"Length: "<<length;
		cout<<"Breadth: "<<breadth;
	}
	void draw(){
		cout<<"Drawing the Shape: "<<endl;
	}
	void calculateArea(){
		area=length*breadth;
		cout<<"Area is : "<<area;
	}	
};
class Rectangle : public Shape {
	public:
	Rectangle() {
		length=0;
		breadth=0;
		}
	void draw(){
		cout<<"Drawing the shape: "<<endl;
		cout<<" ---- "<<endl;
		cout<<"|    |"<<endl;
		cout<<" ---- "<<endl;
	}
};
class Circle : public Shape {
	int radius;
	float pi=3.14;
	public:
	Circle(){
		radius=0;
	}
	void setParameter () {
		int radius;
		float pi=3.14;
		cout<<"Enter the radius: "<<endl;
		cin>>radius;
		this->radius=radius;
		this->pi=pi;
		}
		void displayParameter (){
		cout<<"Radius: "<<radius;
		}
		void draw(){
		cout<<"Drawing the Shape: "<<endl;
		cout<<" ----- "<<endl;
		cout<<"/     \\"<<endl;
		cout<<"|     |"<<endl;
		cout<<"\\    /"<<endl;
		cout<<" ----- "<<endl;
		}
		void calculateArea(){
			area=radius*radius*pi;
			cout<<"Area is: "<<area;
		}
};
int main(){
    Shape *shape;
	cout<<"Specify what you would like to draw: "<<endl;
	cout<<"R for rectangle."<<endl;
	cout<<"C for circle."<<endl;
	char choice;
	cin>>choice;
	switch (choice){
		case 'R':
		case 'r':
			shape= new Rectangle();
			break;
		case 'C': 
		case 'c':
			shape= new Circle();
			break;
		
	}
	shape->setParameter();
	shape->displayParameter();
	shape->calculateArea();
	shape->draw();
	return 0;
}	
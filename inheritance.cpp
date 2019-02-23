#include<iostream.h> 
//GO HOME AND RUN THIS ON TURBO C YOU DIPPER
class Furniture {
	private:
	int len;
	int wid;
	char color[13];
	void accept() {
		cout<<"Enter the length: ";
		cin>>len;
		cout<<"Enter the color: ";
		cin>>color;
		cout<<"enter the width: ";
		cin>>wid;
		}
	void display() {
		cout<<"Color: "<<color<<endl;
		cout<<"Width: "<<wid<<endl;
		cout<<"Length: "<<len<<endl;
		cout<<"Number of shelves: "<<shelf_no<<endl;
	}
};
class bookshelf : public Furniture {
	private:
	int shelf_no;
};
class chair : public furniture {
	private:
	int leg_no;
};
int main() {
	bookshelf b1;
	chair c1;
	b1.accept();
	b1.display();
	c1.accept();
	c1.display();
	return 0;
}
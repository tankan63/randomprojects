#include<iostream.h>
class oload {
 private:
 int a ;
 int b ;
 public:
 void operator -();
 void accept(int, int);
 void print();
};
void oload::operator -() {
 a=-a;
 b=-b;
}
void oload::accept(int x, int y) {
 a=x;
 b=y;
}
void oload::print() {
 cout<<"a= "<<a<<endl;
 cout<<"b= "<<b<<endl;
}
int main() {
 oload h;
 h.accept(37, -29);
 h.print();
 -h;
 h.print();
 return 0;
}


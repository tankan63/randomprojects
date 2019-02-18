#include<iostream.h>
class Test {
public:
 Test() {
  cout<<"Constructor invoked."<<endl;
  }
 ~Test() {
  cout<<"Destructor Invoked."<<endl;
  }
 };
Test obj1;
int main () {
 cout<<"Main() Begins."<<endl;
 Test obj2;
 {
  cout<<"Inner block begins."<<endl;
  Test obj3;
  cout<<"Inner block ends."<<endl;
  }
  cout<<"Main() ends."<<endl;
  return 0; //code block ends
  }
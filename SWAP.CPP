#include<stdio.h>
#include<iostream.h>
void swap(int, int);
class functionCall {
 int n1, n2;
 public:
 void accept();
};
void functionCall::accept() {
 cout<<"Input two numbers: "<<endl;
 cin>>n1;
 cin>>n2;
 swap(n1, n2);
 cout<<n1<<" "<<n2<<endl;
}
void swap (int n1, int n2) {
 int temp;
 temp=n1;
 n1=n2;
 n2=temp;
}
int main() {
 functionCall f1;
 f1.accept();
 return 0;
}
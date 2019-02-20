//call to reference by pointers
#include<stdio.h>
#include<iostream.h>
void swap(int *, int *);
int main() {
 int n1, n2;
 cout<<"Enter the two numbers: "<<endl;
 cin>>n1;
 cin>>n2;
 swap(&n1, &n2);
 cout<<n1<<" "<<n2<<endl;
 return 0;
 }
void swap(int *ptr1, int *ptr2) {
 int temp;
 temp=*ptr1;
 *ptr1=*ptr2;
 *ptr2=temp;
 cout<<*ptr1<<" "<<*ptr2<<endl;
}
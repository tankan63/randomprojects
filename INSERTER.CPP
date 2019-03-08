#include<iostream.h>
int main() {
 int i=10;
 int *iptr= &i;
 char cptr[]= "string";
 cout<<"iptr= "<<iptr<<endl;
 cout<<"cptr= "<<cptr<<endl;
 cout<<"A= "<<('A'+i-10)<<endl;
 cout<<"Char A is: "<<(char) ('A'+i-10)<<endl;
 cout<<"cptr address= "<<(void *)cptr<<endl;
 return 0;
 }
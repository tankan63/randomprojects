#include<iostream.h>
#include<cstream.h>
class String {
 private:
 char *str;
 int check() {
  if (str==NULL)
	return 0;
  else
	return 1;
  }
 public:
 String() {
  str=0;
  }
 String(char *instring) {
  str = new char[strlen(instring)+1];
  strcpy(str, instring);
 }
 void replace( char search, char repl) {
  if (check()==0) {
   throw "NULL Pointer exception";
  }
  int counter;
  for (counter=0; str[counter]!='\0'; counter++) {
   if (str[counter]==search) {
    str[counter]=repl;
   }
  }
 }
 void display() {
  cout<<str;
  }
 };
int main() {
 String obj;
 try {
  obj.replace('+',' ');
  obj.display();
  }
 catch(char *message){
  cout<<"exception: "<<message<<endl;
  }
 return 0;
}


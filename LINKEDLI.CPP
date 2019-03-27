#include<iostream.h>
#include<string.h>
struct Node {
 string name;
 Node *NEXT;
 Node (const string &s, Node * n = NULL): name (s), NEXT (n);
 }
class List {
 private:
 Node *START,
      *CURRENT,
      *PRECEDE;
 public:
 List();
 void addnode(const string &s);
 void traverse();
 };

List::List() {
 START=CURRENT=PRECEDE=NULL;
 }
void List::addnode(const string &s) {
 if (START==NULL || s<=START->name) {
  START= new Node(n, START);
  return;
 }
 Node *prev, *curr;
 for (prev=curr=START; curr!=NULL && s>curr->name; prev=curr, curr=curr->NEXT)
 { //empty body of the loop
 }
 Node *n= new Node (s, curr); //NEW Node's next points to current
 prev->NEXT = n;
 }
void List::traverse() {
 for (Node *temp = START; temp!=NULL; temp=temp->NEXT) {
  cout<<temp->name<<endl;
 }
}
int main () {
 List obj;
 char ch;
 while (1) {
  cout<<endl<<"1. Enter Customer's Names. "<<endl;
  cout<<"2. Display existing records. "<<endl;
  cout<<"3. Exit the program. "<<endl<<endl;;
  cout<<"\nEnter your choice: "<<endl;
  cin>>ch;
  switch (ch) {
   case '1':
	{
	 cout <<endl<<"Enter the name: ";
	 string s;
	 cin.ignore();
	 getline(cin, s);
	 obj.addnode();
	}
	break;
   case '2':
	obj.traverse();
	break;
   case '3':
	exit(0);
	break;
   default:
	cout<<"Enter a valid choice. "<<endl;
	break;
   }
  }
 return 0;
}







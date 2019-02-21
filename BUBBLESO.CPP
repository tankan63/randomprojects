#include<iostream.h> //bubble sort algorithm
#include<stdio.h>
class List {
public:
 int arr[20];
 int n;

 void read() {
  while (1)
  {
   cout<<"\nEnter the number of items in the array\n";
   cin>>n;

   if (n>0 && n<=20)
    break;
   else
    cout<<"\nArray should have between 1 and 20 items only\n";
   }
   cout<<"\n";
   cout<<"------------\n";
   cout<<"Enter array elements:  \n";
   cout<<"------------\n";

   for (int i=0; i<n; i++) {
    cout<<"<"<<i+1<<"> ";
    cin>>arr[i];
    }
  }
void BubbleSort() {
 for (int i=1; i<n; i++) {
  for (int j=0; j<n; j++) {
   if (arr[j]>arr[j]+1) {
    int temp;
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
   }
  }
 }
void display() {
 cout<<endl;
 cout<<"----------\n";
 cout<<"Sorted Array Elements: \n";
 cout<<"----------\n";
  for (int j=0; j<n; j++) {
   cout<<arr[j]<<endl;
   }
   cout<<"Press return to exit.";
   getchar();
  }
 }

 main() {
 List myList;
 myList.read();
 myList.BubbleSort();
 myList.display();
}





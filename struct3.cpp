 //martin
#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
       int contact;
};
 struct Order{
 	int date;
 	int day;
 	int month;
 	int year;
 };
 
 struct Item{
 	int id;
 	char itemname[20];
 	double price;
 };
 int main ()
 {
 	customer cs[3];
 	int c;
 	cout<<"Enter 3 Customer:\n";
 	for(c=0; c<5; c++)
	 {
	 	cout<<"CUSTOMER INFORMATION:"<<(c+1)<<endl;
	 	cout << "Last Name: ";
    cin.getline(cs.Name.lastName, 29);
    cout << "first Name: ";
    cin.getline(cs.Name.firstName, 29);
    cout<<"Contact No.:";
    cin>> cs.Name.contact;
    cout<<"Order Date:"<<endl;
    cout<<"Date:\n";
    cin>>cs.order.date;
    cout<<"Day:\n";
    cin>>cs.day.Order;
    cout<<"Month:\n";
    
	 }
	 
 }

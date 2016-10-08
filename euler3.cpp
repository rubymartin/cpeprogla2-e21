#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream f("input.text")
	
	int a, b,total=0;
	
	while(f>>b){
		
		for (int a=0;a<b;a++){
			if(a%3==0 || a%5==0){
				total=total + x;
			}
		}
	}
	cout<<total;
}

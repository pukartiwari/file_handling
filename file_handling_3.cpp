#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream two;
	two.open("D:stack.txt",ios::in);
	if(!two)
	{
		cout<<"file doesnot exist";
	}
	else
	{
		string b;
		if(two.is_open()){
			while(!two.eof()){
				getline(two,b);
				cout<<b;
			}
		}	
		two.close();
	}
}

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream a;
	a.open("D:stack.txt",ios::out);
	if(!a) 
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
a<<"Learning File handling";    
a.close(); 
}   
return 0;
}


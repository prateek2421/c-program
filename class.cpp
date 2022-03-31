#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[20];
	int age;
	char gender;
	public://access specifier
	void input()
	{
		cout<<"enter rollno:";
		cin>>rollno;
		cout<<"enter name:";
		cin>>name;
		cout<<"enter your age in years:";
		cin>>age;
		cout<<"enter your gender(m/f):";
		cin>>gender;
	}
	void output()
	{
		cout<<"the details are:";
		cout<<rollno<<endl<<name<<endl<<age<<endl<<gender;
	}
}s1,s2,s3,s4;

int main()
{
	s1.input();
	s2.input();
	s1.output();
	s2.output();
	return 0;
}
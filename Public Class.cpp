#include<iostream>
using namespace std;
class Student
{
	private: // We cant access outside the class
	int dob;
	string fname;
	public: // we can access outside the class
	string name,rollno,phone,college;
	int bg;
	float per;
	Student(string n,string r,string p,string c,int b,float pe)
	{
		name=n;
		rollno=r;
		phone=p;
		college=c;
		bg=b;
		per=pe;
	}
	void display(){
		cout<<name<<" "<<rollno<<" "<<phone<<" "<<college<<" "<<bg<<" "<<per<<endl;
	}
};
int main()
{
	Student s1("Chaitanya","22mh1a05j4","9392550588","ACOE",0,8.9);
	s1.display();
	return 0;
}

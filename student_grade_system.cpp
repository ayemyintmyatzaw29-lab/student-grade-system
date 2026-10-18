#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"====Student Grade System===="<<endl;
	int m1,m2,m3,m4,m5;
	string name;
	cout<<"Enter student name: ";
	getline(cin,name);
	cout<<"Enter Subject 1: ";
	cin>>m1;
	cout<<"Enter Subject 2: ";
	cin>>m2;
	cout<<"Enter Subject 3: ";
	cin>>m3;
	cout<<"Enter Subject 4: ";
	cin>>m4;
	cout<<"Enter Subject 5: ";
	cin>>m5;
	int total;
	double ava;
	total = m1+m2+m3+m4+m5;
	ava = total / 5.0;
 	cout<<"----Result-----"<<endl;
 	cout<<"Name	:"<<name<<endl;
 	cout<<"Total	:"<<total<<endl;
 	cout<<"Average	:"<<ava<<endl;
 	if (ava >= 80)
    cout << "Grade : A" <<endl;
	else if (ava >= 70)
    cout << "Grade : B" <<endl;
	else if (ava >= 60)
    cout << "Grade : C" <<endl;
	else if (ava >= 50)
    cout << "Grade : D" <<endl;
	else
    cout << "Grade : F" <<endl;
	if(m1>=50 && m2>=50 && m3>=50 && m4>=50 && m5>=50)
	cout<<"Result	:Pass"<<endl;
	else
	cout<<"Result	:Fail"<<endl;
	return 0;
}
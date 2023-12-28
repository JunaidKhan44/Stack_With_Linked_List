#include<iostream>
#include<string>
using namespace std;
class mall;
mall* first;
class mall
{
private:
	int id;
	int price;
public:
	mall * nextadd;
	void push()
	{
		mall * smt=new mall;
		cout<<"Enter id "<<endl;
		cin>>smt->id;
		cout<<"Enter price"<<endl;
		cin>>smt->price;
		smt->nextadd=first;
		first=smt;
	}
	void pop()
	{

		if (first==NULL)
		{
			cout<<"Nothing to delete "<<endl;
		}
		else
		{
			first=first->nextadd;
		}
	}
	void display()
	{
		if (first==NULL)
		{
			cout<<"Empty"<<endl;
		}
		else
		{
			mall * smt=first;
			while (smt!=NULL)
			{
				cout<<"Id is "<<smt->id<<endl;
				cout<<"Price is "<<smt->price<<endl;
				smt=smt->nextadd;
			}
		}

	}

};
void main()
{int ch;
mall m;
	do
	{
		cout<<"1 for push\n2 for pop\n3 for Display\n4 for Exit"<<endl;
		cin>>ch;
		switch (ch)
		{
		case 1:
			m.push();
			break;
		case 2:
			m.pop();
			break;
		case 3:
			m.display();
			break;
		case 4:
			cout<<"The End";
			break;
		default:
			break;
		}

	} while (ch!=4);



}
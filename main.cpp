/*********************************************************************************************
			We have a queue that represents Our Garage
			We only can add Any car in rear of queue or in front but can't add any car in center of queue
			we only can exit any car from front of queue
***********************************************************************************************/
#include<iostream>
#include"queue.h"
#include"car.h"
#include"string"
using namespace std;

void menue()
{
	system("cls");
	cout << "====================================== welcome ==========================="<<endl;
	cout << "===================================== Main Menu ==========================="<<endl;
	cout << "1. Enter a car"<<endl;
	cout << "2. Delete a car" << endl;
	cout << "3. Next Car" << endl;
	cout << "4. Size of garage" << endl;
	cout << "5. Display all car in garage" << endl;
	cout << "6. Exit" << endl;
	cout << "\nchoose a number ";
}

void enterNewCar(string &id,string &owner, int &h,int &m){
	system("cls");
	cout << "Please Enter Car ID: ";
	cin >> id;
	cout << "Please Enter Car owner: ";
	cin >> owner;
	cout << "Please Enter Time in hours: ";
	cin >> h;
	cout << "Please Enter Time in mints: ";
	cin >> m;
	cout<<"**********************************"<<endl;
}

int backOrExit()
{
	int num;
	cout << endl;
	cout << "0. to back " << endl;
	cout << "6. to exit" << endl;
	cout << "\nchoose a number ";
	cin>>num;
	if (num == 0){
		return num;
	}
	else if (num == 6){
		system("exit");
	}
}


int main() {
	string user, pass;
	int size, takeNo;
	cout << "Username : ";
	cin >> user;
	cout << "Password : ";
	cin >> pass;
	if (user == "admin" && pass == "admin")
	{
		cout << "Kindly Enter Garage Size: ";
		cin >> size;
	}
	else
	{
		size = 4;
	}
	
	system("cls");
	queue Q1(size);
	takeNo=0;
	while (takeNo != 6)
	{
		menue();
		cin >> takeNo;
		string owner, id;
		int h, m;
		switch (takeNo)
		{
			case 1:		//Enter a car
				enterNewCar(id,owner,h,m);
				Q1.enQueue(id,owner,h,m);
				takeNo = backOrExit();
				break;
			case 2:		//Delete a car
				system("cls");
				if (!Q1.garageIsEmpty())
				{
					cout<<"This Car is Removed. "<<endl;
					Q1.deQueue(id,owner,h,m);
					cout<<"******************************"<<endl;
					cout<<"Car ID: "<<id<<endl;
					cout<<"Car Owner: "<<owner<<endl;
					cout<<"Arrived Time: "<<h<<":"<<m<<endl;
					cout<<"******************************"<<endl;
					
				}else{
					cout<<"";
				}
				takeNo = backOrExit();
				break;
			case 3:		//Next car
				system("cls");
				Q1.nextCar();
				takeNo = backOrExit();
				break;
			case 4:		//Size of garage
				system("cls");
				Q1.sizeQueue();
				takeNo = backOrExit();
				break;
			case 5:		//Display all car in garage
				system("cls");
				Q1.printAllCar();
				takeNo = backOrExit();
				break;
			default:
				cout<<"You Entered Invailed Number: "<<endl;
				menue();
				cin >> takeNo;
				break;
		}
		system("exit");
	}
	return 0;
}

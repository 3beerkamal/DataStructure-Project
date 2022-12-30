#pragma once
#include"string"
using namespace std;

class car{
	private:
		string carId;
		string ownerName;
		int hour;
		int mints;
	public:
		car();
		void setCarId(string);
		void setOwnerName(string);
		void setHour(int);
		void setMints(int);
		string getCarId();
		string getOwnerName();
		int getHour();
		int getMints();
		void displayCar();
};

#pragma once
#include"car.h"
using namespace std;

class queue
{
	private:
		int front;
		int rear;
		int NumberOfCars;
		int maxSize;
		car *garage;
    public:
		queue(int size);
		void enQueue(string,string,int,int);     	     //Enter Car In Queue
		void deQueue(string&,string&,int&,int&);         //Exit car from queue
		void printAllCar();								 // Display all car in garage
		bool garageIsEmpty();           				 //Check Garage is Empty
		bool garageIsFull();							 //Check Garage is Full
		void nextCar();			    				 	 //Print The Next Car (UpComing Car)
		void sizeQueue();           				     //Print the Current Number Of Cars in Garage
		int getFront();
		int getRear();
		int length();

};

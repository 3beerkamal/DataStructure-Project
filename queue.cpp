#include<iostream>
#include"queue.h"
#include"car.h"
#include"string"

using namespace std;

//=========================== Overloaded Constructor ===============================//

queue::queue(int size)
{
    front = 0;
    rear = -1;
    NumberOfCars = 0;
    maxSize = size;
    garage = new car[size];
}

//========================== Check Queue is Empty or not ============================//

bool queue::garageIsEmpty()
{
    return (NumberOfCars == 0);
}

//========================== Check Queue is Full or not ============================//

bool queue::garageIsFull()
{
    return (NumberOfCars == maxSize);
}

//===================== Enter Cars in Queue (enQueue Function) =======================//

void queue::enQueue(string carId, string carOnwer, int hour, int mints)
{
    if (garageIsFull()) {
        cout << "Sorry,The garage is full" << endl;
    }
    else {
        rear = (rear + 1) % maxSize;
        garage[rear].setCarId(carId);
        garage[rear].setOwnerName(carOnwer);
        garage[rear].setHour(hour);
        garage[rear].setMints(mints);
        NumberOfCars++;
    }
}

//================= Exit & Remove Cars From Queue (enQueue Function) ================//

void queue::deQueue(string &carId, string &carOnwer, int &hours, int &mints)
{
    if (garageIsEmpty()) {
        cout << "The garage is already empty" << endl;
    }
    else {
        carId = garage[front].getCarId();
        carOnwer = garage[front].getOwnerName();
        hours = garage[front].getHour();
        mints = garage[front].getMints();
        front = (front + 1) % maxSize;
        NumberOfCars--;
    }
}

//================================ Print upComing Car ============================//

void queue::nextCar()
{
    if (garageIsEmpty()){
        cout << "No Car enter yet!";
    }
    else{
    	garage[front].displayCar();
    }
}

//============================== Number Of Current Cars ==========================//

void queue::sizeQueue()
{
    if (garageIsFull())
    {
        cout << "Your garage is full" << endl;
        cout << "Number Of Cars: " << NumberOfCars << endl;
    }
    else if (garageIsEmpty())
    {
        cout << "Your garage is empty" << endl;
    }
    else {
        cout << "Number Of Cars: " << NumberOfCars << endl;
    }
}

//================================== Return front ===========================//

int queue::getFront() {
    return front;
}

//================================== Return Rear ===========================//

int queue::getRear() {
    return rear;
}

//================================== Return size ===========================//

int queue::length()
{
    return NumberOfCars;
}

//======================= Display all car in garage =======================//

void queue::printAllCar() {
    if (garageIsEmpty())
    {
        cout << "The garage is empty";
    }
//    else
//    {
//        int i = 0;
//        do
//        {
//            garage[i].displayCar();
//            cout<<endl;
//            i = (i + 1) % maxSize;
//        } while (i != rear + 1);
//    }

    else
    {
    	for(int i=0 ; i<NumberOfCars ; i++){
    		garage[i].displayCar();
    		cout<<endl;
		}
	}
    
}

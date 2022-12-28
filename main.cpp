/*********************************************************************************************
We have a queue that represents Our Garage
We only can add Any car in rear of queue or in front but can't add any car in center of queue
we only can exit any car from front of queue
***********************************************************************************************/
#include<iostream>
#include"queue.h"
#include"string"
using namespace std;

template<class T> DisplayCars(queue q, int size) //print
{
    if (q.garageIsEmpty())
    {
        cout<<"No car in your garage"<<endl;
    }
    else
    {
    	T car;
    	for(int i=0 ; i<size ; i++){
    		q.deQueue(car);
    		cout<<"Car "<<i<<"= "<<car<<endl;
		}
	}
}

int main(int argc, char** argv) {
	int size;
	cout<<"Kindly Enter Garage Size: ";
	cin>>size;
	queue Q1(size);
	for(int i=0 ; i<size ; i++){
		string car;
		cout<<"Please Enter NextCar: ";
		cin>>car;
		Q1.enQueue(car);
	}
	cout<<"Your front Index before deQueue: "<<Q1.getFront()<<endl;
	cout<<"Your rear Index before deQueue: "<<Q1.getRear()<<endl;
	DisplayCars<string> (Q1,size-2);
	Q1.sizeQueue();
	
	return 0;
}

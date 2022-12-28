#include<iostream>
#include"queue.h"
#include"string"
using namespace std;

//=========================== Overloaded Constructor ===============================//

queue::queue(int size)
{
    front = 0;
    rear = -1;
    NumberOfCars = 0;
    maxSize = size;
    garage = new string[size];
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

void queue::enQueue(string newCar) 
{
    if(garageIsFull()){
        cout<<"Sorry,The garage is full"<<endl;
    }
    else{
        rear = (rear+1)%maxSize;
        garage[rear] = newCar;
        NumberOfCars++;
    }
}

//================= Exit & Remove Cars From Queue (enQueue Function) ================//

void queue::deQueue(string &car)  
{
    if(garageIsEmpty()){
        cout<<"The garage is already empty"<<endl;
    }
    else{
     	car = garage[front];
		front = (front+1)%maxSize;
		NumberOfCars--;   
    }
}

//template<class T> void queue<T>::CarLeave(int pos) //dequeue with position
//{
//    if(garageIsEmpty())
//    {
//        cout<<"The garage is already empty"<<endl;
//    }
//    else
//    {
//        for (int i = pos-1; i < garageSpace; i++)
//        {
//            garage[i]=garage[i+1];
//        }
//        carNo--;
//    }
//}

//================================ Print upComing Car ============================//

string queue::nextCar() 
{
    return garage[front];
}

//============================== Number Of Current Cars ==========================//

void queue::sizeQueue()
{
    if(garageIsFull())
    {
        cout<<"Your garage is full"<<endl;
    }
    else if(garageIsEmpty())
    {
    	cout<<"Your garage is empty"<<endl;
    }else {
    	cout<<"Number Of Cars: "<<NumberOfCars<<endl;
	}
} 

//================================== Return front ===========================//

int queue::getFront(){
	return front;
}

//================================== Return Rear ===========================//

int queue::getRear(){
	return rear;
}


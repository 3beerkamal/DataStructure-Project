#include"car.h"
#include"string"
#include<iostream>
#include"car.h"
using namespace std;

car::car(){
	hour = 00;
	mints = 00;
} 
void car::setCarId(string id){
	carId = id;
}

void car::setOwnerName(string name){
	ownerName = name;
}

void car::setHour(int h){
	hour = h;
}

void car::setMints(int m){
	mints = m;
}

string car::getCarId(){
	return carId;
}

string car::getOwnerName(){
	return ownerName;
}

int car::getHour(){
	return hour;
}

int car::getMints(){
	return mints;
}

void car::displayCar(){
	cout<<"Car ID: "<<getCarId()<<endl;
	cout<<"Car Owner: "<<getOwnerName()<<endl;
	cout<<"Arrived Time: "<<getHour()<<":"<<getMints()<<endl;
}

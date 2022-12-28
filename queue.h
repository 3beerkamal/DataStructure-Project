using namespace std;

class queue{
	private:
		int front; 
		int rear;
		int NumberOfCars;
		int maxSize; 
		string *garage;
	public:
		queue(int size);
		void enQueue(string newCar);     //Enter Car In Queue
		void deQueue(string &car);       //Exit car from queue
		void CarLeave(int pos);     
		bool garageIsEmpty();            //Check Garage is Empty
		bool garageIsFull();			 //Check Garage is Full
		string nextCar();			     	 //Print The Next Car (UpComing Car)
		void sizeQueue();                //Print the Current Number Of Cars in Garage
		int getFront();
		int getRear();				 
		void DisplayCar();				 //List All Cars in Garage

};

#include<iostream>
#include<string>
using namespace std;
// private -> license plate
// public -> car brand, model, cost, year
// register car - delete - list - update info - exit
class Car {
	private:
		string carTag;
	public:
		string carBrand;
		string carModel;
		float carCost;
		int year;

		void setCarTag(string tag) {
			carTag = tag;
		}

		string getCarTag() {
			return carTag;
		}


		// listing function

		void list() {
			cout << "Car's Brand: " << carBrand << endl;
			cout << "Car's Model: " << carModel << endl;
			cout << "Car's Cost:  " << carCost << endl;
			cout << "Car's Model Year: " << year << endl;
		}

};

// standalone function to register a car

int regCar(Car series[], int numOfCar, Car c1) {
	series[numOfCar].carBrand = c1.carBrand;
	series[numOfCar].carModel = c1.carModel;
	series[numOfCar].carCost = c1.carCost;
	series[numOfCar].year = c1.year;
	series[numOfCar].setCarTag(c1.getCarTag());
	numOfCar++;
	return numOfCar;
	}


// standalone function to delete a car

int delCar(Car series[], int numOfCar, string carsTag) {
	for (int i = 0; i < numOfCar; i++) {
		if (series[i].getCarTag() == carsTag) { // verification
			for (int j = i; j < numOfCar - 1; j++) {
				series[j] = series[j + 1];
			}
			numOfCar--;
			system("cls");
			cout << "The Car Deleted Successfully" << endl;
			cout << "*************************************************************" << endl;
			return numOfCar;
		}
	}
	cout << "Car With the given tag not found!" << endl;
	return numOfCar;
}


// standalone function to update car information

void carUpdateInfo(Car series[], int numOfCar, string carsTag) {
	for (int i = 0; i < numOfCar; i++) {
		if (series[i].getCarTag() == carsTag) { // verification
			cout << "Car found successfully" << endl;
			cout << "Enter the new details" << endl;

			cout << "Car's Brand: " << endl;
			cin >> series[i].carBrand;
			cout << "Car's Model: " << endl;
			cin >> series[i].carModel;
			cout << "Car's Cost:  " << endl;
			cin >> series[i].carCost;
			cout << "Car's Model Year: " << endl;
			cin >> series[i].year;
			cout << "Car Information Updated :) " << endl;
			return;

			} else if(series[i].getCarTag() != carsTag) {
			cout << "Car With the Given Tag Not Found!!!" << endl;
		}
	}
}



int main() {
	int choice = 0;
	Car series[100];
	int numOfCar = 0;
	do {
		cout << "Welcome To Car Garage Interface" << endl;
		cout << "1-) Register a Car" << endl;
		cout << "2-) Delete a Car" << endl;
		cout << "3-) List Cars" << endl;
		cout << "4-) Edit data of a car" << endl;
		cout << "5-) Exit" << endl;
		cout << "Please Make a Choice" << endl;
		cin >> choice;

		if (choice == 1) {
			// car registration function
			Car c1;
			string carsTag;

			cout << "Enter the Car's Brand: " << endl;
			cin >> c1.carBrand;

			cout << "Enter the Car's Model: " << endl;
			cin >> c1.carModel;

			cout << "Enter the Car's Cost: " << endl;
			cin >> c1.carCost;

			cout << "Enter the Car's Tag: " << endl;
			cin >> carsTag;

			cout << "Enter the Car's Date" << endl;
			cin >> c1.year;

			c1.setCarTag(carsTag);
			numOfCar = regCar(series, numOfCar, c1);
			system("cls");
			cout << "Car Registered Successfully :) " << endl;
			cout << "*************************************************************" << endl;


		}
		else if (choice == 2) {
			// car deletion function

			string deletedCars;
			cout << "Which Car Do You Want To Delete ?" << endl;
			cin >> deletedCars;
			numOfCar = delCar(series, numOfCar, deletedCars);
			
			

		}
		else if (choice == 3) {
			// car listing function
			for (int i = 0; i < numOfCar; i++) {
				series[i].list();
				cout << "----------------------------------------------------------" << endl;


			}
		}
		else if (choice == 4) {
			// car information editing function
			string carsTag;
			cout << "Enter the Tag of the Car You Want to Update: " << endl;
			cin >> carsTag;
			carUpdateInfo(series, numOfCar, carsTag);
			system("cls");
			cout << "Updated Successfully!" << endl;
			cout << "*************************************************************" << endl;


		}
		else if(choice == 5) {
			cout << "Exiting..." << endl;
		}



	} while (choice != 5);
		
	return 0;
}
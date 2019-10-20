/*
 * Project: Lab1
 * File: Source.cpp
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the main source file for the project.
 */


#include <iostream>
#include "Vehicle.h"
#include "PassengerVehicle.h"
#include "CargoVehicle.h"
#include "CrewHauler.h"

using namespace std;

/*
 * Function: main
 * Description: the starting point of the program, which tests the vehicle,
 * passengerVehicle, and CargoVehicle functionality
 */


//Put into seperate functions
int main()
{
	//create vehicle 
	Vehicle vehicle1(2007, "Toyota", "Sienna");
	//Test vehicle class
	cout << "Vehicle constructor: PASSED" << endl;

	Vehicle vehicle3(2007, "Toyota", "Sienna");
	//Test ==operator correct data
	if (vehicle1 == vehicle3)
		cout << "==operator with correct data: PASSED" << endl;
	else
		cout << "==operator with correct data: FAILED" << endl;



	//Test getBrandModelName
	string type = vehicle1.getBrandModelName();
	if (type == "Toyota", "Sienna")
		cout << "getBrandModelName: PASSED" << endl;
	else
		cout << "getBrandModelName: FAILED" << endl;
	//Test setModel with good data
	vehicle1.setModel("Camry");
	type = vehicle1.getBrandModelName();
	if (type == "Toyota", "Camry")
		cout << "setModel with good data: PASSED" << endl;
	else
		cout << "setModel with happy data: FAILED" << endl;

	//Test setModel with long data
	vehicle1.setModel("01234567890123456789012345678901234567890");
	type = vehicle1.getBrandModelName();
	if (type == "Toyota", "012345678901234567890123456789")
		cout << "setModel with long data: PASSED" << endl;
	else
		cout << "setModel with long data: FAILED" << endl;
	vehicle1.setModel("Camry");
	//Test setBrand with good data
	vehicle1.setBrand("Lexus");
	type = vehicle1.getBrandModelName();
	if (type == "Lexus", "Camry")
		cout << "setModel with good data: PASSED" << endl;
	else
		cout << "setModel with happy data: FAILED" << endl;

	//Test setBrand with long data
	vehicle1.setModel("01234567890123456789012345678901234567890");
	type = vehicle1.getBrandModelName();
	if (type == "Lexus", "012345678901234567890123456789")
		cout << "setModel with long data: PASSED" << endl;
	else
		cout << "setModel with long data: FAILED" << endl;

	//Test Vehicle setBrand w/ blank
	try
	{
		vehicle1.setBrand("");
	}
	catch (invalid_argument ia)
	{
		cout << "setBrand with blank data: PASSED" << endl;
	}
	type = vehicle1.getBrandModelName();
	if (type == "")
		cout << "setBrand with blank data: FAILED" << endl;


	//Test Vehicle setModel w/ blank
	try
	{
		vehicle1.setModel("");
	}
	catch (invalid_argument ia)
	{
		cout << "setModel with blank data: PASSED" << endl;
	}
	type = vehicle1.getBrandModelName();
	if (type == "")
		cout << "setBrand with blank data: FAILED" << endl;

	//Test getYear
	int type1 = vehicle1.getYear();
	if (type1 = 2007)
		cout << "getYear: PASSED" << endl;
	else
		cout << "getYear: FAILED" << endl;
	//Test addYear with good data
	vehicle1.addYear(2012);
	type1 = vehicle1.getYear();
	if (type1 == 2012)
		cout << "addYear with good data: PASSED" << endl;
	else
		cout << "addYear with good data: FAILED" << endl;
	//Vehicle getYear w/ <1800

	try
	{
		vehicle1.addYear(1800);
	}
	catch (invalid_argument ia)
	{
		cout << "getYear under 1886: PASSED" << endl;
	}
	type1 = vehicle1.getYear();
	if (type1 == 1800)
		cout << "getYear under 1886: FAILED" << endl;

	//Test operator< with correct data
	Vehicle vehicle2(2000, "Honda", "Civic");
	if (vehicle2 < vehicle1) //2000 < 2007
		cout << "operator< with correct data: PASSED" << endl;
	else
		cout << "operator< with correct data: FAILED" << endl;
	//test operator< with reversed data
	if (vehicle1 < vehicle2)
		cout << "operator< with reversed data: FAILED" << endl;
	else
		cout << "operator< with reversed data: PASSED" << endl;
	//test operator< with equal data
	vehicle2.addYear(2007);
	if (vehicle1 < vehicle2)
		cout << "operator< with equal data: FAILED" << endl;
	else
		cout << "operator< with equal data: PASSED" << endl;

	//Test operator<= with correct data
	if (vehicle2 <= vehicle1) //2000 <= 2007
		cout << "operator<= with correct data: PASSED" << endl;
	else
		cout << "operator<= with correct data: FAILED" << endl;
	//test operator<= with reversed data
	if (vehicle1 <= vehicle2)
		cout << "operator<= with reversed data: FAILED" << endl;
	else
		cout << "operator<= with reversed data: PASSED" << endl;
	//test operator<= with equal data
	vehicle2.addYear(2007);
	if (vehicle1 <= vehicle2)
		cout << "operator<= with equal data: FAILED" << endl;
	else
		cout << "operator<= with equal data: PASSED" << endl;

	//Test operator> with correct data
	if (vehicle1 > vehicle2) //2007 > 2000
		cout << "operator> with correct data: PASSED" << endl;
	else
		cout << "operator> with correct data: FAILED" << endl;
	//test operator> with reversed data
	if (vehicle2 > vehicle1)
		cout << "operator> with reversed data: FAILED" << endl;
	else
		cout << "operator> with reversed data: PASSED" << endl;
	//test operator> with equal data
	vehicle2.addYear(2007);
	if (vehicle2 > vehicle1)
		cout << "operator> with equal data: FAILED" << endl;
	else
		cout << "operator> with equal data: PASSED" << endl;

	//Test operator>= with correct data
	if (vehicle1 >= vehicle2) //2007 >= 2000
		cout << "operator>= with correct data: PASSED" << endl;
	else
		cout << "operator>= with correct data: FAILED" << endl;
	//test operator>= with reversed data
	if (vehicle2 >= vehicle1)
		cout << "operator>= with reversed data: FAILED" << endl;
	else
		cout << "operator>= with reversed data: PASSED" << endl;
	//test operator>= with equal data
	vehicle2.addYear(2007);
	if (vehicle2 >= vehicle1)
		cout << "operator>= with equal data: FAILED" << endl;
	else
		cout << "operator>= with equal data: PASSED" << endl;

	//Test !=operator correct data
	if (vehicle1 != vehicle2)
		cout << "!=operator with correct data: PASSED" << endl;
	else
		cout << "!=operator with correct data: FAILED" << endl;



	//Create PassengerVehicle
	PassengerVehicle PV(2010, "Ford", "Mustang", 5, 4);
	cout << "PassengerVehicle constructor: PASSED" << endl;

	//Test getSeats
	int seatNumber = PV.getSeats();
	if (seatNumber == 5)
		cout << "getSeats: PASSED" << endl;
	else
		cout << "getSeats: FAILED" << endl;
	//Test setSeats with good data
	PV.setSeats(2);
	seatNumber = PV.getSeats();
	if (seatNumber == 2)
		cout << "setSeats with good data: PASSED" << endl;
	else
		cout << "setSeats with good data: FAILED" << endl;
	//Test setSeats with smaller number
	try
	{
		PV.setSeats(-1);
	}
	catch (invalid_argument ia)
	{
		cout << "setSeats with smaller number: PASSED" << endl;
	}

	//Test setSeats with larger number
	try
	{
		PV.setSeats(100);
	}
	catch (invalid_argument ia)
	{
		cout << "setSeats with larger number: PASSED" << endl;
	}

	//Test getDoors
	int doorNumber = PV.getDoors();
	if (doorNumber == 4)
		cout << "getDoors: PASSED" << endl;
	else
		cout << "getDoors: FAILED" << endl;
	//Test setDoors with good data
	PV.setDoors(2);
	doorNumber = PV.getDoors();
	if (doorNumber == 2)
		cout << "setDoors with good data: PASSED" << endl;
	else
		cout << "setDoors with good data: FAILED" << endl;
	//Test setDoors with smaller number
	try
	{
		PV.setDoors(-1);
	}
	catch (invalid_argument ia)
	{
		cout << "setDoors with smaller number: PASSED" << endl;
	}
	//Test setDoors with larger number
		try
	{
		PV.setDoors(20);
	}
	catch (invalid_argument ia)
	{
		cout << "setDoors with larger number: PASSED" << endl;
	}
	//Create CargoVehicle
	CargoVehicle CV(2005, "Nissan", "Truck", 1000);
	cout << "CargoVehicle constructor: PASSED" << endl;
	//Test getCapacity
	int capacityNumber = CV.getCapacity();
	if (capacityNumber == 1000)
		cout << "getCapacity: PASSED" << endl;
	else
		cout << "getCapacity: FAILED" << endl;
	//Test setDoors with good data
	CV.setCapacity(800);
	capacityNumber = CV.getCapacity();
	if (capacityNumber == 800)
		cout << "setCapacity with good data: PASSED" << endl;
	else
		cout << "setCapacity with good data: FAILED" << endl;
	//Test setCapacity with smaller number
	try
	{
		CV.setCapacity(-100);
	}
	catch (invalid_argument ia)
	{
		cout << "setCapacity with smaller number: PASSED" << endl;
	}

	//Test setCapacity with bigger number
	try
	{
		CV.setCapacity(2000);
	}
	catch (invalid_argument ia)
	{
		cout << "setCapacity with larger number: PASSED" << endl;
	}
	//Create CrewHauler
	CrewHauler CH(2005, "Nissan", "Van", 900, 2, 3);
	cout << "CrewHauler constructor: PASSED" << endl;
	//end
	getchar();
}
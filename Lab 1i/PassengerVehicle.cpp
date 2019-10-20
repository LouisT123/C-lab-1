/*
 * Project: Lab1
 * File: PassengerVehicle.cpp
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the source file for the PassengerVehicle class.
 */

#include "Vehicle.h"
#include "PassengerVehicle.h"

#include <string>

using namespace std;

/*
* Function: constructor
* Description: creates a new PassengerVehicle object and sets the seats and doors,
*              passing the remaining data to the Vehicle
*              base constructors
* Input:
*			brand - vehicle brand
*			model - vehicle model
*			year - vehicle year
*			door: number of doors of a passenger vehicle
*			seat: number of seats of a passenger vehicle
*/
PassengerVehicle::PassengerVehicle(int year, string brand, string model, int seat, int door)
	: Vehicle(year, brand, model)
{
	//ERROR
	this->seats = seat;
	this->doors = door;
	//setDoors(doors);
	//setSeats(seats);
}

/*
* Function: getDoors
* Description: provides access to the number of doors in PassengerVehicle
* Output:
*     int - number of doors
*/
int PassengerVehicle::getDoors() const
{
	return doors;
}

/*
* Function: getSeats
* Description: provides access to the number of seats in PassengerVehicle
* Output:
*     int - number of seats
*/
int PassengerVehicle::getSeats() const
{
	return seats;
}

/*
* Function: setDoors
* Description: allows number of doors to be reset
* Input:
*    doors - doors of passenger vehicle
*/
void PassengerVehicle::setDoors(int doors)
{
	if (doors < 1 || doors > 10)
		throw invalid_argument("doors cannot be <1 or >10");
	this->doors = doors;
}


/*
* Function: setSeats
* Description: allows number of seats to be reset
* Input:
*    seat - seats of passenger vehicle
*/
void PassengerVehicle::setSeats(int seats)
{
	if (seats < 1 || seats > 50)
		throw invalid_argument("doors cannot be <1 or >50");
	this->seats = seats;
}

/*
* Function: operator<<
* Description: friend function that overrides the Vehicle version to
*              add seats and doors
* Input:
*     output - the output stream
*     v - the vehicle whose data will be output
* Output:
*     ostream& - the output stream
*/
ostream& operator<<(std::ostream& output, const PassengerVehicle& v)
{
	output << v.getYear() << " " << v.getBrandModelName() << " Seats: "
		<< v.getSeats() << " Doors: " << v.getDoors();
		return output;
}
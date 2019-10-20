/*
 * Project: Lab1
 * File: CrewHauler.cpp
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the source file for the CrewHauler class.
 */

#include "CargoVehicle.h"
#include "PassengerVehicle.h"
#include "CrewHauler.h"

#include <string>

using namespace std;

/*
* Function: constructor
* Description: creates a new CrewHauler object and sets capacity, seats, and doors
*              passing the remaining data to the PassengerVehicle and CargoVehicle
*              base constructors
* Input:
*			brand - vehicle brand
*			model - vehicle model
*			year - vehicle year
*			capacity - vehicle capacity
*			seats - vehicle seats
*			doors - vehicle doors
*/

CrewHauler::CrewHauler(int year, string brand, string model, int capacity,
	int seats, int doors) : 
	CargoVehicle(year, brand, model, capacity), 
	PassengerVehicle(year, brand, model, seats, doors)
{
	
}

/*
* Function: operator<<
* Description: friend function that overrides the Vehicle version to
*              add capacity, doors and seats
* Input:
*     output - the output stream
*     v - the vehicle whose data will be output
* Output:
*     ostream& - the output stream
*/
ostream& operator<<(ostream& output, const CrewHauler& v)
{
	output << v.CargoVehicle::getYear() << " " << v.CargoVehicle::getBrandModelName() << " Capacity: "
		<< v.getCapacity() << " Seats: " << v.getSeats() << " Doors: "
		<< v.getDoors();
	return output;
}

/*
 * Project: Lab1
 * File: CargoVehicle.cpp
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the source file for the CargoVehicle class.
 */

#include "Vehicle.h"
#include "CargoVehicle.h"

#include <string>

using namespace std;

/*
* Function: constructor
* Description: creates a new PassengerVehicle object and sets capacity,
*              passing the remaining data to the Vehicle
*              base constructors
* Input:
*			brand - vehicle brand
*			model - vehicle model
*			year - vehicle year
*			capacity - vehicle capacity
*/

CargoVehicle::CargoVehicle(int year, string brand, string model, int capacity)
	: Vehicle(year, brand, model)
{
	//this->capacity = capacity;
	setCapacity(capacity);
}

/*
 * Function: getCapacity
 * Description: provides access to the capicity in PassengerVehicle
 * Output:
 *     int - capacity of a car
 */
int CargoVehicle::getCapacity() const
{
	return capacity;
}

/*
* Function: setCapacity
* Description: allows capcity to be reset
* Input:
*    capacity - vehicle capacity
*/
void CargoVehicle::setCapacity(int capacity)
{
	if (capacity < 245 || capacity > 1611)
		throw invalid_argument("capacity must be greater than"
			"245ft cubed and less than 1611 ft cubed ");
	this->capacity = capacity;
}

/*
* Function: operator<<
* Description: friend function that overrides the Vehicle version to
*              add capacity
* Input:
*     output - the output stream
*     v - the vehicle whose data will be output
* Output:
*     ostream& - the output stream
*/
ostream& operator<<(std::ostream& output, const CargoVehicle& v)
{
	output << v.getYear() << " " << v.getBrandModelName() << " Capacity: "
		<< v.getCapacity();
	return output;
}

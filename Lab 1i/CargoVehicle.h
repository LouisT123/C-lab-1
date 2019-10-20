/*
 * Project: Lab1
 * File: CargoVehicle.h
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the header file for the CargoVehicle class.
 */

#ifndef _CARGO_VEHICLE_
#define _CARGO_VEHICLE_

#include "Vehicle.h"
#include <string>

 /*
  * Class: CargoVehicle
  * Description: This is the class definition of an CargoVehicle that
				 inherits from Vehicle and adds capacity
  * Data Members:
  *				capacity: capacity of car
  */

class CargoVehicle : public Vehicle
{
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
	friend std::ostream& operator<<(std::ostream& output, const CargoVehicle& v);

public:
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
CargoVehicle(int year, std::string brand, std::string model, int capacity);


/*
 * Function: getCapacity
 * Description: provides access to the capicity in PassengerVehicle
 * Output:
 *     int - capacity of a car
 */
int getCapacity() const;

/*
* Function: setCapacity
* Description: allows capcity to be reset
* Input:
*    capacity - vehicle capacity
*/
void setCapacity(int capacity);

private:
	int capacity;
};


#endif


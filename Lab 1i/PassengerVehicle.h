/*
 * Project: Lab1
 * File: PassengerVehicle.h
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the header file for the PassengerVehicle class.
 */

#ifndef _PASSENGER_VEHICLE_
#define _PASSENGER_VEHICLE_

#include "Vehicle.h"
#include <string>

 /*
  * Class: PassengerVehicle
  * Description: This is the class definition of an PassengerVehicle that
				 inherits from Vehicle and adds doors and seats
  * Data Members:
  *     door: number of doors of a passenger vehicle
  *		seat: number of seats of a passenger vehicle
  */

class PassengerVehicle : public Vehicle
{
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
	friend std::ostream& operator<<(std::ostream& output, const PassengerVehicle& v);

public:
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
	PassengerVehicle(int year, std::string brand, std::string model, int seat, int door);

	/*
	 * Function: getSeats
	 * Description: provides access to the number of seats in PassengerVehicle
	 * Output:
	 *     int - number of seats
	 */
	int getSeats() const;

	/*
	 * Function: getDoors
	 * Description: provides access to the number of doors in PassengerVehicle
	 * Output:
	 *     int - number of doors
	 */
	int getDoors() const;

	/*
	* Function: setSeats
	* Description: allows number of seats to be reset
	* Input:
	*    seat - seats of passenger vehicle
	*/
	void setSeats(int seats);

	/*
	* Function: setDoors
	* Description: allows number of doors to be reset
	* Input:
	*    doors - doors of passenger vehicle
	*/
	void setDoors(int doors);

private:
	int doors;
	int seats;
};

#endif // !_PASSENGER_VEHICLE

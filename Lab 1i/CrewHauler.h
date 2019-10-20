/*
 * Project: Lab1
 * File: CrewHauler.h
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the header file for the CrewHauler class.
 */

#ifndef _CREW_HAULER
#define _CREW_HAULER_

#include "CargoVehicle.h"
#include "PassengerVehicle.h"
#include <string>

 /*
 * Class: CrewHauler
 * Description: This is the class definition of an CargoHauler that
 *				inherits from CargoVehicle and PassengerVehicle
 * Data Members:
 *				none
 */
class CrewHauler : public PassengerVehicle, public CargoVehicle
{
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
	friend std::ostream& operator<<(std::ostream& output, const CrewHauler& v);

public:
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
CrewHauler(int year, std::string brand, std::string model, int capacity,
		int seats, int doors);

private:

};


#endif // !_CREW_HAULER

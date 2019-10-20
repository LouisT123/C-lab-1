/*
 * Project: Lab1
 * File: Vehicle.h
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the header file for the Vehicle class.
 */

#ifndef _VEHICLE_
#define _VEHICLE_

#include <string>
#include <iostream>

/*
*Class: Vehicle
*Description: Class definition of Vehicle that can be used for 
*			an individual class.
*Data Members:
*			brand - vehicle brand
*			model - vehicle model
*			year - vehicle year
*/

class Vehicle
{
	/*
	* Function: operator<<
	* Description: friend function that allows cout to be called on
	*              a Vehicle object
	* Input:
	*     output - the output stream
	*     v - the vehicle whose data will be outputted
	* Output:
	*     ostream& - the output stream
	*/
	friend std::ostream& operator<<(std::ostream& output, const Vehicle& v);

public:
	/*
	* Function: constructor
	* Description: creates a new Vehicle object and sets the vehicle data,
				   indicating the name vehicle year, brand, and model.
	* Input:
	*			brand - vehicle brand
	*			model - vehicle model
	*			year - vehicle year
	*/
	Vehicle(int year, std::string brand, std::string model);
	
	/*
	* Function: getBrandname
	* Description: provides access to the Brand name
	* Output:
	*     string - the Vehicle's brand name and model
	*/
	std::string getBrandModelName() const;

	/*
	* Function: setModel
	* Description: allows the model to be reset
	* Input:
	*     model - set vehicle's model
	*/
	void setModel(std::string model);

	/*
	* Function: setBrand
	* Description: allows the brand to be reset
	* Input:
	*     brand - set vehicle's brand
	*/
	void setBrand(std::string brand);

	/*
	* Function: getYear
	* Description: provides access to the year of vehicle entered
	* Output:
	*     int - vehicle year
	*/
	int getYear() const;

	/*
	* Function: addYear
	* Description: allows the vehicle's year to be added to
	* Input:
	*     new year - create new year
	*/
	void addYear(int newYear);

	/*
	* Function: operator==
	* Description: determines if another Vehicle is equivalent to this one
	*				in brand, model, and year
	* Input:
	*     other - the other vehicle to compare to this one
	* Output:
	*     bool - true if they are equivalent, false if not
	*/
	bool operator==(const Vehicle& other) const;

	/*
	* Function: operator!=
	* Description: determines if another Vehicle is not equivalent to this one
	*				in brand, model, and year
	* Input:
	*     other - the other vehicle to compare to this one
	* Output:
	*     bool - true if they are not equivalent, false if they are
	*/
	bool operator!=(const Vehicle& other) const;

	/*
	 * Function: operator<
	 * Description: determines if this vehicle year is less than other vehicle
	 * Input:
	 *     other - the other vehicle to compare to this one
	 * Output:
	 *     bool - true if this one is less than the other, false if not
	 */
	bool operator<(const Vehicle& other) const;

	/*
	* Function: operator>
	* Description: determines if this vehicle year is greater than other vehicle
	* Input:
	*     other - the other student to compare to this one
	* Output:
	*     bool - true if this one is greater than the other, false if not
	*/
	bool operator>(const Vehicle& other) const;

	/*
	 * Function: operator<=
	 * Description: determines if this vehicle year is less than or equal other vehicle
	 * Input:
	 *     other - the other vehicle to compare to this one
	 * Output:
	 *     bool - true if this one is less than or equal to the other, false if not
	 */
	bool operator<=(const Vehicle& other) const;

	/*
	* Function: operator>=
	* Description: determines if this vehicle year is greater than or equal other vehicle
	* Input:
	*     other - the other student to compare to this one
	* Output:
	*     bool - true if this one is greater than or equal to the other, false if not
	*/
	bool operator>=(const Vehicle& other) const;

private:
	std::string brand;
	std::string model;
	int year;
};


#endif // !_VEHICLE_


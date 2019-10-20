/*
 * Project: Lab1
 * File: Vehicle.cpp
 * Author: Louis Taing
 * Date: 4/5/2019
 * Description: This is the source file for the Vehicle class.
 */

#include "Vehicle.h"
#include <string>
#include <iostream>

using namespace std;
/*
* Function: constructor
* Description: creates a new Vehicle object and sets the vehicle data,
			  indicating the name vehicle year, brand, and model.
* Input:
*			brand - vehicle brand
*			model - vehicle model
*			year - vehicle year
*/
Vehicle::Vehicle(int year, string brand, string model)
{
	addYear(year);
	setBrand(brand);
	setModel(model);
}

/*
* Function: getBrandname
* Description: provides access to the Brand name
* Output:
*     string - the Vehicle's brand name and model
*/

string Vehicle::getBrandModelName() const
{
	return brand + ", " + model;
}
/*
* Function: setModel
* Description: allows the model to be reset
* Input:
*     model - set vehicle's model
*/
void Vehicle::setModel(string model)
{
	//no blank models
	if (model.empty())
		throw invalid_argument("model cannot be blank");

	Vehicle::model = model.substr(0, 25);
}

/*
* Function: setBrand
* Description: allows the brand to be reset
* Input:
*       brand - set vehicle's brand
*/
void Vehicle::setBrand(string brand)
{
	//no blank models
	if (brand.empty())
		throw invalid_argument("brand cannot be blank");

	Vehicle::brand = brand.substr(0, 25);
}

/*
* Function: getYear
* Description: provides access to the year of vehicle entered
* Output:
*     int - vehicle year
*/
int Vehicle::getYear() const
{
	return year;
}


/*
* Function: addYear
* Description: allows the vehicle's year to be added to
* Input:
*       new year - create new year
*/
void Vehicle::addYear(int year)
{
	
	if (year <= 1886)
		throw invalid_argument("year cars were made was after 1886");
	Vehicle::year = year;
}

/*
* Function: operator==
* Description: determines if another Vehicle is equivalent to this one
*				in brand, model, and year
* Input:
*     other - the other vehicle to compare to this one
* Output:
*     bool - true if they are equivalent, false if not
*/
bool Vehicle::operator==(const Vehicle& other) const
{
	return (this->brand == other.brand && this->model == other.model 
		&& this->year == other.year);
}

/*
* Function: operator!=
* Description: determines if another Vehicle is not equivalent to this one
*				in brand, model, and year
* Input:
*     other - the other vehicle to compare to this one
* Output:
*     bool - true if they are not equivalent, false if they are
*/
bool Vehicle::operator!=(const Vehicle& other) const
{
	return (this->brand != other.brand || this->model != other.model
		|| this->year != other.year);
}


/*
* Function: operator<
* Description: determines if this vehicle year is less than other vehicle
* Input:
*     other - the other vehicle to compare to this one
* Output:
*     bool - true if this one is less than the other, false if not
*/
bool Vehicle::operator<(const Vehicle& other) const
{
	return (this->year < other.year);
}

/*
* Function: operator>
* Description: determines if this vehicle year is greater than other vehicle
* Input:
*     other - the other student to compare to this one
* Output:
*     bool - true if this one is greater than the other, false if not
*/
bool Vehicle::operator>(const Vehicle& other) const
{
	return (this->year > other.year);
}

/*
* Function: operator<=
* Description: determines if this vehicle year is less than or equal other vehicle
* Input:
*     other - the other vehicle to compare to this one
* Output:
*     bool - true if this one is less than or equal to the other, false if not
*/
bool Vehicle::operator<=(const Vehicle& other) const
{
	return (this->year <= other.year);
}

/*
* Function: operator>=
* Description: determines if this vehicle year is greater than or equal other vehicle
* Input:
*     other - the other student to compare to this one
* Output:
*     bool - true if this one is greater than or equal to the other, false if not
*/
bool Vehicle::operator>=(const Vehicle& other) const
{
	return (this->year >= other.year);
}

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
ostream& operator<<(std::ostream& output, const Vehicle& v)
{
	output << v.year << " " << v.brand << " " << v.model;
	return output;
}



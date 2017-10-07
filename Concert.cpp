#include "Concert.h"
#include <iostream>

/**
 * Default Constructor
 */
Concert::Concert() {
	
}

/**
 * Constructor
 * @Param name 		Name of the Concert
 * @Param friends 	List of friends going to the concert
 * @Param desire 	How much you want to go to the concert
 * @Param date		The date of the Concert
 */
Concert::Concert(std::string name, std::vector<std::string> friends, int desire, std::tm date) {
	this->concertName = name;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
}

/**
 * Gets the name of the concert
 * @return 			The name of the concert
 */
std::string Concert::getConcertName(){
	return this->concertName;
}

/**
 * Set the concerts name
 * @param name 		new name of the concert
 */
void Concert::setConcertName(std::string name) {
	this->concertName = name;
};

/**
 * Gets the List of friends going to the concert
 * @return 			list of friends
 */
std::vector<std::string> Concert::getFriends() {
	return friends;
}

/**
 * Sets the list of friends
 * @param 			friends new list of friends
 */
void Concert::setFriends(std::vector<std::string> friends) {
	friends = friends;
}

/**
 * Gets the Desire value for a concert
 * @return 			concert desire
 */	
int Concert::getDesire() {
	return desire;
}

/**
 * Sets the concerts desire
 * @param desire 	new desire level
 */
void Concert::setDesire(int desire) {
	desire = desire;
}

/**
 * Gets the date of the concert
 * @return 			date of the concert
 */
std::tm Concert::getDate() {
	return date;
}

/**
 * Sets a date for the concert
 * @param date 		new date of the concert
 */
void Concert::setDate(std::tm date) {
	date = date;
};

/**
 * Overload for the less than operator this is used to 
 * sort lists of concerts
 */
bool Concert::operator<(const Concert& c) const{
	if(this->date.tm_year < c.date.tm_year) {
		return true;
	} 

	if(this->date.tm_year != c.date.tm_year) {
		return false;
	}

	if (this->date.tm_mon < c.date.tm_mon)
	{
		return true;
	}

	if (this->date.tm_mon != c.date.tm_mon)
	{
		return false;
	}

	if (this->date.tm_mday < c.date.tm_mday)
	{
		return true;
	}

	if (this->date.tm_mday < c.date.tm_mday)
	{
		return false;
	}

	if (this->desire > c.desire)
	{
		return true;
	}


	return false;
}

/**
 * Overload for the stream operator allows printing the concert obj to a stream
 */
std::ostream& operator<< (std::ostream& os, const Concert& c) {
	os << c.concertName;
	os << " - ";
	os << (c.date.tm_mon + 1);
	os << "/";
	os << c.date.tm_mday;
	os << "/";
	os << (c.date.tm_year + 1900);
	os << "\tDesire: " << c.desire;
}

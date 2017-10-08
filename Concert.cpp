/*****************************************************************
Implementation of Concert Class

@author Kevin Anderson
@version Fall 2017
*****************************************************************/
#include "Concert.h"
#include <iostream>

/*****************************************************************
 * Default Constructor
 *****************************************************************/
Concert::Concert() {
	
}

/*****************************************************************
 * Constructor
 * @param name 		Name of the Concert
 * @param friends 	List of friends going to the concert
 * @param desire 	How much you want to go to the concert
 * @param date		The date of the Concert
 *****************************************************************/
Concert::Concert(std::string name, std::vector<std::string> friends, int desire, std::tm date) {
	this->concertName = name;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
}

/*****************************************************************
 * Gets the name of the concert
 * @return std::string		The name of the concert
 *****************************************************************/
std::string Concert::getConcertName(){
	return this->concertName;
}

/*****************************************************************
 * Set the concerts name
 * @param name 	new name of the concert
 * @return none
 *****************************************************************/
void Concert::setConcertName(std::string name) {
	this->concertName = name;
};

/*****************************************************************
 * Gets the List of friends going to the concert
 * @return 			list of friends
 *****************************************************************/
std::vector<std::string> Concert::getFriends() {
	return friends;
}

/*****************************************************************
 * Sets the list of friends
 * @param 			friends new list of friends
 * @return none
 *****************************************************************/
void Concert::setFriends(std::vector<std::string> friends) {
	friends = friends;
}

/*****************************************************************
 * Gets the Desire value for a concert
 * @return 			concert desire
 *****************************************************************/	
int Concert::getDesire() {
	return desire;
}

/*****************************************************************
 * Sets the concerts desire
 * @param desire 	new desire level
 * @return none
 *****************************************************************/
void Concert::setDesire(int desire) {
	desire = desire;
}

/*****************************************************************
 * Gets the date of the concert
 * @return 			date of the concert
 *****************************************************************/
std::tm Concert::getDate() {
	return date;
}

/*****************************************************************
 * Sets a date for the concert
 * @param date 		new date of the concert
 * @return none
 *****************************************************************/
void Concert::setDate(std::tm date) {
	date = date;
};

/*****************************************************************
 * Overload for the less than operator this is used to 
 * sort lists of concerts
 * @param c Reference to the concert you are comparing
 * @return bool bool representing whether the concert is less than another concert
 *****************************************************************/
bool Concert::operator<(const Concert& c) const{
	// compare year if less than return true
	if(this->date.tm_year < c.date.tm_year) {
		return true;
	} 

	// if equal then check month
	if(this->date.tm_year != c.date.tm_year) {
		return false;
	}

	// compare months if less return true
	if (this->date.tm_mon < c.date.tm_mon)
	{
		return true;
	}

	// if equal check day
	if (this->date.tm_mon != c.date.tm_mon)
	{
		return false;
	}

	//compare day if less than return true
	if (this->date.tm_mday < c.date.tm_mday)
	{
		return true;
	}
	// if equal check desire
	if (this->date.tm_mday < c.date.tm_mday)
	{
		return false;
	}

	// compare desire if higher return true
	if (this->desire > c.desire)
	{
		return true;
	}

	return false;
}

/*****************************************************************
 * Overload for the stream operator allows printing the concert obj to a stream
 * @param os reference to the stream you are printing to
 * @param c the concert you are printing
 * @return ostream return the stream your are printing to
 *****************************************************************/
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

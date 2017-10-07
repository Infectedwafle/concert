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

std::string Concert::getConcertName(){
	return this->concertName;
}

void Concert::setConcertName(std::string name) {
	this->concertName = name;
};

std::vector<std::string> Concert::getFriends() {
	return friends;
}

void Concert::setFriends(std::vector<std::string> friends) {
	friends = friends;
}

int Concert::getDesire() {
	return desire;
}

void Concert::setDesire(int desire) {
	desire = desire;
}

std::tm Concert::getDate() {
	return date;
}

void Concert::setDate(std::tm date) {
	date = date;
};

bool Concert::operator<(const Concert& c) const{
	//std::cout << *this << std::endl;
	//std::cout << c << std::endl;

	bool lessThan = false;

	if(this->date.tm_year < c.date.tm_year) {
		lessThan = true;
	}

	if(!lessThan && this->date.tm_mon < c.date.tm_mon) {
		lessThan = true;
	}
	
	if(!lessThan && this->date.tm_mday < c.date.tm_mday) {
		lessThan = true;
	}

	if(!lessThan && this->desire < c.desire) {
		lessThan = true;
	}
	
	return lessThan;
}

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

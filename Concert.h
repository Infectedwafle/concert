#ifndef CONCERT_H
#define CONCERT_H
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

/**
 * Class for building Concert Objects
 */
class Concert {
	public:
		Concert();
		Concert(std::string name, std::vector<std::string> friends, int desire, std::tm date);
		std::string concertName;
		std::vector<std::string> friends;
		int desire;
		std::tm date;
		
		bool operator< (const Concert& c) const;
		

	private:
		std::string getConcertName();
		void setConcertName(std::string make);

		std::vector<std::string> getFriends();
		void setFriends(std::vector<std::string> friends);

		int getDesire();
		void setDesire(int desire);

		std::tm getDate();
		void setDate(std::tm date);

};

std::ostream& operator<< (std::ostream& os, const Concert& c);

#endif /* CONCERT_H */
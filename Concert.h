/*****************************************************************
Definition File for Concert Class

@author Kevin Anderson
@version Fall 2017
*****************************************************************/

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
		
		/** Default Constructor */
		Concert();
		
		/** Constuctor to initialize Class */
		Concert(std::string name, std::vector<std::string> friends, int desire, std::tm date);
		
		/** Name of the concert */
		std::string concertName;

		/** List of friends */
		std::vector<std::string> friends;

		/** Desire to go to  */
		int desire;

		/** Dtae of the concert */
		std::tm date;
		
		/** Overload for less than operator to allow sorting */
		bool operator< (const Concert& c) const;
		

	private:
		/*****************************************************************
	    Returns the Name of the Concert
	    @return string Name of the Concert
	    *****************************************************************/
		std::string getConcertName();

		/*****************************************************************
	    Sets the name of the concert
	    @param name name of concert
	    @return none
	    *****************************************************************/
		void setConcertName(std::string name);

		/*****************************************************************
	    Returns list of friends going to the concert
	    @return vector<std::string> List of Friends
	    *****************************************************************/
		std::vector<std::string> getFriends();

		/*****************************************************************
	    Sets the list of friends going to the concert
	    @param friends List of friends
	    @return none
	    *****************************************************************/
		void setFriends(std::vector<std::string> friends);

		/*****************************************************************
	    Returns the Desire for the Concert
	    @return int Concert Desire
	    *****************************************************************/
		int getDesire();

		/*****************************************************************
	    Sets the desire for the concert
	    @param desire desire for concert
	    @return none
	    *****************************************************************/
		void setDesire(int desire);

		/*****************************************************************
	    Returns the Name of the Concert
	    @return string Name of the Concert
	    *****************************************************************/
		std::tm getDate();

		/*****************************************************************
	    Sets the date of the concert
	    @param date date of concert
	    @return none
	    *****************************************************************/
		void setDate(std::tm date);

};

/*****************************************************************
Overloads the stream operator
@param os stream reference you are printing to
@param c  reference of the concert you are printing
@return none
*****************************************************************/
std::ostream& operator<< (std::ostream& os, const Concert& c);

#endif /* CONCERT_H */
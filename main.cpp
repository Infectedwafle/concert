#include "Concert.h"
#include <iostream>
#include <algorithm>

int main() {
	std::vector<Concert> concerts;
	std::vector<std::string> friends {"John", "Jim", "Steve", "Bob"};
	std::tm date;

	date.tm_year = 117;
	date.tm_mon = 2;
	date.tm_mday = 12;
	Concert concert = Concert("Concert 1", friends, 1, date);
	concerts.push_back(concert);

	date.tm_year = 117;
	date.tm_mon = 2;
	date.tm_mday = 12;
	concert = Concert("Concert 2", friends, 2, date);
	concerts.push_back(concert);

	date.tm_year = 117;
	date.tm_mon = 3;
	date.tm_mday = 12;
	concert = Concert("Concert 3", friends, 3, date);
	concerts.push_back(concert);

	date.tm_year = 117;
	date.tm_mon = 4;
	date.tm_mday = 12;
	concert = Concert("Concert 4", friends, 1, date);
	concerts.push_back(concert);

	date.tm_year = 117;
	date.tm_mon = 4;
	date.tm_mday = 14;
	concert = Concert("Concert 5", friends, 2, date);
	concerts.push_back(concert);

	date.tm_year = 118;
	date.tm_mon = 2;
	date.tm_mday = 22;
	concert = Concert("Concert 6", friends, 4, date);
	concerts.push_back(concert);

	date.tm_year = 116;
	date.tm_mon = 2;
	date.tm_mday = 12;
	concert = Concert("Concert 7", friends, 5, date);
	concerts.push_back(concert);

	date.tm_year = 116;
	date.tm_mon = 2;
	date.tm_mday = 12;
	concert = Concert("Concert 8", friends, 1, date);
	concerts.push_back(concert);

	date.tm_year = 117;
	date.tm_mon = 8;
	date.tm_mday = 12;
	concert = Concert("Concert 9", friends, 1, date);
	concerts.push_back(concert);

	date.tm_year = 117;
	date.tm_mon = 9;
	date.tm_mday = 22;
	concert = Concert("Concert 10", friends, 6, date);
	concerts.push_back(concert);

	std::sort (concerts.begin(), concerts.end());

	for(int i = 0; i < concerts.size(); i++) {
		std::cout << concerts[i] << std::endl;
	}
	return 0;
}
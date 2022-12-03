// solution by Pete

// dec 2022


#include <iostream>	


int main()
{
	int numbreOfStations = 0; // number of weather stations
	int highTempature = 0; // highest temperature
	std::string  HighStationName = "none"; // name of station with highest temperature
	std::string stationName = "none"; // name of current station
	int tempature = -1000; // temperature of current station
	std::cout << "Enter the number of weather stations: ";
	std::cin >> numbreOfStations;
	
	for (int i = 0; i < numbreOfStations; i++)
	{
		std::cout << "What is the name of the station " << i + 1 << ": ";
		std::cin >> stationName;
		std::cout << "What is the temperature at station " << stationName << ": ";
		std::cin >> tempature;
		if (tempature > highTempature)
		{
			highTempature = tempature;
			HighStationName = stationName;
		}
	}
	std::cout << "The station with he highest temperature is " << HighStationName << " with a temperature of " << highTempature << std::endl;
	
	return 1;
	
}
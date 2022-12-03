// solution by Pete

// dec 2022


#include <iostream>	

void question1()
{
	int numbreOfStations = 0; // number of weather stations
	int highTempature = -1000; // highest temperature
	std::string  HighStationName = "none"; // name of station with highest temperature
	std::string stationName = "none"; // name of current station
	int tempature = 0; // temperature of current station
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
}


void question2()
{
	int numbreOfStations = 0; // number of weather stations
	int tresholdTempature = 0; // threshold temperature
	std::string  stationNames = ""; // name of station(s) with high temperatures
	std::string currentStationName = "none"; // name of current station
	int tempature = 0; // temperature of current station
	std::cout << "Enter the number of weather stations: ";
	std::cin >> numbreOfStations;
	std::cout << "Enter the threshold temperature: ";
	std::cin >> tresholdTempature;
	bool first = true;
	
	for (int i = 0; i < numbreOfStations; i++)
	{
		std::cout << "What is the name of the station " << i + 1 << ": ";
		std::cin >> currentStationName;
		std::cout << "What is the temperature at station " << currentStationName << ": ";
		std::cin >> tempature;
		if (tempature >= tresholdTempature)
		{
			if (!first)
			{
				stationNames = stationNames +  ", " + currentStationName;
			}
			else
			{
				first = false;
				stationNames = currentStationName;
			}
			
			
		}
	}
	std::cout << stationNames << " reported temperature(s) above" << tresholdTempature << " degrees" << std::endl;

}
int main()
{

	question2();
	return 1;
	
}


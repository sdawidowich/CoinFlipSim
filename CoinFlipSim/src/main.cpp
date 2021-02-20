#include <iostream>
#include <random>

int main() {
	std::cout << "Hello C++ World!" << std::endl;

	std::random_device random_device;
	std::mt19937 engine{ random_device() };
	std::uniform_int_distribution<int> dist(0, 1);

	int iterations;
	std::cout << "How many times would you like to simulate a coin flip?" << std::endl;
	std::cin >> iterations;

	int heads = 0;
	int tails = 0;
	for (int i = 0; i < iterations; i++)
	{
		int random_element = dist(engine);
		if (random_element == 1) {
			heads++;
		}
		else {
			tails++;
		}
	}
	int total = heads + tails;
	float headsPercent = ((float)heads / (float)total) * 100.0;
	float tailsPercent = ((float)tails / (float)total) * 100.0;
	std::cout << "Heads: " << heads << std::endl << "% Heads: " << headsPercent << std::endl;
	std::cout << "Tails: " << tails << std::endl << "% Tails: " << tailsPercent << std::endl;
	std::cout << "Total: " << total << std::endl;

	return 0;
}
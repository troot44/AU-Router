// This is a test program that I'm going to put onto the AU-Router Github.
// I'm doing this because I have absolutely no clue how to be a professional.

#include <iostream>
#include <thread>
#include <chrono>

int main() {

	std::cout << "Hello, if you're reading this... my planned worked!\n";
	std::cout << "This computer/bomb will activate in: \n";
	for (int i = 10; i > 0; --i) {
		std::cout << i << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	std::cout << "Awe shucks... I installed the bomb in the wrong computer...\n";
	std::cout << "*dies in a violent explosion\n";

	return 0;
}
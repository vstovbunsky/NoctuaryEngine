#include "astral_app.h"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() 
{
	nt::AstralApp app{};

  std::cout << "°˖✧ Welcome to the Noctuary Engine ✧˖°" << std::endl;

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

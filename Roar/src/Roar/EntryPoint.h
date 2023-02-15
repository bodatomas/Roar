#pragma once
#include <cstdlib>
#include <stdexcept>
#include <iostream>

#ifdef RR_PLATFORM_WINDOWS

// Defining this in client not in engine
extern Roar::Application* Roar::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = Roar::CreateApplication();

	try
	{
		app->Run();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		delete app;
		return EXIT_FAILURE;
	}
	
	delete app;
	return EXIT_SUCCESS;
}

#endif

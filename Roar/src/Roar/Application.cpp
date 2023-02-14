#include "Application.h"

namespace Roar {

	Application::Application(ApplicationSpecification spec)
		: name{spec.name}
	{

	}

	Application::~Application() {}

	void Application::Run()
	{
		MainLoop();
		
	}

	void Application::MainLoop()
	{
		while (!window.ShouldClose()) {
			glfwPollEvents();
		}
	}

}

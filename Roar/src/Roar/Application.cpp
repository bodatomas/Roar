#include "Application.h"

namespace Roar {

	Application::Application(ApplicationSpecification spec)
		: name{spec.name}
	{

	}

	Application::~Application() {}

	void Application::Run()
	{
		renderer.CheckForExtensionSupport();
		renderer.InitVulkan();
		MainLoop();
	}

	void Application::MainLoop()
	{
		while (!window.ShouldClose()) {
			glfwPollEvents();
		}
	}

}

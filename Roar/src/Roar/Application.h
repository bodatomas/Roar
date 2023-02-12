#pragma once

#include <string>

#include "Core.h"
#include "Window.h"


namespace Roar {

	struct ApplicationSpecification
	{
		std::string name;
	};

	class ROAR_API Application
	{
	public:
		Application(ApplicationSpecification spec);
		virtual ~Application();

		void Run();

	private:
		std::string name;

		Window m_window;

		void MainLoop();
		
	};

	// Used in client code
	Application* CreateApplication();

}

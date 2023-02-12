#pragma once

#include <string>

#include "Core.h"
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace Roar {

	struct WindowProps
	{
		std::string Title;
		uint32_t Width;
		uint32_t Height;

		WindowProps(
			const std::string& title = "Roar",
			uint32_t width = 800,
			uint32_t height = 600
		)
			: Title(title), Width(width), Height(height)
		{
		}
	};

	class Window
	{
	public:
		Window();
		virtual ~Window();

		// Secure that we dont accidentaly copy window class
		Window(const Window&) = delete;
		Window&operator=(const Window&) = delete;

		uint32_t GetWidth() const { return 800; };
		uint32_t GetHeight() const { return 600; };

		bool ShouldClose();

	private:
		GLFWwindow* m_window;
		
		void InitWindow(const WindowProps& props = WindowProps()); 
	};
	
}

#include "Window.h"

namespace Roar {

	Window::Window()
	{
		#ifdef RR_PLATFORM_WINDOWS
			InitWindow();
		#endif
	}

	Window::~Window()
	{
		glfwDestroyWindow(m_window);
		glfwTerminate();
	}

	// Initialize GLFW window 
	// Set default values and window hints here
	void Window::InitWindow(const WindowProps& props)
	{
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
		m_window = glfwCreateWindow(props.Width, props.Height, props.Title.c_str(), nullptr, nullptr);
	}

	bool Window::ShouldClose()
	{
		return glfwWindowShouldClose(m_window);
	}

}

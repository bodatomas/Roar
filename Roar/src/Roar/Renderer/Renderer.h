#pragma once
#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>

namespace Roar {

	class Renderer
	{
	public:
		Renderer();
		~Renderer();

		void InitVulkan();

	private: 

		VkInstanceCreateInfo createInfo{};
		VkInstance instance;

		void CreateInstance();
	};
}

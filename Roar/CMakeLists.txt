set(ROAR_SRC "src/Roar/")

set(R_NAME "Roar")

add_library(${R_NAME} SHARED 
	# C++ files
	"${ROAR_SRC}Application.cpp"
	"${ROAR_SRC}Window.cpp"
	"${ROAR_SRC}Renderer/Renderer.cpp"
	"${ROAR_SRC}Renderer/Buffer.cpp"

	# Header files
	"${ROAR_SRC}Application.h"
	"${ROAR_SRC}Window.h"
	"${ROAR_SRC}Renderer/Buffer.h"
	"${ROAR_SRC}Renderer/Renderer.h"
	"${ROAR_SRC}EntryPoint.h"
	"${ROAR_SRC}Core.h"
	"src/Roar.h"
)

set_target_properties(${R_NAME} PROPERTIES LINKER_LANGUAGE CXX)

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	add_compile_definitions(RR_PLATFORM_WINDOWS RR_BUILD_DLL)

	# Include Vulkan header files from Vulkan SDK
	target_include_directories(${R_NAME} PRIVATE 
		${VULKAN_PATH}/Include
		${CMAKE_SOURCE_DIR}/Roar/vendor/GLFW/include
	)

	# Link directory for vulkan-1
	target_link_directories(${R_NAME} PRIVATE 
		${VULKAN_PATH}/Lib
		${CMAKE_SOURCE_DIR}/vendor/GLFW/lib-vc2022
	)
endif()

target_link_libraries(${R_NAME} 
	PRIVATE ${VULKAN_LIB_LIST}
	PRIVATE glfw
)
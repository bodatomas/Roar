set(W_NAME "Weeze")
set(WEEZE_SRC "src/")

add_executable(${W_NAME} "${WEEZE_SRC}Weeze.cpp")

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
	add_compile_definitions(RR_PLATFORM_WINDOWS)

	# Include Vulkan header files from Vulkan SDK
	target_include_directories(${W_NAME} AFTER 
		PUBLIC ${VULKAN_PATH}/Include
	)

	# Link directory for vulkan-1
	target_link_directories(${W_NAME} 
		PRIVATE ${VULKAN_PATH}/Lib
	)
endif()

target_include_directories(${W_NAME}
	PUBLIC ${GLFW_PATH}/include
	PUBLIC ${CMAKE_SOURCE_DIR}/Roar/src
	PUBLIC ${GLM_PATH}
)

target_link_directories(${W_NAME} 
	PRIVATE ${GLFW_PATH}/lib-vc2022
)

target_link_libraries(Weeze Roar)
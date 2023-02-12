#pragma once

#ifdef RR_PLATFORM_WINDOWS
	#ifdef RR_BUILD_DLL
		#define ROAR_API __declspec(dllexport)
	#else
		#define ROAR_API __declspec(dllimport)
	#endif
#else
	#error Roar only support Windows!
#endif
#pragma once

#ifdef TL_PLATFORM_WINDOWS
	#ifdef TL_BUILD_DLL
		#define TILIA_API __declspec(dllexport)
	#else
		#define TILIA_API __declspec(dllimport)
	#endif
#else 
	#error Tilia only support Windows! (for now)
#endif


#ifdef TL_ENABLE_ASSERTS
#define TL_ASSERT(x, ...) { if(!(x)) { HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#define TL_CORE_ASSERT(x, ...) { if(!(x)) { HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define TL_ASSERT(x, ...)
#define TL_CORE_ASSERT(x, ...)
#endif



#define BIT(x) (1 << x) 

#define TL_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)
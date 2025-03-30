#pragma once

#ifdef TLM_PLATFORM_WINDOWS

	#ifdef TLM_BUILD_DLL
		#define TLM_API _declspec(dllexport)
	#else
		#define TLM_API _declspec(dllimport)
	#endif

#else 

	#error Talisman engine only supports windows yet!

#endif	
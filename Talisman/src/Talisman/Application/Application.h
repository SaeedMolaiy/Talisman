#pragma once

#include "../Core.h"

namespace Talisman
{
	class TLM_API Application
	{

	public:
		Application();
		virtual ~Application();

	public:
		void Run();

	};

	Application* CreateApplication();
}
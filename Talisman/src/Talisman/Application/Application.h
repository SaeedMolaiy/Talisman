#pragma once

#include "../Base.h"

namespace Talisman
{
	class TLM_API Application
	{

	public:
		Application();

	public:
		void Run();

	public:
		virtual ~Application();

	};

	Application* CreateApplication();
}
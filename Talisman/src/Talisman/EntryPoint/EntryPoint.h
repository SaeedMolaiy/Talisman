#pragma once

#ifdef TLM_PLATFORM_WINDOWS

extern Talisman::Application* Talisman::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Talisman::CreateApplication();

	app->Run();

	delete app;
}

#endif
#pragma once

extern Talisman::Application* Talisman::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Talisman::CreateApplication();

	app->Run();

	delete app;
}
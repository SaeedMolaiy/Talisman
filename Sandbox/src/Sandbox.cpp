#include <Talisman.h>

class Sandbox : public Talisman::Application
{

public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Talisman::Application* Talisman::CreateApplication()
{
	return new Sandbox();
}
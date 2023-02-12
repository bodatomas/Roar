#pragma once

#include <Roar.h>
#include <Roar/EntryPoint.h>

namespace Roar {

	class Weeze : public Roar::Application
	{
	public:
		Weeze(const ApplicationSpecification& specification) : Application(specification) {};

	};

	Application* CreateApplication() {

		ApplicationSpecification spec;
		spec.name = "Weeze";

		return new Weeze(spec);
	};
}

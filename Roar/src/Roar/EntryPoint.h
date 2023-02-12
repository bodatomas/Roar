#pragma once

#ifdef RR_PLATFORM_WINDOWS

// Defining this in client not in engine
extern Roar::Application* Roar::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = Roar::CreateApplication();

	app->Run();
	
	delete app;
}

#endif

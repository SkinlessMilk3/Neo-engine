#include "Application.h"
#include <iostream>

namespace Neo {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::run() {
		while (true)
			std::cout << "Hello World" << std::endl;
	}

	int main() {
		Application* app = new Application();

		app->run();

		delete app;
	}
}
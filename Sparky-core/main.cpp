#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
	if(!glfwInit())
		std::cout << "error" << std::endl;
	else
		std::cout << "Success!" << std::endl;

	return 0;
}

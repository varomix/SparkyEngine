#include "graphics/window.h"

using namespace sparky;
using namespace graphics;

int main()
{


    Window window("Sparky!", 960, 540);
    glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

    while (!window.closed()) {
        window.clear();
        glBegin(GL_QUADS);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(-0.5f, -0.5f);
        glEnd();
        window.update();

    }

    return 0;
}

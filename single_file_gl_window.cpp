#define GL_WINDOW_IMPLEMENTATION
#include "single_file_gl_window.h"

int main()
{
    if (!CreateOpenGLWindow())
    {
        return -1;
    }

    glClearColor(0.2f, 0.5f, 0.8f, 1.0f);

    while (PollEvents())
    {
        BeginFrame();

        // User render code here

        EndFrame();
    }

    return 0;
}

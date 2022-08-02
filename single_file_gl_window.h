#pragma once
// A Single file header library to create a Windows window with some open gl extensions

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <gl/GL.h>

#pragma comment (lib, "opengl32.lib")
#pragma comment (lib, "gdi32.lib")

#define WINDOW_TITLE TEXT("Your Window Name")
constexpr int WINDOW_WIDTH = 600;
constexpr int WINDOW_HEIGHT = 600;

extern HWND  g_Window;
extern HDC   g_Device;
extern HGLRC g_Context;

bool CreateOpenGLWindow();
bool PollEvents();
void BeginFrame();
void EndFrame();

#define GL_ARRAY_BUFFER          0x8892		
#define GL_STREAM_DRAW           0x88E0
#define GL_STATIC_DRAW           0x88E4		  
#define GL_DYNAMIC_DRAW          0x88E8		  
#define GL_FRAGMENT_SHADER       0x8B30	  
#define GL_VERTEX_SHADER         0x8B31		  
#define GL_COMPILE_STATUS        0x8B81		  
#define GL_LINK_STATUS           0x8B82		  
#define GL_INFO_LOG_LENGTH       0x8B84	  
#define GL_TEXTURE0              0x84C0			  
#define GL_ELEMENT_ARRAY_BUFFER  0x8893 		  
#define GL_CLAMP_TO_EDGE         0x812F

typedef void   (APIENTRY* PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
extern  PFNGLATTACHSHADERPROC glAttachShader;

typedef void   (APIENTRY* PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
extern  PFNGLBINDBUFFERPROC glBindBuffer;

typedef void   (APIENTRY* PFNGLBINDVERTEXARRAYPROC) (GLuint array);
extern  PFNGLBINDVERTEXARRAYPROC glBindVertexArray;

typedef void   (APIENTRY* PFNGLBUFFERDATAPROC) (GLenum target, ptrdiff_t size, const GLvoid* data, GLenum usage);
extern  PFNGLBUFFERDATAPROC glBufferData;

typedef void   (APIENTRY* PFNGLCOMPILESHADERPROC) (GLuint shader);
extern  PFNGLCOMPILESHADERPROC glCompileShader;

typedef GLuint(APIENTRY* PFNGLCREATEPROGRAMPROC) (void);
extern  PFNGLCREATEPROGRAMPROC glCreateProgram;

typedef GLuint(APIENTRY* PFNGLCREATESHADERPROC) (GLenum type);
extern  PFNGLCREATESHADERPROC glCreateShader;

typedef void   (APIENTRY* PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint* buffers);
extern  PFNGLDELETEBUFFERSPROC glDeleteBuffers;

typedef void   (APIENTRY* PFNGLDELETEPROGRAMPROC) (GLuint program);
extern  PFNGLDELETEPROGRAMPROC glDeleteProgram;

typedef void   (APIENTRY* PFNGLDELETESHADERPROC) (GLuint shader);
extern  PFNGLDELETESHADERPROC glDeleteShader;

typedef void   (APIENTRY* PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint* arrays);
extern  PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;

typedef void   (APIENTRY* PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
extern  PFNGLDETACHSHADERPROC glDetachShader;

typedef void   (APIENTRY* PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
extern  PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;

typedef void   (APIENTRY* PFNGLGENBUFFERSPROC) (GLsizei n, GLuint* buffers);
extern  PFNGLGENBUFFERSPROC glGenBuffers;

typedef void   (APIENTRY* PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint* arrays);
extern  PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;

typedef GLint(APIENTRY* PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const char* name);
extern  PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;

typedef void   (APIENTRY* PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei* length, char* infoLog);
extern  PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;

typedef void   (APIENTRY* PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint* params);
extern  PFNGLGETPROGRAMIVPROC glGetProgramiv;

typedef void   (APIENTRY* PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei* length, char* infoLog);
extern  PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;

typedef void   (APIENTRY* PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint* params);
extern  PFNGLGETSHADERIVPROC glGetShaderiv;

typedef void   (APIENTRY* PFNGLLINKPROGRAMPROC) (GLuint program);
extern  PFNGLLINKPROGRAMPROC glLinkProgram;

typedef void   (APIENTRY* PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const char** string, const GLint* length);
extern  PFNGLSHADERSOURCEPROC glShaderSource;

typedef void   (APIENTRY* PFNGLUSEPROGRAMPROC) (GLuint program);
extern  PFNGLUSEPROGRAMPROC glUseProgram;

typedef void   (APIENTRY* PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer);
extern  PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;

typedef void   (APIENTRY* PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const char* name);
extern  PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;

typedef GLint(APIENTRY* PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const char* name);
extern  PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;

typedef void   (APIENTRY* PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
extern  PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;

typedef void   (APIENTRY* PFNGLACTIVETEXTUREPROC) (GLenum texture);
extern  PFNGLACTIVETEXTUREPROC glActiveTexture;

typedef void   (APIENTRY* PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
extern  PFNGLUNIFORM1IPROC glUniform1i;

typedef void   (APIENTRY* PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
extern  PFNGLUNIFORM1FPROC glUniform1f;

typedef void   (APIENTRY* PFNGLGENERATEMIPMAPPROC) (GLenum target);
extern  PFNGLGENERATEMIPMAPPROC glGenerateMipmap;

typedef void   (APIENTRY* PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
extern  PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;

typedef void   (APIENTRY* PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat* value);
extern  PFNGLUNIFORM2FVPROC glUniform2fv;

typedef void   (APIENTRY* PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat* value);
extern  PFNGLUNIFORM3FVPROC glUniform3fv;

typedef void   (APIENTRY* PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat* value);
extern  PFNGLUNIFORM4FVPROC glUniform4fv;

typedef void   (APIENTRY* PFNGLBUFFERSUBDATAPROC)  (GLenum target, ptrdiff_t offset, ptrdiff_t size, const void* data);
extern  PFNGLBUFFERSUBDATAPROC glBufferSubData;


#ifdef GL_WINDOW_IMPLEMENTATION


HWND  g_Window;
HDC   g_Device;
HGLRC g_Context;


PFNGLATTACHSHADERPROC glAttachShader;
PFNGLBINDBUFFERPROC glBindBuffer;
PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
PFNGLBUFFERDATAPROC glBufferData;
PFNGLCOMPILESHADERPROC glCompileShader;
PFNGLCREATEPROGRAMPROC glCreateProgram;
PFNGLCREATESHADERPROC glCreateShader;
PFNGLDELETEBUFFERSPROC glDeleteBuffers;
PFNGLDELETEPROGRAMPROC glDeleteProgram;
PFNGLDELETESHADERPROC glDeleteShader;
PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
PFNGLDETACHSHADERPROC glDetachShader;
PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
PFNGLGENBUFFERSPROC glGenBuffers;
PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
PFNGLGETPROGRAMIVPROC glGetProgramiv;
PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
PFNGLGETSHADERIVPROC glGetShaderiv;
PFNGLLINKPROGRAMPROC glLinkProgram;
PFNGLSHADERSOURCEPROC glShaderSource;
PFNGLUSEPROGRAMPROC glUseProgram;
PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;
PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
PFNGLACTIVETEXTUREPROC glActiveTexture;
PFNGLUNIFORM1IPROC glUniform1i;
PFNGLUNIFORM1FPROC glUniform1f;
PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
PFNGLUNIFORM2FVPROC glUniform2fv;
PFNGLUNIFORM3FVPROC glUniform3fv;
PFNGLUNIFORM4FVPROC glUniform4fv;
PFNGLBUFFERSUBDATAPROC glBufferSubData;

// Could allow the user to provide their own implementation
LRESULT CALLBACK
WindowProc(HWND Window, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	LRESULT Result = {};

	switch (Msg)
	{
	default:
	{
		Result = DefWindowProc(Window, Msg, wParam, lParam);
	} break;
	}

	return Result;
}

bool LoadGLExtensions()
{
#define LOAD_GL_EXTENSION(type, fn) fn = (type)wglGetProcAddress(#fn); if (fn == nullptr)\
									{return false;} 
{
	LOAD_GL_EXTENSION(PFNGLATTACHSHADERPROC, glAttachShader);
	LOAD_GL_EXTENSION(PFNGLBINDBUFFERPROC, glBindBuffer);
	LOAD_GL_EXTENSION(PFNGLBINDVERTEXARRAYPROC, glBindVertexArray);
	LOAD_GL_EXTENSION(PFNGLBUFFERDATAPROC, glBufferData);
	LOAD_GL_EXTENSION(PFNGLCOMPILESHADERPROC, glCompileShader);
	LOAD_GL_EXTENSION(PFNGLCREATEPROGRAMPROC, glCreateProgram);
	LOAD_GL_EXTENSION(PFNGLCREATESHADERPROC, glCreateShader);
	LOAD_GL_EXTENSION(PFNGLDELETEBUFFERSPROC, glDeleteBuffers);
	LOAD_GL_EXTENSION(PFNGLDELETEPROGRAMPROC, glDeleteProgram);
	LOAD_GL_EXTENSION(PFNGLDELETESHADERPROC, glDeleteShader);
	LOAD_GL_EXTENSION(PFNGLDELETEVERTEXARRAYSPROC, glDeleteVertexArrays);
	LOAD_GL_EXTENSION(PFNGLDETACHSHADERPROC, glDetachShader);
	LOAD_GL_EXTENSION(PFNGLENABLEVERTEXATTRIBARRAYPROC, glEnableVertexAttribArray);
	LOAD_GL_EXTENSION(PFNGLGENBUFFERSPROC, glGenBuffers);
	LOAD_GL_EXTENSION(PFNGLGENVERTEXARRAYSPROC, glGenVertexArrays);
	LOAD_GL_EXTENSION(PFNGLGETATTRIBLOCATIONPROC, glGetAttribLocation);
	LOAD_GL_EXTENSION(PFNGLGETPROGRAMINFOLOGPROC, glGetProgramInfoLog);
	LOAD_GL_EXTENSION(PFNGLGETPROGRAMIVPROC, glGetProgramiv);
	LOAD_GL_EXTENSION(PFNGLGETSHADERINFOLOGPROC, glGetShaderInfoLog);
	LOAD_GL_EXTENSION(PFNGLGETSHADERIVPROC, glGetShaderiv);
	LOAD_GL_EXTENSION(PFNGLLINKPROGRAMPROC, glLinkProgram);
	LOAD_GL_EXTENSION(PFNGLSHADERSOURCEPROC, glShaderSource);
	LOAD_GL_EXTENSION(PFNGLUSEPROGRAMPROC, glUseProgram);
	LOAD_GL_EXTENSION(PFNGLVERTEXATTRIBPOINTERPROC, glVertexAttribPointer);
	LOAD_GL_EXTENSION(PFNGLBINDATTRIBLOCATIONPROC, glBindAttribLocation);
	LOAD_GL_EXTENSION(PFNGLGETUNIFORMLOCATIONPROC, glGetUniformLocation);
	LOAD_GL_EXTENSION(PFNGLUNIFORMMATRIX4FVPROC, glUniformMatrix4fv);
	LOAD_GL_EXTENSION(PFNGLACTIVETEXTUREPROC, glActiveTexture);
	LOAD_GL_EXTENSION(PFNGLUNIFORM1IPROC, glUniform1i);
	LOAD_GL_EXTENSION(PFNGLUNIFORM1FPROC, glUniform1f);
	LOAD_GL_EXTENSION(PFNGLGENERATEMIPMAPPROC, glGenerateMipmap);
	LOAD_GL_EXTENSION(PFNGLDISABLEVERTEXATTRIBARRAYPROC, glDisableVertexAttribArray);
	LOAD_GL_EXTENSION(PFNGLUNIFORM2FVPROC, glUniform2fv);
	LOAD_GL_EXTENSION(PFNGLUNIFORM3FVPROC, glUniform3fv);
	LOAD_GL_EXTENSION(PFNGLUNIFORM4FVPROC, glUniform4fv);
	LOAD_GL_EXTENSION(PFNGLBUFFERSUBDATAPROC, glBufferSubData);
}
#undef LOAD_GL_EXTENSION
return true;
}

bool CreateOpenGLWindow()
{
	DWORD dwExStyle;
	DWORD dwStyle;

	RECT WindowRect;
	WindowRect.left = (long)0;
	WindowRect.right = (long)WINDOW_WIDTH;
	WindowRect.top = (long)0;
	WindowRect.bottom = (long)WINDOW_HEIGHT;

	WNDCLASSEX wc = {};
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpfnWndProc = WindowProc;
	wc.hInstance = GetModuleHandle(0);
	wc.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
	wc.lpszClassName = TEXT("My_Window_Class");
	wc.cbClsExtra = 0;                              // No extra window data.
	wc.cbWndExtra = 0;                              // No extra window data.
	wc.hIcon = LoadIcon(0, IDI_WINLOGO);            // Load the default icon.
	wc.hCursor = LoadCursor(0, IDC_ARROW);          // Load the arrow pointer.
	wc.hbrBackground = nullptr;                     // No background required for GL.
	wc.lpszMenuName = nullptr;                      // We don't want a menu.

	if (!RegisterClassEx(&wc))
	{
		return false;
	}

	dwExStyle = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;
	dwStyle = WS_OVERLAPPEDWINDOW;

	AdjustWindowRectEx(&WindowRect, dwStyle, false, dwExStyle);

	g_Window = CreateWindowEx
	(
		dwExStyle,
		wc.lpszClassName,
		WINDOW_TITLE,
		dwStyle,
		0, 0,
		WindowRect.right - WindowRect.left,
		WindowRect.bottom - WindowRect.top,
		NULL, NULL, GetModuleHandle(0),
		nullptr
	);

	if (g_Window == nullptr)
	{
		return false;
	}

	g_Device = GetDC(g_Window);

	if (g_Device == nullptr)
	{
		return false;
	}

	//@todo: Learn more about zbits and stencil bits
	BYTE colorbits = 32;
	BYTE zbits = 31;
	BYTE stencilbits = 1;
	PIXELFORMATDESCRIPTOR pfd =  // pfd tells Windows how we want things to be.
	{
		sizeof(PIXELFORMATDESCRIPTOR),  // Size of this pixel format descriptor.
		1,                              // Version number.
		PFD_DRAW_TO_WINDOW |            // Format must support window.
		PFD_SUPPORT_OPENGL |            // Format must support opengl.
		PFD_DOUBLEBUFFER,               // Must support double buffering.
		PFD_TYPE_RGBA,                  // Request an rgba format.
		(BYTE)colorbits,                // Select our color depth.
		0, 0, 0, 0, 0, 0,               // Color bits ignored.
		0,                              // No alpha buffer.
		0,                              // Shift bit ignored.
		0,                              // No accumulation buffer.
		0, 0, 0, 0,                     // Accumulation bits ignored.
		(BYTE)zbits,                    // Bits for z-buffer (depth buffer).
		(BYTE)stencilbits,              // Stencil bits.
		0,                              // No auxiliary buffer.
		PFD_MAIN_PLANE,                 // Main drawing layer.
		0,                              // Reserved.
		0, 0, 0                         // Layer masks ignored.
	};

	unsigned int PixelFormat = ChoosePixelFormat(g_Device, &pfd);

	if (!PixelFormat)
	{
		return false;
	}

	if (!SetPixelFormat(g_Device, PixelFormat, &pfd))
	{
		return false;
	}

	g_Context = wglCreateContext(g_Device);
	if (g_Context == nullptr)
	{
		return false;
	}

	if (!wglMakeCurrent(g_Device, g_Context))
	{
		return false;
	}

	typedef BOOL(WINAPI* PFNWGLSWAPINTERVALEXTPROC) (int interval);
	PFNWGLSWAPINTERVALEXTPROC wglSwap = (PFNWGLSWAPINTERVALEXTPROC)wglGetProcAddress("wglSwapIntervalEXT");
	if (wglSwap != nullptr)
	{
		wglSwap(0);
	}

	// Displays the graphics card used
	{
		//char* rendererString;
		//rendererString = (char*)glGetString(GL_RENDERER);
		//if (rendererString) dbglog(rendererString);
	}

	ShowWindow(g_Window, SW_SHOW);
	SetForegroundWindow(g_Window);
	SetFocus(g_Window);

	return LoadGLExtensions();
}

bool PollEvents()
{
	MSG Message;
	while (PeekMessage(&Message, g_Window, 0, 0, PM_REMOVE))
	{
		if (Message.message != WM_QUIT)
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void BeginFrame()
{
	glClear(GL_COLOR_BUFFER_BIT);
}

void EndFrame()
{
	SwapBuffers(g_Device);
}

#endif

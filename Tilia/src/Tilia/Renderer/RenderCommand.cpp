#include "tlpch.h"
#include "RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Tilia {

	RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI;

}
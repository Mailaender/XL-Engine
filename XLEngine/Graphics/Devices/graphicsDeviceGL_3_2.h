#pragma once

#include "../CommonGL/graphicsDeviceGL.h"

class GraphicsDeviceGL_3_2 : public GraphicsDeviceGL
{
    public:
        GraphicsDeviceGL_3_2(GraphicsDevicePlatform* platform);
        virtual ~GraphicsDeviceGL_3_2();

		bool init(int w, int h, int& vw, int& vh);

		void setShader(ShaderID shader);

		void clearShaderParamCache();
		void setShaderResource(TextureHandle handle, u32 nameHash, u32 slot=0);
		void setShaderParameter(void* data, u32 size, u32 nameHash);
		void drawQuad(const Quad& quad);
		void drawFullscreenQuad(TextureGL* tex);

		void drawVirtualScreen();
		void setVirtualViewport(bool reset, int x, int y, int w, int h);
};


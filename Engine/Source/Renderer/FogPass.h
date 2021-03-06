#pragma once
#ifndef FOG_PASS_H
#define FOG_PASS_H

#include "RenderPhase.h"

#include "Shader.h"

#include <memory>

namespace Flux
{
    class Texture;
    class Texture3D;

    class FogPass : public RenderPhase
    {
    public:
        FogPass();

        void SetDepthMap(const Texture* depthMap);
        void SetFogColor(const Vector3f fogColor);

        void Resize(const Size& windowSize) override;

        void render(RenderState& renderState, const Scene& scene) override;

    private:
        Shader shader;

        const Texture* depthMap;

        Vector3f fogColor;
    };
}

#endif /* FOG_PASS_H */

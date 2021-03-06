#pragma once
#ifndef SKYBOX_H
#define SKYBOX_H

#include "Cubemap.h"

namespace Flux {
    class Skybox : public Cubemap {
    public:
        Skybox(char* const paths[6]);

        void render();
    private:
        unsigned int cube;
    };
}

#endif /* SKYBOX_H */

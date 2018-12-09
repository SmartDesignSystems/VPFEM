#pragma once 

#include "../Core.h"

namespace Vpfem {
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };
}
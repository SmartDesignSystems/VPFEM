#pragma once 

#include "../Log/Log.h"
#include "../Model/Model.h"

namespace Vpfem {
    class Application
    {
    private:
        Model* m_Model;
    public:
        Application();
        virtual ~Application();

        void ModelBuilder(int, int);

        void Run();
    };
}
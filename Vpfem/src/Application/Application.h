#pragma once 

#include "../Log/Log.h"
#include "../Model/Model.h"
#include "../Geometry/Geometry.h"

namespace Vpfem {
    class Application
    {
    private:
        std::unique_ptr<Model> m_Model;
        std::unique_ptr<Geometry> m_Geometry;
        //Geometry* m_Geometry;
    public:
        Application();
        virtual ~Application();

        void ModelBuilder(int, int);
        void Node(double,double);

        void ModelBuild();

        void Run();
    };
}
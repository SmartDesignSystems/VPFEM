#include "vppch.h"

#include "src/Log/Log.h"
#include "src/Core.h"

#include "Geometry.h"

namespace Vpfem {
    Geometry::Geometry() 
    {
        VP_CORE_INFO("Geometry initilized!");
    }
    Geometry::~Geometry() 
    {
        VP_CORE_INFO("Geometry destroyed!");
    }

    void Geometry::ModelBuild()
    {
        h_numberOfNodes = h_xVector.size();
        VP_CORE_INFO("{0}",h_numberOfNodes);
    }

    // Node
    void Geometry::Node2D(double x, double y)
    {
        h_xVector.push_back(x);
        h_yVector.push_back(y);
    }

    // Load
    /*
    void Geometry::PointLoad(int NodeNumber, std::vector<double &> load, int numberOfDegreeOfFreedom)
    // PointLoad(Node number, {load dof 1, load dof 2, load dof 3, ... }, number DOF = 2)
    {
        for(size_t i = 0; i < numberOfDegreeOfFreedom; i++)
        {
            h_LoadVector_value.push_back(NodeNumber*numberOfDegreeOfFreedom - 1 + i);
            h_LoadVector_dof_i.push_back(load(i));
        }
    }
    */
}
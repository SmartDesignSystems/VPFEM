#include "vppch.h"

#include "src/Log/Log.h"
#include "src/Core.h"

#include "Geometry.h"

namespace Vpfem {
    Geometry::Geometry() 
    {
        VP_CORE_TRACE("Geometry Class initilized!");
    }
    Geometry::~Geometry() 
    {
        VP_CORE_TRACE("Geometry Class destroyed!");
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
    
    void Geometry::PointLoad(int NodeNumber, std::vector<double> &load,  size_t numberOfDegreeOfFreedom)
    // PointLoad(Node number, {load dof 1, load dof 2, load dof 3, ... }, number DOF = 2)
    {
        for(size_t i = 0; i < numberOfDegreeOfFreedom; i++)
        {
            h_LoadVector_value.push_back(NodeNumber*numberOfDegreeOfFreedom - 1 + i);
            h_LoadVector_dof_i.push_back(load[i]);
        }
    }

    std::ostream& operator<<(std::ostream& os, const Geometry& c)
    { 
        for(size_t i = 0; i < c.h_numberOfNodes; i++)
        {
            os << "Node(" << i << ")\t" << c.h_xVector[i] << "\t" << c.h_yVector[i] << "\n"; 
        }
        
        for(size_t i = 0; i < c.h_LoadVector_dof_i.size(); i++)
        {
            os << "Load " << i << "\t" << c.h_LoadVector_dof_i[i] <<"\t" << c.h_LoadVector_value[i] << "\n";
        }
        
        return os; 
    };
}
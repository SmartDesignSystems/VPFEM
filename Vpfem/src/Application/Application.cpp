#include "vppch.h"

#include "src/Core.h"
#include "Application.h"

namespace Vpfem {
    Application::Application()
    {
        Vpfem::Log::Init();
        VP_CORE_INFO("Library Initialized!");
    }

    Application::~Application()
    {

    }

    void Application::ModelBuilder(int dimensions, int degreeOfFreedom)
    {
        m_Model    = std::make_unique<Model>(dimensions, degreeOfFreedom);
        m_Geometry = std::make_unique<Geometry>();
    }

    void Application::Node(double x, double y)
    {
        if (m_Model->get_dimentions() == 2)
        {
            m_Geometry->Node2D(x,y);
        }
    }
    
    void Application::ModelBuild()
    {
        m_Geometry->ModelBuild();
    }


    void Application::Run()
    {
        while(false);
    }
}
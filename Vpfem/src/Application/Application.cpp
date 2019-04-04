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
    

    void Application::PointLoad(int nodeNumber, double F_1, double F_2)
    // This is used to create point load (Fx, Fy)
    {
        std::vector<double> load = {F_1, F_2};
        if (m_Model->get_degreeOfFreedom() != 2)
            VP_CORE_ERROR("Degree of freedom does not match the number of load you entered it should be {0}",m_Model->get_degreeOfFreedom());
        m_Geometry->PointLoad(nodeNumber, load, m_Model->get_degreeOfFreedom());
    }

    void Application::PointLoad(int nodeNumber, double F_1, double F_2, double F_3)
    // This is used to create point load (Fx, Fy, Mz)
    {
        std::vector<double> load = {F_1, F_2, F_3};
        if (m_Model->get_degreeOfFreedom() != 3)
            VP_CORE_ERROR("Degree of freedom does not match the number of load you entered");
        m_Geometry->PointLoad(nodeNumber, load, m_Model->get_degreeOfFreedom());
    }

    void Application::PointLoad(int nodeNumber, double F_1, double F_2, double F_3, double F_4, double F_5, double F_6)
    // This is used to create point load (Fx, Fy, Fz, Mx, My, Mz)
    {
        std::vector<double> load = {F_1, F_2, F_3, F_4, F_5, F_6};
        if (m_Model->get_degreeOfFreedom() != 6)
            VP_CORE_ERROR("Degree of freedom does not match the number of load you entered");
        m_Geometry->PointLoad(nodeNumber, load, m_Model->get_degreeOfFreedom());
    }

    void Application::ModelBuild()
    {
        m_Geometry->ModelBuild();
        //std::cout<<*m_Geometry;
        //VP_CORE_TRACE("{0}",*m_Geometry);
        //Vpfem::Recorder::Init();
        //VP_CORE_RECORDER("{0}",*m_Geometry);
        Recorder r("text.out", "hello", 0);
    }
    void Application::Run()
    {
        while(false);
    }
}
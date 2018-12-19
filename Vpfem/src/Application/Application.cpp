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
        m_Model = new Model(dimensions, degreeOfFreedom);
    }

    void Application::Run()
    {
        while(true);
    }
}
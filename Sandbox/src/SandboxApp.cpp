#include <Vpfem.h>

class Sandbox : public Vpfem::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }
};

int main(int argc, char** argv)
{
    Vpfem::Log::Init();
    VP_CORE_WARN("Initialized Log!");
    VP_ERROR("Hello!");
    
    Sandbox* app = new Sandbox();
    app->Run();
    delete app;
}
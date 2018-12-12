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
    Sandbox* app = new Sandbox(); // Must be the first line of the main fuction
    
    
    VP_ERROR("Hello!");
    app->Run();
    delete app;
}
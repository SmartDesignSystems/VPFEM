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
    Sandbox* app = new Sandbox();
    app->Run();
    delete app;
}
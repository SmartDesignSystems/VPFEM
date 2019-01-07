#include <Vpfem.h>

class Sandbox : public Vpfem::Application
{
public:
    Sandbox()
    {
        // Build the Model space 
        int dimensions = 2;
        int degreeOfFreedom = 2;
        ModelBuilder(dimensions, degreeOfFreedom);
        Node(1.0,2.0);
        ModelBuild();

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
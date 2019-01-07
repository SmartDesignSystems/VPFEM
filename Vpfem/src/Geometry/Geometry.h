#pragma once 

namespace Vpfem {
    class Geometry
    {
    public:
    // host variables
    // Nodes
        size_t h_numberOfNodes;
        std::vector<double> h_xVector;
        std::vector<double> h_yVector;
    // Loads
        std::vector<double> h_LoadVector_value;
        std::vector<unsigned int> h_LoadVector_dof_i;
    //

    // Device Variabels

        
    public:
        Geometry();
        ~Geometry();
        void ModelBuild();

        // Nodes
        void Node2D(double, double); // 2D - no mass

        // Loads
        //void PointLoad(int, std::vector<double &>, int);
    };
    
    /*
    // Load class
    class Load : public Geometry
    {
    public:
    public:
        Laod();
        ~Load();
        void point(int, double, double);
    };
    */
}
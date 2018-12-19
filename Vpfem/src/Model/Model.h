#pragma once 

namespace Vpfem {
    class Model
    {
    public:
        int m_modelDimensions;
        int m_modelDegreeOfFreedom;
    public:
        Model(int, int);
        ~Model();

        std::string ToString() const;
    };
}
#pragma once 

namespace Vpfem {
    class Model
    {
    private:
        int m_modelDimensions;
        int m_modelDegreeOfFreedom;
    public:
        Model(int, int);
        ~Model();
        std::string ToString() const;

        inline int get_dimentions() {return m_modelDimensions;};
    };
}
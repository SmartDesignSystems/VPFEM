#pragma once 

namespace Vpfem {
    class Model
    {
    private:
        size_t m_modelDimensions;
        size_t m_modelDegreeOfFreedom;
    public:
        Model(int, int);
        ~Model();
        std::string ToString() const;

        inline size_t get_dimentions() {return m_modelDimensions;};
        inline size_t get_degreeOfFreedom() {return m_modelDegreeOfFreedom;};
    };
}
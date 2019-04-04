#include "vppch.h"

#include "src/Log/Log.h"
#include "src/Core.h"
#include "Model.h"

namespace Vpfem {
    Model::Model(int dimensions, int degreeOfFreedom) 
    : m_modelDimensions(dimensions), m_modelDegreeOfFreedom(degreeOfFreedom)
    {   
        VP_CORE_TRACE("Model Class initilized");
        // error to make sure user is making space with 2 dimensions and 3 degrees of freedom
        if (m_modelDimensions != 2 || m_modelDegreeOfFreedom != 2) {
            VP_CORE_ERROR("Just two dimentions with two degrees of fredom is supported at the moment!");
        } else {
            VP_CORE_TRACE(ToString());
        }
    }

    std::string Model::ToString() const
    {
        std::stringstream ss;
        ss << "A space with " << m_modelDimensions << " dimensions and " << m_modelDegreeOfFreedom << " degrees of freedom is created";
        return ss.str();
    }

    Model::~Model() 
    {
        VP_CORE_TRACE("Model Class destroyed");

    }
}
#pragma once 

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"


namespace Vpfem {
    class Recorder
    {
    public:
        Recorder(const std::string& , const auto& , const int& );
        ~Recorder();

    private:
		//spdlog::logger m_Recorder;
    };
}

// Core log macros
#define VP_CORE_RECORDER(...)    ::Vpfem::Recorder::GetCoreRecorder()->trace(__VA_ARGS__)

// Client log macros
#define VP_RECORDER(...)	     ::Vpfem::Recorder::GetClientRecorder()->trace(__VA_ARGS__)

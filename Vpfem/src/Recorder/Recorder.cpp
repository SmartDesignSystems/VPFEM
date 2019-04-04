#include "vppch.h"
#include "Recorder.h"

#include "spdlog/sinks/basic_file_sink.h"

namespace Vpfem {
    Recorder::Recorder(const std::string& fileName, const auto& message, const int &type)
    {
        std::stringstream address;
        if (type == 1) // APP recorder
            address << "Sandbox/Output/" << fileName;
        else if (type == 0) // VPFEM recorder
            address << "Vpfem/Output/" << fileName;

        //auto m_Recorder = spdlog::logger("VPFEM_RECORDER");
        auto m_Recorder = spdlog::basic_logger_mt("VPFEM_RECORDER", address.str());
    	m_Recorder->set_level(spdlog::level::trace);
        m_Recorder->set_pattern("%v%$");
        m_Recorder->trace(message);
    }

    Recorder::~Recorder()
    {

    }

}
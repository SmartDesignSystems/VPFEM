#pragma once 

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"


namespace Vpfem {
    class Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
    private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

// Core log macros
#define VP_CORE_TRACE(...)    ::Vpfem::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VP_CORE_INFO(...)     ::Vpfem::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VP_CORE_WARN(...)     ::Vpfem::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VP_CORE_ERROR(...)    ::Vpfem::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VP_CORE_FATAL(...)    ::Vpfem::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define VP_TRACE(...)	      ::Vpfem::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VP_INFO(...)	      ::Vpfem::Log::GetClientLogger()->info(__VA_ARGS__)
#define VP_WARN(...)	      ::Vpfem::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VP_ERROR(...)	      ::Vpfem::Log::GetClientLogger()->error(__VA_ARGS__)
#define VP_FATAL(...)	      ::Vpfem::Log::GetClientLogger()->fatal(__VA_ARGS__)
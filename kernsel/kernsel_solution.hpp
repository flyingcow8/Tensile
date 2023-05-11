#pragma once

#include <string>

namespace Kernsel
{

    class KernselSolution
    {

    public:
        explicit KernselSolution(const char* name)
            : kernel_name_(name)
        {
        }

        KernselSolution(const KernselSolution& other)            = delete;
        
        KernselSolution& operator=(const KernselSolution& other) = delete;
        
        std::string      kernel_name() const
        {
            return kernel_name_;
        }

    private:
        std::string kernel_name_;
    };
}
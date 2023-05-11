#pragma once

#include "kernsel_solution.hpp"
#include <memory>
#include <vector>
#include "kernsel_data_type.hpp"

namespace Kernsel
{

    struct ProblemType
    {
        std::string operationIdentifier;
        DataType    aType                   = DataType::Float;
        DataType    bType                   = DataType::Float;
        DataType    cType                   = DataType::Float;
        DataType    dType                   = DataType::Float;
        bool        highPrecisionAccumulate = false;
        bool        useBeta                 = true;
        bool        useInitialStridesAB     = false;
        bool        useInitialStridesCD     = false;
        bool        stridedBatched          = true;
    };

    class MasterLibrary
    {
    public:
        static MasterLibrary& get_instance()
        {
            static MasterLibrary instance;
            return instance;
        }

        void init()
        {
            // Implementation here
        }

    private:
        // Private constructor to prevent direct instantiation
        MasterLibrary()
        {
            // Initialization code here
        }

        // Private destructor to prevent deletion through pointers
        ~MasterLibrary()
        {
            // Cleanup code here
        }

        // Private copy constructor and assignment operator to prevent cloning
        MasterLibrary(const MasterLibrary&)            = delete;
        MasterLibrary& operator=(const MasterLibrary&) = delete;

        std::vector<std::shared_ptr<KernselSolution>> solutions_;
    };

}
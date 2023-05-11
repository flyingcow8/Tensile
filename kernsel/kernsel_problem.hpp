#pragma once

#include "kernsel_data_type.hpp"
#include <cstddef>
#include <unordered_map>
#include <vector>

namespace Kernsel
{

    class GemmProblem
    {
    public:
        GemmProblem(bool     transA,
                    bool     transB,
                    DataType aType,
                    DataType bType,
                    DataType cType,
                    bool     use_beta,
                    int      splitk)
            : transA_(transA)
            , transB_(transB)
            , aType_(aType)
            , bType_(bType)
            , cType_(cType)
            , use_beta_(use_beta)
            , splitk_(splitk)
        {
        }

        void insert_solution(std::vector<int> const& key, int value)
        {
            solution_map_.insert({key, value});
        }

    private:
        bool                                      transA_;
        bool                                      transB_;
        DataType                                  aType_;
        DataType                                  bType_;
        DataType                                  cType_;
        bool                                      use_beta_;
        int                                       splitk_;
        std::unordered_map<std::vector<int>, int> solution_map_;
    };
}
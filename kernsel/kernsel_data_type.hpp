#pragma once

namespace Kernsel
{
    enum class DataType : int
    {
        Float,
        Double,
        ComplexFloat,
        ComplexDouble,
        Half,
        Int8x4,
        Int32,
        BFloat16,
        Int8,
        Count,
        None = Count
    };
}
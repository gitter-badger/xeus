/***************************************************************************
* Copyright (c) 2016, Johan Mabille and Sylvain Corlay                     *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#ifndef XSTRING_UTILS_HPP
#define XSTRING_UTILS_HPP

#include <array>
#include <string>
#include <sstream>
#include <iomanip>

namespace xeus
{

    template <class T, size_t N>
    inline std::string hex_string(const std::array<T, N>& buffer)
    {
        std::ostringstream oss;
        oss << std::hex;
        for (size_t i = 0; i < N; ++i)
        {
            oss << std::setw(2) << std::setfill('0') << static_cast<int>(buffer[i]);
        }
        return oss.str();
    }

}

#endif

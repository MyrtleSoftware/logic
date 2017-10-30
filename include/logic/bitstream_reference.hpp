/* Copyright 2017 Tymoteusz Blazejczyk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LOGIC_BITSTREAM_REFERENCE_HPP
#define LOGIC_BITSTREAM_REFERENCE_HPP

#include <cstddef>

namespace logic {

class bitstream_reference {
public:
    using size_type = std::size_t;
    using pointer = void*;

    bitstream_reference(pointer bits, size_type index) noexcept;

    bitstream_reference(bitstream_reference&& other) noexcept = default;

    bitstream_reference(const bitstream_reference& other) noexcept = default;

    bitstream_reference& operator=(
            bitstream_reference&& other) noexcept = default;

    bitstream_reference& operator=(
            const bitstream_reference& other) noexcept = default;

    bitstream_reference& operator=(bool value) noexcept;

    operator bool() const noexcept;
private:
    pointer m_bits;
    size_type m_index;
};

}

#endif /* LOGIC_BITSTREAM_REFERENCE_HPP */
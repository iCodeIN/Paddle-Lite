// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include <functional>

namespace paddle {
namespace lite {

// A simplified implementation of boost::hash_combine.
template <typename T>
inline void CombineHash(const T& from, size_t* to) {
  std::hash<T> h;
  *to ^= h(from) + 0x9e3779b9 + (*to << 6) + (*to >> 2);
}

}  // namespace lite
}  // namespace paddle

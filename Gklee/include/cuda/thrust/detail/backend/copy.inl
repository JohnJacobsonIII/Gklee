/*
 *  Copyright 2008-2012 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


#pragma once

#include <thrust/detail/backend/dispatch/copy.h>
#include <thrust/iterator/iterator_traits.h>
#include <thrust/iterator/detail/minimum_space.h>

namespace thrust
{
namespace detail
{
namespace backend
{

template<typename InputIterator,
         typename OutputIterator>
  OutputIterator copy(InputIterator  first, 
                      InputIterator  last, 
                      OutputIterator result)
{
  return thrust::detail::backend::dispatch::copy(first, last, result);
}

template<typename InputIterator,
         typename Size,
         typename OutputIterator>
  OutputIterator copy_n(InputIterator  first, 
                        Size n, 
                        OutputIterator result)
{
  return thrust::detail::backend::dispatch::copy_n(first, n, result);
}

} // end namespace backend
} // end namespace detail
} // end namespace thrust

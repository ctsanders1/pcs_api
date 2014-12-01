/**
 * Copyright (c) 2014 Netheos (http://www.netheos.net)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "cpprest/asyncrt_utils.h"

#include "pcs_api/c_folder.h"

namespace pcs_api {

CFolder::CFolder(CPath path, ::boost::posix_time::ptime modif_date) :
    CFile(path, modif_date) {
}

void CFolder::DoToString(std::ostream *p_stream) const {
    *p_stream << "CFolder("
              << utility::conversions::to_utf8string(path_.path_name()) << ")";
}

bool CFolder::IsBlobType() const {
    return false;
}


}  // namespace pcs_api

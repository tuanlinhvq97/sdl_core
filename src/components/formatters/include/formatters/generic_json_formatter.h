/*
 * @file generic_json_formatter.h
 * @brief Generic JSON formatter header file.
 */
// Copyright (c) 2013, Ford Motor Company
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
//
// Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following
// disclaimer in the documentation and/or other materials provided with the
// distribution.
//
// Neither the name of the Ford Motor Company nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 'A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef SRC_COMPONENTS_FORMATTERS_INCLUDE_FORMATTERS_GENERIC_JSON_FORMATTER_H_
#define SRC_COMPONENTS_FORMATTERS_INCLUDE_FORMATTERS_GENERIC_JSON_FORMATTER_H_

#include "CFormatterJsonBase.h"

namespace ns_smart_device_link {
namespace ns_json_handler {
namespace formatters {

class GenericJsonFormatter : public CFormatterJsonBase {
 public:
  /**
   * @brief Creates a JSON string from a SmartObject.
   *
   * @param obj Input SmartObject.
   * @param out_str Resulting JSON string.
   */
  static void ToString(const ns_smart_objects::SmartObject& obj,
                       std::string& out_str);

  /**
   * @brief Creates a SmartObject from a JSON string.
   *
   * @param str input JSON string.
   * @param out The resulting SmartObject.
   *
   * @return true if success, false otherwise.
   */
  static bool FromString(const std::string& str,
                         ns_smart_objects::SmartObject& out);
};

}  // namespace formatters
}  // namespace ns_json_handler
}  // namespace ns_smart_device_link

#endif  // SRC_COMPONENTS_FORMATTERS_INCLUDE_FORMATTERS_GENERIC_JSON_FORMATTER_H_

﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/accessanalyzer/model/AnalyzerStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace AnalyzerStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AnalyzerStatus GetAnalyzerStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AnalyzerStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return AnalyzerStatus::CREATING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AnalyzerStatus::DISABLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AnalyzerStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyzerStatus>(hashCode);
          }

          return AnalyzerStatus::NOT_SET;
        }

        Aws::String GetNameForAnalyzerStatus(AnalyzerStatus enumValue)
        {
          switch(enumValue)
          {
          case AnalyzerStatus::ACTIVE:
            return "ACTIVE";
          case AnalyzerStatus::CREATING:
            return "CREATING";
          case AnalyzerStatus::DISABLED:
            return "DISABLED";
          case AnalyzerStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyzerStatusMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws

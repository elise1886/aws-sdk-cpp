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

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/OrganizationNode.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult
  {
  public:
    ListOrganizationPortfolioAccessResult();
    ListOrganizationPortfolioAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOrganizationPortfolioAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline const Aws::Vector<OrganizationNode>& GetOrganizationNodes() const{ return m_organizationNodes; }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline void SetOrganizationNodes(const Aws::Vector<OrganizationNode>& value) { m_organizationNodes = value; }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline void SetOrganizationNodes(Aws::Vector<OrganizationNode>&& value) { m_organizationNodes = std::move(value); }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithOrganizationNodes(const Aws::Vector<OrganizationNode>& value) { SetOrganizationNodes(value); return *this;}

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithOrganizationNodes(Aws::Vector<OrganizationNode>&& value) { SetOrganizationNodes(std::move(value)); return *this;}

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& AddOrganizationNodes(const OrganizationNode& value) { m_organizationNodes.push_back(value); return *this; }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& AddOrganizationNodes(OrganizationNode&& value) { m_organizationNodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<OrganizationNode> m_organizationNodes;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws

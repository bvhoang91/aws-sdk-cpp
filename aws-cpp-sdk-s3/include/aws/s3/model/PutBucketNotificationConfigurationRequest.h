/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/NotificationConfiguration.h>

namespace Aws
{
namespace S3
{
namespace Model
{

  /*
  */
  class AWS_S3_API PutBucketNotificationConfigurationRequest : public S3Request
  {
  public:
    PutBucketNotificationConfigurationRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    
    inline void SetBucket(const Aws::String& value) { m_bucket = value; }

    
    inline void SetBucket(const char* value) { m_bucket.assign(value); }

    
    inline PutBucketNotificationConfigurationRequest&  WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    
    inline PutBucketNotificationConfigurationRequest& WithBucket(const char* value) { SetBucket(value); return *this;}

    
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }
    
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfiguration = value; }

    
    inline PutBucketNotificationConfigurationRequest&  WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

  private:
    Aws::String m_bucket;
    NotificationConfiguration m_notificationConfiguration;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
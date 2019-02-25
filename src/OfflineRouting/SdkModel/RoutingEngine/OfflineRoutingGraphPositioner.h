// Copyright eeGeo Ltd (2012-2019), All Rights Reserved

#pragma once

#include "OfflineRouting.h"
#include "IOfflineRoutingGraphPositioner.h"
#include "VectorMath.h"
#include "Interiors.h"
#include "Types.h"

#include <vector>

namespace ExampleApp
{
    namespace OfflineRouting
    {
        namespace SdkModel
        {
            namespace RoutingEngine
            {
                class OfflineRoutingGraphPositioner : public IOfflineRoutingGraphPositioner, private Eegeo::NonCopyable
                {
                public:
                    OfflineRoutingGraphPositioner(const IOfflineRoutingDataRepository& offlineRoutingDataRepository);
                    ~OfflineRoutingGraphPositioner() {}

                    OfflineRoutingPointOnGraph FindPointOnGraph(const Eegeo::dv3& point,
                                                                const Eegeo::Resources::Interiors::InteriorId& interiorId,
                                                                const int floorId,
                                                                const double maxDistance) override;

                private:
                    const IOfflineRoutingDataRepository& m_offlineRoutingDataRepository;
                };
            }
        }
    }
}

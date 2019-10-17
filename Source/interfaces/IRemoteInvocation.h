#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

    struct IRemoteInvocation : virtual public Core::IUnknown {

        enum { ID = ID_REMOTEINVOCATION };

        virtual ~IRemoteInvocation() {}

        virtual Core::IUnknown* Root(const string& targetMachine, const uint32_t waitTime, const string className, const uint32_t interface, const uint32_t version) = 0;

        template<typename INTERFACE>
        INTERFACE* Root(const string& targetMachine, const uint32_t waitTime, const string className, const uint32_t version = ~0) {
            INTERFACE* result = nullptr;

            void* baseInterface(Root(targetMachine, waitTime, className, INTERFACE::ID, version));

            if (baseInterface != nullptr) {
                result = reinterpret_cast<INTERFACE*>(baseInterface);
            }

            return result;
        }
    };
}
}

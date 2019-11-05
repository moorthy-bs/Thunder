#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

    struct IMinimalPlugin : virtual public Core::IUnknown {

        enum { ID = ID_MINIMALPLUGIN };

        virtual ~IMinimalPlugin() {}

        virtual uint32_t Greet(const string& name, string& greeting /* @out */) = 0;

    };
}
}

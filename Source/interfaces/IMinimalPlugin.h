#pragma once

#include "Module.h"

namespace WPEFramework {
namespace Exchange {

    struct IMinimalPlugin : virtual public Core::IUnknown {

        enum { ID = ID_MINIMALPLUGIN };

        virtual ~IMinimalPlugin() {}

        virtual string Greet(const string& name) = 0;

    };
}
}

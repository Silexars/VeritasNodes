#pragma once

#include <string>

namespace Veritas {
    namespace Nodes {
        class Input {
            public:
                Input(const std::string& name);

                const std::string& name() const;
            private:
                std::string pname;
        };
    }
}

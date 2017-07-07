#pragma once

#include <string>

namespace Veritas {
    namespace Nodes {
        class Output {
            public:
                Output(const std::string& name);

                const std::string& name() const;
            private:
                std::string pname;
        };
    }
}

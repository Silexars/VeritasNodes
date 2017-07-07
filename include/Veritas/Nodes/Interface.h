#pragma once

#include <Veritas/Nodes/Node.h>
#include <Veritas/Nodes/Input.h>
#include <Veritas/Nodes/Output.h>

namespace Veritas {
    namespace Nodes {
        class Interface {
            public:
                Output* output() const;
                Input* input() const;
            private:
                friend class Runtime;
                Interface(Output* output, Input* input);
                Interface(Input* input, Output* output);

                Output *poutput;
                Input *pinput;
        };
    }
}

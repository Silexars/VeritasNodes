#pragma once

#include <string>
#include <map>

#include <Veritas/Nodes/Input.h>
#include <Veritas/Nodes/Output.h>

namespace Veritas {
    namespace Nodes {
        class NodeClass {
            public:
                typedef std::map<std::string, Input*> Inputs;
                typedef std::map<std::string, Output*> Outputs;

                NodeClass(const std::string& name);
                ~NodeClass();

                const std::string& getName() const;
                const Inputs& inputs() const;
                const Outputs& outputs() const;
            protected:
                void add(Output* output);
                void add(Input* input);
            private:
                const std::string name;
                Inputs pinputs;
                Outputs poutputs;
        };
    }
}

#pragma once

#include <string>
#include <map>

#include <Veritas/Nodes/NodeClass.h>
#include <Veritas/Nodes/Input.h>
#include <Veritas/Nodes/Output.h>

namespace Veritas {
    namespace Nodes {
        class Node {
            public:
                typedef std::map<std::string, Input*> Inputs;
                typedef std::map<std::string, Output*> Outputs;

                const NodeClass& getClass() const;
                const Inputs& inputs() const;
                const Outputs& outputs() const;

                Input* input(const std::string& name);
                Output* output(const std::string& name);
            private:
                friend class Runtime;

                Node(const NodeClass& nodeClass);
                ~Node();
                const NodeClass& nodeClass;
                Inputs pinputs;
                Outputs poutputs;
        };
    }
}

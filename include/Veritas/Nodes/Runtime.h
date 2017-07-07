#pragma once

#include <Veritas/Nodes/Node.h>
#include <Veritas/Nodes/NodeClass.h>
#include <Veritas/Nodes/Interface.h>

#include <list>
#include <map>

namespace Veritas {
    namespace Nodes {
        class Runtime {
            public:
                typedef std::map<std::string, const NodeClass*> NodeClasses;
                typedef std::list<Node*> Nodes;
                typedef std::list<Interface*> Interfaces;

                ~Runtime();

                void flow(Node* node);

                void add(const NodeClass* nodeClass);
                Node* node(const std::string& nodeClassName);
                Interface* interface(Output *output, Input *input);
                Interface* interface(Input *input, Output *output);

                void run();
            private:
                NodeClasses nodeClasses;
                Interfaces interfaces;
                Nodes nodes;
        };
    }
}

#include <Veritas/Nodes/Runtime.h>

using namespace Veritas;
using namespace Nodes;

using namespace std;

Runtime::~Runtime() {
    for (auto nodeClass : nodeClasses) delete nodeClass.second;
    for (auto interface : interfaces) delete interface;
    for (auto node : nodes) delete node;
}

void Runtime::add(const NodeClass *nodeClass) { nodeClasses[nodeClass->getName()] = nodeClass; }

Node *Runtime::node(const string& nodeClassName) {
    const NodeClass* nodeClass = nodeClasses[nodeClassName];
    if (nodeClass) {
        Node* node = new Node(*nodeClass);
        nodes.push_back(node);
        return node;
    } else return 0;
}

Interface* Runtime::interface(Input *input, Output *output) { return interface(output, input); }
Interface* Runtime::interface(Output *output, Input *input) {
    if (input && output) {
        Interface* interface = new Interface(output, input);
        interfaces.push_back(interface);
        return interface;
    } return 0;
}


void Runtime::flow(Node *node) {
    //std::cout << node->getClass
}

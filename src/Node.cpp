#include <Veritas/Nodes/Node.h>

using namespace Veritas;
using namespace Nodes;

using namespace std;

Node::Node(const NodeClass& nodeClass)
    : nodeClass(nodeClass)
{
    pinputs = nodeClass.inputs();
    poutputs = nodeClass.outputs();
}

Node::~Node() {
    for (auto output : poutputs) delete output.second;
    for (auto input : pinputs) delete input.second;
}

Input* Node::input(const string &name) { return pinputs[name]; }
Output* Node::output(const string &name) { return poutputs[name]; }

const NodeClass& Node::getClass() const { return nodeClass; }
const Node::Outputs& Node::outputs() const { return poutputs; }
const Node::Inputs& Node::inputs() const { return pinputs; }

#include <Veritas/Nodes/NodeClass.h>

using namespace Veritas;
using namespace Nodes;

using namespace std;

NodeClass::NodeClass(const string &name) : name(name) {}
NodeClass::~NodeClass() {
    for (auto input : pinputs) delete input.second;
    for (auto output : poutputs) delete output.second;
}

const string& NodeClass::getName() const { return name; }

const NodeClass::Outputs& NodeClass::outputs() const { return poutputs; }
const NodeClass::Inputs& NodeClass::inputs() const { return pinputs; }

void NodeClass::add(Output *output) {
    poutputs[output->name()] = output;
}

void NodeClass::add(Input* input) {
    pinputs[input->name()] = input;
}

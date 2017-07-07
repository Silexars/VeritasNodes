#include <Veritas/Nodes/Output.h>

using namespace Veritas::Nodes;

using namespace std;

Output::Output(const string& name) : pname(name) {}

const string& Output::name() const { return pname; }

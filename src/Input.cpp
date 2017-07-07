#include <Veritas/Nodes/Input.h>

using namespace Veritas::Nodes;

using namespace std;

Input::Input(const string& name) : pname(name) {}

const string& Input::name() const { return pname; }

#include <Veritas/Nodes/Interface.h>

using namespace Veritas;
using namespace Nodes;

Interface::Interface(Input *input, Output *output) : Interface(output, input) {}
Interface::Interface(Output *output, Input *input)
    : poutput(output)
    , pinput(input)
{}

Input* Interface::input() const { return pinput; }
Output* Interface::output() const { return poutput; }

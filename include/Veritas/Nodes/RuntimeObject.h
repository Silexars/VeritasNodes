#pragma once

namespace Veritas {
    namespace Nodes {
        class Runtime;
        class RuntimeObject {
            public:
                RuntimeObject(Runtime& runtime);
                ~RuntimeObject();

                Runtime& getRuntime();
            private:
                Runtime& runtime;
        };
    }
}


#include <string>

    class ShellEnv {
        std::string m_currPath = ".";

        ShellEnv() = default;

    public:
        static ShellEnv& getInstance() {
            static ShellEnv instance;
            return instance;
        }

        std::string getCurrentPath() const {
            return m_currPath;
        }

        void setCurrentPath(const std::string& path) {
            m_currPath = path;
        }

        ShellEnv(const ShellEnv&) = delete;
        void operator=(const ShellEnv&) = delete;
    };



//#ifndef __SHELL_ENV_H__
//#define __SHELL_ENV_H__

//#include "CommonHeaders.h"
////#include "ShellErrors.h"
//
//
////namespace MyShell
////{
//	class CShellEnv
//	{
//		//private:
//
//		//	// Current shell environment
//		//	std::string m_env;
//
//		//	// All the shell variables for quick lookup
//		//	std::map<std::string, std::string> m_vars;
//
//		//};
//
//	public:
//		std::string getCurrentDirectory();
//	};
////};
#pragma once
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


/*#endif	*/	/* __SHELL_ENV_H__ */

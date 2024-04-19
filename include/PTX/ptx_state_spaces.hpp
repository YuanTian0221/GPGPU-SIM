#ifndef PTX_STATE_SPACES_HPP
#define PTX_STATE_SPACES_HPP

#include <string>

namespace PTX {
    namespace StateSpaces {
        const std::string reg = ".reg";
        const std::string sreg = ".sreg";
        const std::string const_ = ".const";
        const std::string global = ".global";
        const std::string local = ".local";
        const std::string param = ".param";
        const std::string shared = ".shared";
        const std::string tex = ".tex";
    }
}

#endif // PTX_STATE_SPACES_HPP

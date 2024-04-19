#ifndef PTX_DIRECTIVES_HPP
#define PTX_DIRECTIVES_HPP

#include <string>

namespace PTX {
    namespace Directives {
        const std::string address_size = ".address_size";
        const std::string explicitcluster = ".explicitcluster";
        const std::string maxnreg = ".maxnreg";
        const std::string section = ".section";
        const std::string alias = ".alias";
        const std::string extern_ = ".extern";
        const std::string maxntid = ".maxntid";
        const std::string shared = ".shared";
        const std::string align = ".align";
        const std::string file = ".file";
        const std::string minnctapersm = ".minnctapersm";
        const std::string sreg = ".sreg";
        const std::string branchtargets = ".branchtargets";
        const std::string func = ".func";
        const std::string noreturn = ".noreturn";
        const std::string target = ".target";
        const std::string callprototype = ".callprototype";
        const std::string global = ".global";
        const std::string param = ".param";
        const std::string tex = ".tex";
        const std::string calltargets = ".calltargets";
        const std::string loc = ".loc";
        const std::string pragma = ".pragma";
        const std::string version = ".version";
        const std::string common = ".common";
        const std::string local = ".local";
        const std::string reg = ".reg";
        const std::string visible = ".visible";
        const std::string const_ = ".const";
        const std::string maxclusterrank = ".maxclusterrank";
        const std::string reqnctapercluster = ".reqnctapercluster";
        const std::string weak = ".weak";
        const std::string entry = ".entry";
        const std::string maxnctapersm = ".maxnctapersm";
        const std::string reqntid = ".reqntid";
    }
}

#endif // PTX_DIRECTIVES_HPP

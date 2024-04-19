#ifndef PTX_PREDEFINED_IDENTIFIERS_HPP
#define PTX_PREDEFINED_IDENTIFIERS_HPP

#include <string>

namespace PTX {
    namespace PredefinedIdentifiers {
        const std::string clock = "%clock";
        const std::string laneid = "%laneid";
        const std::string lanemask_gt = "%lanemask_gt";
        const std::string pm0 = "%pm0";
        const std::string pm1 = "%pm1";
        const std::string pm2 = "%pm2";
        const std::string pm3 = "%pm3";
        const std::string pm4 = "%pm4";
        const std::string pm5 = "%pm5";
        const std::string pm6 = "%pm6";
        const std::string pm7 = "%pm7";
        const std::string clock64 = "%clock64";
        const std::string lanemask_eq = "%lanemask_eq";
        const std::string nctaid = "%nctaid";
        const std::string smid = "%smid";
        const std::string ctaid = "%ctaid";
        const std::string lanemask_le = "%lanemask_le";
        const std::string ntid = "%ntid";
        const std::string tid = "%tid";
        const std::string envreg32 = "%envreg<32>";
        const std::string lanemask_lt = "%lanemask_lt";
        const std::string nsmid = "%nsmid";
        const std::string warpid = "%warpid";
        const std::string gridid = "%gridid";
        const std::string lanemask_ge = "%lanemask_ge";
        const std::string nwarpid = "%nwarpid";
        const std::string WARP_SZ = "WARP_SZ";
    }
}

#endif // PTX_PREDEFINED_IDENTIFIERS_HPP

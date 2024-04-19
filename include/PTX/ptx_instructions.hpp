#ifndef PTX_INSTRUCTIONS_HPP
#define PTX_INSTRUCTIONS_HPP

#include <string>

namespace PTX {
    namespace Instructions {
        const std::string abs = "abs";
        const std::string discard = "discard";
        const std::string min = "min";
        const std::string shf = "shf";
        const std::string vadd = "vadd";
        const std::string activemask = "activemask";
        const std::string div = "div";
        const std::string mma = "mma";
        const std::string shfl = "shfl";
        const std::string vadd2 = "vadd2";
        const std::string add = "add";
        const std::string dp2a = "dp2a";
        const std::string mov = "mov";
        const std::string shl = "shl";
        const std::string vadd4 = "vadd4";
        const std::string addc = "addc";
        const std::string dp4a = "dp4a";
        const std::string movmatrix = "movmatrix";
        const std::string shr = "shr";
        const std::string vavrg2 = "vavrg2";
        const std::string alloca = "alloca";
        const std::string elect = "elect";
        const std::string mul = "mul";
        const std::string sin = "sin";
        const std::string vavrg4 = "vavrg4";
        const std::string and_ = "and";
        const std::string ex2 = "ex2";
        const std::string mul24 = "mul24";
        const std::string slct = "slct";
        const std::string vmad = "vmad";
        const std::string applypriority = "applypriority";
        const std::string exit = "exit";
        const std::string multimem = "multimem";
        const std::string sqrt = "sqrt";
        const std::string vmax = "vmax";
        const std::string atom = "atom";
        const std::string fence = "fence";
        const std::string nanosleep = "nanosleep";
        const std::string st = "st";
        const std::string vmax2 = "vmax2";
        const std::string bar = "bar";
        const std::string fma = "fma";
        const std::string neg = "neg";
        const std::string stackrestore = "stackrestore";
        const std::string vmax4 = "vmax4";
        const std::string barrier = "barrier";
        const std::string fns = "fns";
        const std::string not_ = "not";
        const std::string stacksave = "stacksave";
        const std::string vmin = "vmin";
        const std::string bfe = "bfe";
        const std::string getctarank = "getctarank";
        const std::string or_ = "or";
        const std::string stmatrix = "stmatrix";
        const std::string vmin2 = "vmin2";
        const std::string bfi = "bfi";
        const std::string griddepcontrol = "griddepcontrol";
        const std::string pmevent = "pmevent";
        const std::string sub = "sub";
        const std::string vmin4 = "vmin4";
        const std::string bfind = "bfind";
        const std::string isspacep = "isspacep";
        const std::string popc = "popc";
        const std::string subc = "subc";
        const std::string vote = "vote";
        const std::string bmsk = "bmsk";
        const std::string istypep = "istypep";
        const std::string prefetch = "prefetch";
        const std::string suld = "suld";
        const std::string vset = "vset";
        const std::string bra = "bra";
        const std::string ld = "ld";
        const std::string prefetchu = "prefetchu";
        const std::string suq = "suq";
        const std::string vset2 = "vset2";
        const std::string brev = "brev";
        const std::string ldmatrix = "ldmatrix";
        const std::string prmt = "prmt";
        const std::string sured = "sured";
        const std::string vset4 = "vset4";
        const std::string brkpt = "brkpt";
        const std::string ldu = "ldu";
        const std::string rcp = "rcp";
        const std::string sust = "sust";
        const std::string vshl = "vshl";
        const std::string brx = "brx";
        const std::string lg2 = "lg2";
        const std::string red = "red";
        const std::string szext = "szext";
        const std::string vshr = "vshr";
        const std::string call = "call";
        const std::string lop3 = "lop3";
        const std::string redux = "redux";
        const std::string tanh = "tanh";
        const std::string vsub = "vsub";
        const std::string clz = "clz";
        const std::string mad = "mad";
        const std::string rem = "rem";
        const std::string testp = "testp";
        const std::string vsub2 = "vsub2";
        const std::string cnot = "cnot";
        const std::string mad24 = "mad24";
        const std::string ret = "ret";
        const std::string tex = "tex";
        const std::string vsub4 = "vsub4";
        const std::string copysign = "copysign";
        const std::string madc = "madc";
        const std::string rsqrt = "rsqrt";
        const std::string tld4 = "tld4";
        const std::string wgmma = "wgmma";
        const std::string cos = "cos";
        const std::string mapa = "mapa";
        const std::string sad = "sad";
        const std::string trap = "trap";
        const std::string wmma = "wmma";
        const std::string cp = "cp";
        const std::string match = "match";
        const std::string selp = "selp";
        const std::string txq = "txq";
        const std::string xor_ = "xor";
        const std::string createpolicy = "createpolicy";
        const std::string max = "max";
        const std::string set = "set";
        const std::string vabsdiff = "vabsdiff";
        const std::string cvt = "cvt";
        const std::string mbarrier = "mbarrier";
        const std::string setmaxnreg = "setmaxnreg";
        const std::string vabsdiff2 = "vabsdiff2";
        const std::string cvta = "cvta";
        const std::string membar = "membar";
        const std::string setp = "setp";
        const std::string vabsdiff4 = "vabsdiff4";
    }
}

#endif // PTX_INSTRUCTIONS_HPP
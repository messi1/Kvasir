#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonepb{    ///<Output Latch
        using Addr = Register::Address<0x4002a320,0xffff0000,0,unsigned>;
        ///Output Latch. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace Nonepbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a330,0xffff0000,0,unsigned>;
        ///Pin Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbpin{}; 
    }
    namespace Nonepbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a340,0xffff0000,0,unsigned>;
        ///Mode Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
    }
    namespace Nonepboutmd{    ///<Output Mode
        using Addr = Register::Address<0x4002a350,0xffff0000,0,unsigned>;
        ///Output Mode. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pboutmd{}; 
    }
    namespace Nonepbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a360,0xfffe0000,0,unsigned>;
        ///Drive Strength. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        ///Port Bank Weak Pull-up Enable. 
        enum class PbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PbpuenVal> pbpuen{}; 
        namespace PbpuenValC{
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbpuen)::Type,PbpuenVal::enabled> enabled{};
        }
    }
    namespace Nonepm{    ///<Port Match Value
        using Addr = Register::Address<0x4002a370,0xffff0000,0,unsigned>;
        ///Port Match Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pm{}; 
    }
    namespace Nonepmen{    ///<Port Match Enable
        using Addr = Register::Address<0x4002a380,0xffff0000,0,unsigned>;
        ///Port Match Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pmen{}; 
    }
}

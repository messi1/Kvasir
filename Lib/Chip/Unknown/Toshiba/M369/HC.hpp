#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB Host Controller (USBHC)
    namespace Nonerevision{    ///<USB Host Controller Revision Register
        using Addr = Register::Address<0x40006000,0xffffff00,0,unsigned>;
        ///REV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rev{}; 
    }
    namespace Nonecontrol{    ///<USB Host Controller Control Register
        using Addr = Register::Address<0x40006004,0xfffff800,0,unsigned>;
        ///CBSR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cbsr{}; 
        ///PLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ple{}; 
        ///IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ie{}; 
        ///CLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cle{}; 
        ///BLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ble{}; 
        ///HCFS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> hcfs{}; 
        ///IR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ir{}; 
        ///RWC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rwc{}; 
        ///RWE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rwe{}; 
    }
    namespace Nonecommandstatus{    ///<USB Host Controller Command Status Register
        using Addr = Register::Address<0x40006008,0xfffcfff0,0,unsigned>;
        ///HCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hcr{}; 
        ///CLF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clf{}; 
        ///BLF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> blf{}; 
        ///OCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ocr{}; 
        ///SOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> soc{}; 
    }
    namespace Noneinterruptstatus{    ///<USB Host Controller Interrupt Status Register
        using Addr = Register::Address<0x4000600c,0xbfffff80,0,unsigned>;
        ///SO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> so{}; 
        ///WDH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wdh{}; 
        ///SF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sf{}; 
        ///RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rd{}; 
        ///UE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ue{}; 
        ///FNO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fno{}; 
        ///RHSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rhsc{}; 
        ///OC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> oc{}; 
    }
    namespace Noneinterruptenable{    ///<USB Host Controller Interrupt Enable Register
        using Addr = Register::Address<0x40006010,0x3fffff80,0,unsigned>;
        ///SO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> so{}; 
        ///WDH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wdh{}; 
        ///SF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sf{}; 
        ///RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rd{}; 
        ///UE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ue{}; 
        ///FNO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fno{}; 
        ///RHSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rhsc{}; 
        ///OC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> oc{}; 
        ///MIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mie{}; 
    }
    namespace Noneinterruptdisable{    ///<USB Host Controller Interrupt Disable Register
        using Addr = Register::Address<0x40006014,0x3fffff80,0,unsigned>;
        ///SO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> so{}; 
        ///WDH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wdh{}; 
        ///SF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sf{}; 
        ///RD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rd{}; 
        ///UE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ue{}; 
        ///FNO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fno{}; 
        ///RHSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rhsc{}; 
        ///OC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> oc{}; 
        ///MIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mie{}; 
    }
    namespace Nonehcca{    ///<USB Host Controller Communication Area Register
        using Addr = Register::Address<0x40006018,0x000000ff,0,unsigned>;
        ///HCCA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> hcca{}; 
    }
    namespace Noneperiodcurrented{    ///<USB Host Controller Period Current ED Register
        using Addr = Register::Address<0x4000601c,0x0000000f,0,unsigned>;
        ///PCED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> pced{}; 
    }
    namespace Nonecontrolheaded{    ///<USB Host Controller Control Head ED Register
        using Addr = Register::Address<0x40006020,0x0000000f,0,unsigned>;
        ///CHED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> ched{}; 
    }
    namespace Nonecontrolcurrented{    ///<USB Host Controller Control Current ED Register
        using Addr = Register::Address<0x40006024,0x0000000f,0,unsigned>;
        ///CCED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> cced{}; 
    }
    namespace Nonebulkheaded{    ///<USB Host Controller Bulk Head ED Register
        using Addr = Register::Address<0x40006028,0x0000000f,0,unsigned>;
        ///BHED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> bhed{}; 
    }
    namespace Nonebulkcurrented{    ///<USB Host Controller Bulk Current ED Register
        using Addr = Register::Address<0x4000602c,0x0000000f,0,unsigned>;
        ///BCED
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> bced{}; 
    }
    namespace Nonedonehead{    ///<USB Host Controller Done Head Register
        using Addr = Register::Address<0x40006030,0x0000000f,0,unsigned>;
        ///DH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> dh{}; 
    }
    namespace Nonefminterval{    ///<USB Host Controller Frame Interval Register
        using Addr = Register::Address<0x40006034,0x0000c000,0,unsigned>;
        ///FI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> fi{}; 
        ///FSMPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,16),Register::ReadWriteAccess,unsigned> fsmps{}; 
        ///FIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> fit{}; 
    }
    namespace Nonefmremaining{    ///<USB Host Controller Frame Remaining Register
        using Addr = Register::Address<0x40006038,0x7fffc000,0,unsigned>;
        ///FR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> fr{}; 
        ///FRT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> frt{}; 
    }
    namespace Nonefmnumber{    ///<USB Host Controller Frame Number Register
        using Addr = Register::Address<0x4000603c,0xffff0000,0,unsigned>;
        ///FN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> fn{}; 
    }
    namespace Noneperiodstart{    ///<USB Host Controller Period Start Register
        using Addr = Register::Address<0x40006040,0xffffc000,0,unsigned>;
        ///PS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> ps{}; 
    }
    namespace Nonelsthreshold{    ///<USB Host Controller LS Threshold Register
        using Addr = Register::Address<0x40006044,0xfffff000,0,unsigned>;
        ///LST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> lst{}; 
    }
    namespace Nonerhdescriptora{    ///<USB Host Controller Root Hub Descriptor Register
        using Addr = Register::Address<0x40006048,0x00ffe000,0,unsigned>;
        ///NDP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ndp{}; 
        ///PSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> psm{}; 
        ///NPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> nps{}; 
        ///DT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dt{}; 
        ///OCPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ocpm{}; 
        ///NOCP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nocp{}; 
        ///POTPGT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> potpgt{}; 
    }
    namespace Nonerhdescriptorb{    ///<USB Host Controller Root Hub Descriptor Register
        using Addr = Register::Address<0x4000604c,0x00000000,0,unsigned>;
        ///DR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dr{}; 
        ///PPCM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ppcm{}; 
    }
    namespace Nonerhstatus{    ///<USB Host Controller Root Hub Status Register
        using Addr = Register::Address<0x40006050,0x7ffc7ffc,0,unsigned>;
        ///LPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lps{}; 
        ///OCI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oci{}; 
        ///DRWE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> drwe{}; 
        ///LPSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> lpsc{}; 
        ///OCIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ocic{}; 
        ///CRWE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> crwe{}; 
    }
    namespace Nonerhportstatus1{    ///<USB Host Controller Root Hub Port Status Register
        using Addr = Register::Address<0x40006054,0xffe0fce0,0,unsigned>;
        ///CCS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ccs{}; 
        ///PES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pes{}; 
        ///PSS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pss{}; 
        ///POCI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> poci{}; 
        ///PRS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prs{}; 
        ///PPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pps{}; 
        ///LSDA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lsda{}; 
        ///CSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> csc{}; 
        ///PESC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pesc{}; 
        ///PSSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pssc{}; 
        ///OCIC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ocic{}; 
        ///PRSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> prsc{}; 
    }
    namespace Nonebcr0{    ///<USB Host Controller Clock and Transceiver Control Register
        using Addr = Register::Address<0x40006080,0x9fffffff,0,unsigned>;
        ///OVCE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ovce{}; 
        ///TRNS_SUSP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> trnsSusp{}; 
    }
}

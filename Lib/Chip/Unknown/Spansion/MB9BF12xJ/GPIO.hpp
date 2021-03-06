#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral GPIO 
    namespace GpioPfr0{    ///< register PFR0 
        using Addr = Register::Address<0x40033000,0xffff7fe5,0x00000000,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPfr1{    ///< register PFR1 
        using Addr = Register::Address<0x40033004,0xffffffc1,0x00000000,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPfr2{    ///< register PFR2 
        using Addr = Register::Address<0x40033008,0xfffffff1,0x00000000,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPfr3{    ///< register PFR3 
        using Addr = Register::Address<0x4003300c,0xffff03ff,0x00000000,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace GpioPfr4{    ///< register PFR4 
        using Addr = Register::Address<0x40033010,0xffffff3f,0x00000000,unsigned>;
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
    }
    namespace GpioPfre{    ///< register PFRE 
        using Addr = Register::Address<0x40033038,0xfffffff2,0x00000000,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPcr0{    ///< register PCR0 
        using Addr = Register::Address<0x40033100,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr1{    ///< register PCR1 
        using Addr = Register::Address<0x40033104,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr2{    ///< register PCR2 
        using Addr = Register::Address<0x40033108,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr3{    ///< register PCR3 
        using Addr = Register::Address<0x4003310c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr4{    ///< register PCR4 
        using Addr = Register::Address<0x40033110,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcre{    ///< register PCRE 
        using Addr = Register::Address<0x40033138,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr0{    ///< register DDR0 
        using Addr = Register::Address<0x40033200,0xffff7fe5,0x00000000,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioDdr1{    ///< register DDR1 
        using Addr = Register::Address<0x40033204,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr2{    ///< register DDR2 
        using Addr = Register::Address<0x40033208,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr3{    ///< register DDR3 
        using Addr = Register::Address<0x4003320c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr4{    ///< register DDR4 
        using Addr = Register::Address<0x40033210,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdre{    ///< register DDRE 
        using Addr = Register::Address<0x40033238,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir0{    ///< register PDIR0 
        using Addr = Register::Address<0x40033300,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir1{    ///< register PDIR1 
        using Addr = Register::Address<0x40033304,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir2{    ///< register PDIR2 
        using Addr = Register::Address<0x40033308,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir3{    ///< register PDIR3 
        using Addr = Register::Address<0x4003330c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir4{    ///< register PDIR4 
        using Addr = Register::Address<0x40033310,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdire{    ///< register PDIRE 
        using Addr = Register::Address<0x40033338,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor0{    ///< register PDOR0 
        using Addr = Register::Address<0x40033400,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor1{    ///< register PDOR1 
        using Addr = Register::Address<0x40033404,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor2{    ///< register PDOR2 
        using Addr = Register::Address<0x40033408,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor3{    ///< register PDOR3 
        using Addr = Register::Address<0x4003340c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor4{    ///< register PDOR4 
        using Addr = Register::Address<0x40033410,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdore{    ///< register PDORE 
        using Addr = Register::Address<0x40033438,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioAde{    ///< register ADE 
        using Addr = Register::Address<0x40033500,0xffff8fc1,0x00000000,unsigned>;
        /// bitfield AN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        /// bitfield AN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        /// bitfield AN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        /// bitfield AN5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        /// bitfield AN4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        /// bitfield AN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        /// bitfield AN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        /// bitfield AN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
    }
    namespace GpioSpsr{    ///< register SPSR 
        using Addr = Register::Address<0x40033580,0xfffffff0,0x00000000,unsigned>;
        /// bitfield MAINXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        /// bitfield SUBXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
    }
    namespace GpioEpfr00{    ///< register EPFR00 
        using Addr = Register::Address<0x40033600,0xffffff08,0x00000000,unsigned>;
        /// bitfield SUBOUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        /// bitfield RTCCOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        /// bitfield CROUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        /// bitfield NMIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
    }
    namespace GpioEpfr01{    ///< register EPFR01 
        using Addr = Register::Address<0x40033604,0x0000e000,0x00000000,unsigned>;
        /// bitfield IC03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        /// bitfield IC02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        /// bitfield IC01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        /// bitfield IC00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        /// bitfield FRCK0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        /// bitfield DTTI0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        /// bitfield DTTI0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        /// bitfield RTO05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        /// bitfield RTO04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        /// bitfield RTO03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        /// bitfield RTO02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        /// bitfield RTO01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        /// bitfield RTO00E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
    }
    namespace GpioEpfr02{    ///< register EPFR02 
        using Addr = Register::Address<0x40033608,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr03{    ///< register EPFR03 
        using Addr = Register::Address<0x4003360c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr04{    ///< register EPFR04 
        using Addr = Register::Address<0x40033610,0xc0c3c083,0x00000000,unsigned>;
        /// bitfield TIOB3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        /// bitfield TIOA3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        /// bitfield TIOA3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        /// bitfield TIOB2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        /// bitfield TIOA2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        /// bitfield TIOB1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        /// bitfield TIOA1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        /// bitfield TIOA1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        /// bitfield TIOB0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        /// bitfield TIOA0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
    }
    namespace GpioEpfr05{    ///< register EPFR05 
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0x00000000,unsigned>;
        /// bitfield TIOB7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        /// bitfield TIOA7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        /// bitfield TIOA7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        /// bitfield TIOB6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        /// bitfield TIOA6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        /// bitfield TIOB5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        /// bitfield TIOA5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        /// bitfield TIOA5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        /// bitfield TIOB4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        /// bitfield TIOA4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
    }
    namespace GpioEpfr06{    ///< register EPFR06 
        using Addr = Register::Address<0x40033618,0xcfff0f0f,0x00000000,unsigned>;
        /// bitfield EINT14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        /// bitfield EINT07S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        /// bitfield EINT06S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        /// bitfield EINT03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        /// bitfield EINT02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
    }
    namespace GpioEpfr07{    ///< register EPFR07 
        using Addr = Register::Address<0x4003361c,0xffc0000f,0x00000000,unsigned>;
        /// bitfield SCK2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        /// bitfield SOT2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        /// bitfield SIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        /// bitfield SCK1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        /// bitfield SOT1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        /// bitfield SIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        /// bitfield SCK0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        /// bitfield SOT0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        /// bitfield SIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
    }
    namespace GpioEpfr08{    ///< register EPFR08 
        using Addr = Register::Address<0x40033620,0xffff03ff,0x00000000,unsigned>;
        /// bitfield SCK5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        /// bitfield SOT5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        /// bitfield SIN5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
    }
    namespace GpioEpfr09{    ///< register EPFR09 
        using Addr = Register::Address<0x40033624,0xffff003f,0x00000000,unsigned>;
        /// bitfield ADTRG0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        /// bitfield QZIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        /// bitfield QBIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        /// bitfield QAIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
    }
    namespace GpioEpfr10{    ///< register EPFR10 
        using Addr = Register::Address<0x40033628,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr11{    ///< register EPFR11 
        using Addr = Register::Address<0x4003362c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr12{    ///< register EPFR12 
        using Addr = Register::Address<0x40033630,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr13{    ///< register EPFR13 
        using Addr = Register::Address<0x40033634,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr14{    ///< register EPFR14 
        using Addr = Register::Address<0x40033638,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr15{    ///< register EPFR15 
        using Addr = Register::Address<0x4003363c,0xffffff0f,0x00000000,unsigned>;
        /// bitfield EINT19S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        /// bitfield EINT18S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
    }
    namespace GpioEpfr16{    ///< register EPFR16 
        using Addr = Register::Address<0x40033640,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr17{    ///< register EPFR17 
        using Addr = Register::Address<0x40033644,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr18{    ///< register EPFR18 
        using Addr = Register::Address<0x40033648,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr1{    ///< register PZR1 
        using Addr = Register::Address<0x40033704,0xffffffc1,0x00000000,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPzr2{    ///< register PZR2 
        using Addr = Register::Address<0x40033708,0xfffffff1,0x00000000,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
}

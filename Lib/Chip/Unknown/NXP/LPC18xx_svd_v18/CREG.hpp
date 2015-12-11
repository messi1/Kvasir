#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Configuration Registers (CREG) Modification date=8/19/2011 Major revision=0 Minor revision=14 
    namespace Noneirctrm{    ///<IRC trim register
        using Addr = Register::Address<0x40043000,0xfffff000,0,unsigned>;
        ///IRC trim value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> trm{}; 
        namespace TrmValC{
        }
    }
    namespace Nonecreg0{    ///<Chip configuration register 32 kHz oscillator output and BOD control register.
        using Addr = Register::Address<0x40043004,0xfffc3010,0,unsigned>;
        ///Enable 1 kHz output.
        enum class En1khzVal {
            v1KhzOutputDisable=0x00000000,     ///<1 kHz output disabled.
            v1KhzOutputEnabled=0x00000001,     ///<1 kHz output enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,En1khzVal> en1khz{}; 
        namespace En1khzValC{
            constexpr Register::FieldValue<decltype(en1khz),En1khzVal::v1KhzOutputDisable> v1KhzOutputDisable{};
            constexpr Register::FieldValue<decltype(en1khz),En1khzVal::v1KhzOutputEnabled> v1KhzOutputEnabled{};
        }
        ///Enable 32 kHz output
        enum class En32khzVal {
            v32KhzOutputDisabl=0x00000000,     ///<32 kHz output disabled.
            v32KhzOutputEnable=0x00000001,     ///<32 kHz output enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,En32khzVal> en32khz{}; 
        namespace En32khzValC{
            constexpr Register::FieldValue<decltype(en32khz),En32khzVal::v32KhzOutputDisabl> v32KhzOutputDisabl{};
            constexpr Register::FieldValue<decltype(en32khz),En32khzVal::v32KhzOutputEnable> v32KhzOutputEnable{};
        }
        ///32 kHz oscillator reset
        enum class Reset32khzVal {
            tbd=0x00000000,     ///<TBD
            tbd=0x00000001,     ///<TBD
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Reset32khzVal> reset32khz{}; 
        namespace Reset32khzValC{
            constexpr Register::FieldValue<decltype(reset32khz),Reset32khzVal::tbd> tbd{};
            constexpr Register::FieldValue<decltype(reset32khz),Reset32khzVal::tbd> tbd{};
        }
        ///32 kHz power control.
        enum class 32khzpdVal {
            on=0x00000000,     ///<32 kHz oscillator powered.
            off=0x00000001,     ///<32 kHz oscillator powered-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,32khzpdVal> 32khzpd{}; 
        namespace 32khzpdValC{
            constexpr Register::FieldValue<decltype(32khzpd),32khzpdVal::on> on{};
            constexpr Register::FieldValue<decltype(32khzpd),32khzpdVal::off> off{};
        }
        ///USB0 PHY power control.
        enum class Usb0phyVal {
            on=0x00000000,     ///<USB0 PHY powered.
            off=0x00000001,     ///<USB0 PHY powered down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Usb0phyVal> usb0phy{}; 
        namespace Usb0phyValC{
            constexpr Register::FieldValue<decltype(usb0phy),Usb0phyVal::on> on{};
            constexpr Register::FieldValue<decltype(usb0phy),Usb0phyVal::off> off{};
        }
        ///RTC_ALARM pin output control
        enum class AlarmctrlVal {
            rtcAlarm=0x00000000,     ///<RTC alarm.
            eventRouterEvent=0x00000001,     ///<Event router event.
            inactive=0x00000003,     ///<Inactive.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,AlarmctrlVal> alarmctrl{}; 
        namespace AlarmctrlValC{
            constexpr Register::FieldValue<decltype(alarmctrl),AlarmctrlVal::rtcAlarm> rtcAlarm{};
            constexpr Register::FieldValue<decltype(alarmctrl),AlarmctrlVal::eventRouterEvent> eventRouterEvent{};
            constexpr Register::FieldValue<decltype(alarmctrl),AlarmctrlVal::inactive> inactive{};
        }
        ///BOD trip level to generate an interrupt.
        enum class Bodlvl1Val {
            v275V=0x00000000,     ///<2.75 V
            v285V=0x00000001,     ///<2.85 V
            v295V=0x00000002,     ///<2.95 V
            v305V=0x00000003,     ///<3.05 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Bodlvl1Val> bodlvl1{}; 
        namespace Bodlvl1ValC{
            constexpr Register::FieldValue<decltype(bodlvl1),Bodlvl1Val::v275V> v275V{};
            constexpr Register::FieldValue<decltype(bodlvl1),Bodlvl1Val::v285V> v285V{};
            constexpr Register::FieldValue<decltype(bodlvl1),Bodlvl1Val::v295V> v295V{};
            constexpr Register::FieldValue<decltype(bodlvl1),Bodlvl1Val::v305V> v305V{};
        }
        ///BOD trip level to generate a reset.
        enum class Bodlvl2Val {
            v170V=0x00000000,     ///<1.70 V
            v180V=0x00000001,     ///<1.80 V
            v190V=0x00000002,     ///<1.90 V
            v200V=0x00000003,     ///<2.00 V
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Bodlvl2Val> bodlvl2{}; 
        namespace Bodlvl2ValC{
            constexpr Register::FieldValue<decltype(bodlvl2),Bodlvl2Val::v170V> v170V{};
            constexpr Register::FieldValue<decltype(bodlvl2),Bodlvl2Val::v180V> v180V{};
            constexpr Register::FieldValue<decltype(bodlvl2),Bodlvl2Val::v190V> v190V{};
            constexpr Register::FieldValue<decltype(bodlvl2),Bodlvl2Val::v200V> v200V{};
        }
        ///WAKEUP0 pin input/output control
        enum class Wakeup0ctrlVal {
            inputToEventRoute=0x00000000,     ///<Input to event router.
            eventRouterEventO=0x00000001,     ///<Event router event output.
            inputToEventRoute=0x00000003,     ///<Input to event router.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Wakeup0ctrlVal> wakeup0ctrl{}; 
        namespace Wakeup0ctrlValC{
            constexpr Register::FieldValue<decltype(wakeup0ctrl),Wakeup0ctrlVal::inputToEventRoute> inputToEventRoute{};
            constexpr Register::FieldValue<decltype(wakeup0ctrl),Wakeup0ctrlVal::eventRouterEventO> eventRouterEventO{};
            constexpr Register::FieldValue<decltype(wakeup0ctrl),Wakeup0ctrlVal::inputToEventRoute> inputToEventRoute{};
        }
        ///WAKEUP1 pin input/output control
        enum class Wakeup1ctrlVal {
            inputToEventRoute=0x00000000,     ///<Input to event router.
            eventRouterEventO=0x00000001,     ///<Event router event output.
            inputToEventRoute=0x00000003,     ///<Input to event router.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Wakeup1ctrlVal> wakeup1ctrl{}; 
        namespace Wakeup1ctrlValC{
            constexpr Register::FieldValue<decltype(wakeup1ctrl),Wakeup1ctrlVal::inputToEventRoute> inputToEventRoute{};
            constexpr Register::FieldValue<decltype(wakeup1ctrl),Wakeup1ctrlVal::eventRouterEventO> eventRouterEventO{};
            constexpr Register::FieldValue<decltype(wakeup1ctrl),Wakeup1ctrlVal::inputToEventRoute> inputToEventRoute{};
        }
    }
    namespace Nonepmucon{    ///<Power mode control register.
        using Addr = Register::Address<0x40043008,0xffff7e00,0,unsigned>;
        ///Controls power consumption in Active and Sleep modes (see Section 9.2.1). All other values are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> pwrctrl{}; 
        namespace PwrctrlValC{
        }
        ///Dynamic power mode control. Setting this bit allows to dynamically change the power consumption in active and sleep modes (see PWRCTRL bits 8:0 in this register). If dynamic voltage control is disabled, the chip must enter deep-sleep, power-down, or deep power-down modes and wake up again for any change of PWRCTRL bits to take effect.
        enum class DynamicpwrctrlVal {
            disableDynamicPowe=0x00000000,     ///<Disable dynamic power mode control.
            enableDynamicPower=0x00000001,     ///<Enable dynamic power mode control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,DynamicpwrctrlVal> dynamicpwrctrl{}; 
        namespace DynamicpwrctrlValC{
            constexpr Register::FieldValue<decltype(dynamicpwrctrl),DynamicpwrctrlVal::disableDynamicPowe> disableDynamicPowe{};
            constexpr Register::FieldValue<decltype(dynamicpwrctrl),DynamicpwrctrlVal::enableDynamicPower> enableDynamicPower{};
        }
    }
    namespace Nonem3memmap{    ///<ARM Cortex-M3 memory mapping
        using Addr = Register::Address<0x40043100,0x00000fff,0,unsigned>;
        ///Shadow address when accessing memory at address 0x0000 0000
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> m3map{}; 
        namespace M3mapValC{
        }
    }
    namespace Nonecreg5{    ///<Chip configuration register 5. Controls JTAG access.
        using Addr = Register::Address<0x40043118,0xffffffbf,0,unsigned>;
        ///tbd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> m3tapsel{}; 
        namespace M3tapselValC{
        }
    }
    namespace Nonedmamux{    ///<DMA muxing control
        using Addr = Register::Address<0x4004311c,0x00000000,0,unsigned>;
        ///Select DMA to peripheral connection for DMA peripheral 0.
        enum class Dmamuxch0Val {
            spifi=0x00000000,     ///<SPIFI
            sctMatch2=0x00000001,     ///<SCT match 2
            t3Match1=0x00000003,     ///<T3 match 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Dmamuxch0Val> dmamuxch0{}; 
        namespace Dmamuxch0ValC{
            constexpr Register::FieldValue<decltype(dmamuxch0),Dmamuxch0Val::spifi> spifi{};
            constexpr Register::FieldValue<decltype(dmamuxch0),Dmamuxch0Val::sctMatch2> sctMatch2{};
            constexpr Register::FieldValue<decltype(dmamuxch0),Dmamuxch0Val::t3Match1> t3Match1{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 1
        enum class Dmamuxch1Val {
            timer0Match0=0x00000000,     ///<Timer 0 match 0
            usart0Transmit=0x00000001,     ///<USART0 transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Dmamuxch1Val> dmamuxch1{}; 
        namespace Dmamuxch1ValC{
            constexpr Register::FieldValue<decltype(dmamuxch1),Dmamuxch1Val::timer0Match0> timer0Match0{};
            constexpr Register::FieldValue<decltype(dmamuxch1),Dmamuxch1Val::usart0Transmit> usart0Transmit{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 2.
        enum class Dmamuxch2Val {
            timer0Match1=0x00000000,     ///<Timer 0 match 1
            usart0Receive=0x00000001,     ///<USART0 receive
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Dmamuxch2Val> dmamuxch2{}; 
        namespace Dmamuxch2ValC{
            constexpr Register::FieldValue<decltype(dmamuxch2),Dmamuxch2Val::timer0Match1> timer0Match1{};
            constexpr Register::FieldValue<decltype(dmamuxch2),Dmamuxch2Val::usart0Receive> usart0Receive{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 3.
        enum class Dmamuxch3Val {
            timer1Match0=0x00000000,     ///<Timer 1 match 0
            uart1Transmit=0x00000001,     ///<UART1 transmit
            i2s1Channel0=0x00000002,     ///<I2S1 channel 0
            ssp1Transmit=0x00000003,     ///<SSP1 transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Dmamuxch3Val> dmamuxch3{}; 
        namespace Dmamuxch3ValC{
            constexpr Register::FieldValue<decltype(dmamuxch3),Dmamuxch3Val::timer1Match0> timer1Match0{};
            constexpr Register::FieldValue<decltype(dmamuxch3),Dmamuxch3Val::uart1Transmit> uart1Transmit{};
            constexpr Register::FieldValue<decltype(dmamuxch3),Dmamuxch3Val::i2s1Channel0> i2s1Channel0{};
            constexpr Register::FieldValue<decltype(dmamuxch3),Dmamuxch3Val::ssp1Transmit> ssp1Transmit{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 4.
        enum class Dmamuxch4Val {
            timer1Match1=0x00000000,     ///<Timer 1 match 1
            uart1Receive=0x00000001,     ///<UART1 receive
            i2s1Channel1=0x00000002,     ///<I2S1 channel 1
            ssp1Receive=0x00000003,     ///<SSP1 receive
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Dmamuxch4Val> dmamuxch4{}; 
        namespace Dmamuxch4ValC{
            constexpr Register::FieldValue<decltype(dmamuxch4),Dmamuxch4Val::timer1Match1> timer1Match1{};
            constexpr Register::FieldValue<decltype(dmamuxch4),Dmamuxch4Val::uart1Receive> uart1Receive{};
            constexpr Register::FieldValue<decltype(dmamuxch4),Dmamuxch4Val::i2s1Channel1> i2s1Channel1{};
            constexpr Register::FieldValue<decltype(dmamuxch4),Dmamuxch4Val::ssp1Receive> ssp1Receive{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 5.
        enum class Dmamuxch5Val {
            timer2Match0=0x00000000,     ///<Timer 2 match 0
            usart2Transmit=0x00000001,     ///<USART2 transmit
            ssp1Transmit=0x00000002,     ///<SSP1 transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Dmamuxch5Val> dmamuxch5{}; 
        namespace Dmamuxch5ValC{
            constexpr Register::FieldValue<decltype(dmamuxch5),Dmamuxch5Val::timer2Match0> timer2Match0{};
            constexpr Register::FieldValue<decltype(dmamuxch5),Dmamuxch5Val::usart2Transmit> usart2Transmit{};
            constexpr Register::FieldValue<decltype(dmamuxch5),Dmamuxch5Val::ssp1Transmit> ssp1Transmit{};
        }
        ///Selects DMA to peripheral connection for DMA peripheral 6.
        enum class Dmamuxch6Val {
            timer2Match1=0x00000000,     ///<Timer 2 match 1
            usart2Receive=0x00000001,     ///<USART2 receive
            ssp1Receive=0x00000002,     ///<SSP1 receive
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Dmamuxch6Val> dmamuxch6{}; 
        namespace Dmamuxch6ValC{
            constexpr Register::FieldValue<decltype(dmamuxch6),Dmamuxch6Val::timer2Match1> timer2Match1{};
            constexpr Register::FieldValue<decltype(dmamuxch6),Dmamuxch6Val::usart2Receive> usart2Receive{};
            constexpr Register::FieldValue<decltype(dmamuxch6),Dmamuxch6Val::ssp1Receive> ssp1Receive{};
        }
        ///Selects DMA to peripheral connection for DMA peripheral 7.
        enum class Dmamuxch7Val {
            timer3MatchL0=0x00000000,     ///<Timer 3 match l 0
            usart3Transmit=0x00000001,     ///<USART3 transmit
            sctMatchOutput0=0x00000002,     ///<SCT match output 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Dmamuxch7Val> dmamuxch7{}; 
        namespace Dmamuxch7ValC{
            constexpr Register::FieldValue<decltype(dmamuxch7),Dmamuxch7Val::timer3MatchL0> timer3MatchL0{};
            constexpr Register::FieldValue<decltype(dmamuxch7),Dmamuxch7Val::usart3Transmit> usart3Transmit{};
            constexpr Register::FieldValue<decltype(dmamuxch7),Dmamuxch7Val::sctMatchOutput0> sctMatchOutput0{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 8.
        enum class Dmamuxch8Val {
            timer3Match1=0x00000000,     ///<Timer 3 match 1
            usart3Receive=0x00000001,     ///<USART3 receive
            sctMatchOutput1=0x00000002,     ///<SCT match output 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,Dmamuxch8Val> dmamuxch8{}; 
        namespace Dmamuxch8ValC{
            constexpr Register::FieldValue<decltype(dmamuxch8),Dmamuxch8Val::timer3Match1> timer3Match1{};
            constexpr Register::FieldValue<decltype(dmamuxch8),Dmamuxch8Val::usart3Receive> usart3Receive{};
            constexpr Register::FieldValue<decltype(dmamuxch8),Dmamuxch8Val::sctMatchOutput1> sctMatchOutput1{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 9.
        enum class Dmamuxch9Val {
            ssp0Receive=0x00000000,     ///<SSP0 receive
            i2s0Channel0=0x00000001,     ///<I2S0 channel 0
            sctMatchOutput1=0x00000002,     ///<SCT match output 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Dmamuxch9Val> dmamuxch9{}; 
        namespace Dmamuxch9ValC{
            constexpr Register::FieldValue<decltype(dmamuxch9),Dmamuxch9Val::ssp0Receive> ssp0Receive{};
            constexpr Register::FieldValue<decltype(dmamuxch9),Dmamuxch9Val::i2s0Channel0> i2s0Channel0{};
            constexpr Register::FieldValue<decltype(dmamuxch9),Dmamuxch9Val::sctMatchOutput1> sctMatchOutput1{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 10.
        enum class Dmamuxch10Val {
            ssp0Transmit=0x00000000,     ///<SSP0 transmit
            i2s0Channel1=0x00000001,     ///<I2S0 channel 1
            sctMatchOutput0=0x00000002,     ///<SCT match output 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Dmamuxch10Val> dmamuxch10{}; 
        namespace Dmamuxch10ValC{
            constexpr Register::FieldValue<decltype(dmamuxch10),Dmamuxch10Val::ssp0Transmit> ssp0Transmit{};
            constexpr Register::FieldValue<decltype(dmamuxch10),Dmamuxch10Val::i2s0Channel1> i2s0Channel1{};
            constexpr Register::FieldValue<decltype(dmamuxch10),Dmamuxch10Val::sctMatchOutput0> sctMatchOutput0{};
        }
        ///Selects DMA to peripheral connection for DMA peripheral 11.
        enum class Dmamuxch11Val {
            ssp1Receive=0x00000000,     ///<SSP1 receive
            usart0Transmit=0x00000002,     ///<USART0 transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,Dmamuxch11Val> dmamuxch11{}; 
        namespace Dmamuxch11ValC{
            constexpr Register::FieldValue<decltype(dmamuxch11),Dmamuxch11Val::ssp1Receive> ssp1Receive{};
            constexpr Register::FieldValue<decltype(dmamuxch11),Dmamuxch11Val::usart0Transmit> usart0Transmit{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 12.
        enum class Dmamuxch12Val {
            ssp1Transmit=0x00000000,     ///<SSP1 transmit
            usart0Receive=0x00000002,     ///<USART0 receive
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Dmamuxch12Val> dmamuxch12{}; 
        namespace Dmamuxch12ValC{
            constexpr Register::FieldValue<decltype(dmamuxch12),Dmamuxch12Val::ssp1Transmit> ssp1Transmit{};
            constexpr Register::FieldValue<decltype(dmamuxch12),Dmamuxch12Val::usart0Receive> usart0Receive{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 13.
        enum class Dmamuxch13Val {
            adc0=0x00000000,     ///<ADC0
            ssp1Receive=0x00000002,     ///<SSP1 receive
            usart3Receive=0x00000003,     ///<USART3 receive
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,Dmamuxch13Val> dmamuxch13{}; 
        namespace Dmamuxch13ValC{
            constexpr Register::FieldValue<decltype(dmamuxch13),Dmamuxch13Val::adc0> adc0{};
            constexpr Register::FieldValue<decltype(dmamuxch13),Dmamuxch13Val::ssp1Receive> ssp1Receive{};
            constexpr Register::FieldValue<decltype(dmamuxch13),Dmamuxch13Val::usart3Receive> usart3Receive{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 14.
        enum class Dmamuxch14Val {
            adc1=0x00000000,     ///<ADC1
            ssp1Transmit=0x00000002,     ///<SSP1 transmit
            usart3Transmit=0x00000003,     ///<USART3 transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,Dmamuxch14Val> dmamuxch14{}; 
        namespace Dmamuxch14ValC{
            constexpr Register::FieldValue<decltype(dmamuxch14),Dmamuxch14Val::adc1> adc1{};
            constexpr Register::FieldValue<decltype(dmamuxch14),Dmamuxch14Val::ssp1Transmit> ssp1Transmit{};
            constexpr Register::FieldValue<decltype(dmamuxch14),Dmamuxch14Val::usart3Transmit> usart3Transmit{};
        }
        ///Select DMA to peripheral connection for DMA peripheral 15.
        enum class Dmamuxch15Val {
            dac=0x00000000,     ///<DAC
            sctMatchOutput3=0x00000001,     ///<SCT match output 3
            timer3Match0=0x00000003,     ///<Timer 3 match 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,Dmamuxch15Val> dmamuxch15{}; 
        namespace Dmamuxch15ValC{
            constexpr Register::FieldValue<decltype(dmamuxch15),Dmamuxch15Val::dac> dac{};
            constexpr Register::FieldValue<decltype(dmamuxch15),Dmamuxch15Val::sctMatchOutput3> sctMatchOutput3{};
            constexpr Register::FieldValue<decltype(dmamuxch15),Dmamuxch15Val::timer3Match0> timer3Match0{};
        }
    }
    namespace Noneetbcfg{    ///<ETB RAM configuration
        using Addr = Register::Address<0x40043128,0xfffffffe,0,unsigned>;
        ///Select SRAM interface
        enum class EtbVal {
            etbAccessesSramAt=0x00000000,     ///<ETB accesses SRAM at address 0x2000 C000.
            ahbAccessesSramAt=0x00000001,     ///<AHB accesses SRAM at address 0x2000 C000.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EtbVal> etb{}; 
        namespace EtbValC{
            constexpr Register::FieldValue<decltype(etb),EtbVal::etbAccessesSramAt> etbAccessesSramAt{};
            constexpr Register::FieldValue<decltype(etb),EtbVal::ahbAccessesSramAt> ahbAccessesSramAt{};
        }
    }
    namespace Nonecreg6{    ///<Chip configuration register 6
        using Addr = Register::Address<0x4004312c,0xfffe0fe8,0,unsigned>;
        ///Selects the Ethernet mode. Reset the ethernet after changing the PHY interface. All other settings are reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ethmode{}; 
        namespace EthmodeValC{
        }
        ///TBD
        enum class TimctrlVal {
            tbd=0x00000000,     ///<TBD
            tbd=0x00000001,     ///<TBD
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TimctrlVal> timctrl{}; 
        namespace TimctrlValC{
            constexpr Register::FieldValue<decltype(timctrl),TimctrlVal::tbd> tbd{};
            constexpr Register::FieldValue<decltype(timctrl),TimctrlVal::tbd> tbd{};
        }
        ///I2S0_TX_SCK input select
        enum class I2s0txsckinselVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S transmit mode register Table 753.
            audioPllForI2sTr=0x00000001,     ///<Audio PLL for I2S transmit clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,I2s0txsckinselVal> i2s0TxSckInSel{}; 
        namespace I2s0txsckinselValC{
            constexpr Register::FieldValue<decltype(i2s0TxSckInSel),I2s0txsckinselVal::i2SClockSelected> i2SClockSelected{};
            constexpr Register::FieldValue<decltype(i2s0TxSckInSel),I2s0txsckinselVal::audioPllForI2sTr> audioPllForI2sTr{};
        }
        ///I2S0_RX_SCK input select
        enum class I2s0rxsckinselVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S receive mode register Table 754.
            audioPllForI2sRe=0x00000001,     ///<Audio PLL for I2S receive clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,I2s0rxsckinselVal> i2s0RxSckInSel{}; 
        namespace I2s0rxsckinselValC{
            constexpr Register::FieldValue<decltype(i2s0RxSckInSel),I2s0rxsckinselVal::i2SClockSelected> i2SClockSelected{};
            constexpr Register::FieldValue<decltype(i2s0RxSckInSel),I2s0rxsckinselVal::audioPllForI2sRe> audioPllForI2sRe{};
        }
        ///I2S1_TX_SCK input select
        enum class I2s1txsckinselVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S transmit mode register Table 753.
            audioPllForI2sTr=0x00000001,     ///<Audio PLL for I2S transmit clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,I2s1txsckinselVal> i2s1TxSckInSel{}; 
        namespace I2s1txsckinselValC{
            constexpr Register::FieldValue<decltype(i2s1TxSckInSel),I2s1txsckinselVal::i2SClockSelected> i2SClockSelected{};
            constexpr Register::FieldValue<decltype(i2s1TxSckInSel),I2s1txsckinselVal::audioPllForI2sTr> audioPllForI2sTr{};
        }
        ///I2S1_RX_SCK input select
        enum class I2s1rxsckinselVal {
            i2SClockSelected=0x00000000,     ///<I2 S clock selected as defined by the I2S receive mode register Table 754.
            audioPllForI2sRe=0x00000001,     ///<Audio PLL for I2S receive clock MCLK input and MCLK output. The I2S must be configured in slave mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,I2s1rxsckinselVal> i2s1RxSckInSel{}; 
        namespace I2s1rxsckinselValC{
            constexpr Register::FieldValue<decltype(i2s1RxSckInSel),I2s1rxsckinselVal::i2SClockSelected> i2SClockSelected{};
            constexpr Register::FieldValue<decltype(i2s1RxSckInSel),I2s1rxsckinselVal::audioPllForI2sRe> audioPllForI2sRe{};
        }
        ///EMC_CLK divided clock select (see Section 20.1).
        enum class EmcclkselVal {
            emcClkDivNotDivi=0x00000000,     ///<EMC_CLK_DIV not divided.
            emcClkDivDivided=0x00000001,     ///<EMC_CLK_DIV divided by 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,EmcclkselVal> emcClkSel{}; 
        namespace EmcclkselValC{
            constexpr Register::FieldValue<decltype(emcClkSel),EmcclkselVal::emcClkDivNotDivi> emcClkDivNotDivi{};
            constexpr Register::FieldValue<decltype(emcClkSel),EmcclkselVal::emcClkDivDivided> emcClkDivDivided{};
        }
    }
    namespace Nonechipid{    ///<Part ID
        using Addr = Register::Address<0x40043200,0x00000000,0,unsigned>;
        ///TBD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
}
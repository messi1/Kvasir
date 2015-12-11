#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Alternate function I/O
    namespace Noneevcr{    ///<Event Control Register
          (AFIO_EVCR)
        using Addr = Register::Address<0x40010000,0xffffff00,0,unsigned>;
        ///Pin selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pin{}; 
        namespace PinValC{
        }
        ///Port selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> port{}; 
        namespace PortValC{
        }
        ///Event Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> evoe{}; 
        namespace EvoeValC{
        }
    }
    namespace Nonemapr{    ///<AF remap and debug I/O configuration
          register (AFIO_MAPR)
        using Addr = Register::Address<0x40010004,0x881e0000,0,unsigned>;
        ///SPI1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spi1Remap{}; 
        namespace Spi1remapValC{
        }
        ///I2C1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> i2c1Remap{}; 
        namespace I2c1remapValC{
        }
        ///USART1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usart1Remap{}; 
        namespace Usart1remapValC{
        }
        ///USART2 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> usart2Remap{}; 
        namespace Usart2remapValC{
        }
        ///USART3 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> usart3Remap{}; 
        namespace Usart3remapValC{
        }
        ///TIM1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> tim1Remap{}; 
        namespace Tim1remapValC{
        }
        ///TIM2 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tim2Remap{}; 
        namespace Tim2remapValC{
        }
        ///TIM3 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tim3Remap{}; 
        namespace Tim3remapValC{
        }
        ///TIM4 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> tim4Remap{}; 
        namespace Tim4remapValC{
        }
        ///CAN1 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,13),Register::ReadWriteAccess,unsigned> can1Remap{}; 
        namespace Can1remapValC{
        }
        ///Port D0/Port D1 mapping on
              OSCIN/OSCOUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd01Remap{}; 
        namespace Pd01remapValC{
        }
        ///Set and cleared by
              software
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim5ch4Iremap{}; 
        namespace Tim5ch4iremapValC{
        }
        ///Ethernet MAC I/O remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ethRemap{}; 
        namespace EthremapValC{
        }
        ///CAN2 I/O remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> can2Remap{}; 
        namespace Can2remapValC{
        }
        ///MII or RMII selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> miiRmiiSel{}; 
        namespace MiirmiiselValC{
        }
        ///Serial wire JTAG
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> swjCfg{}; 
        namespace SwjcfgValC{
        }
        ///SPI3/I2S3 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> spi3Remap{}; 
        namespace Spi3remapValC{
        }
        ///TIM2 internal trigger 1
              remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> tim2itr1Iremap{}; 
        namespace Tim2itr1iremapValC{
        }
        ///Ethernet PTP PPS remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ptpPpsRemap{}; 
        namespace PtpppsremapValC{
        }
    }
    namespace Noneexticr1{    ///<External interrupt configuration register 1
          (AFIO_EXTICR1)
        using Addr = Register::Address<0x40010008,0xffff0000,0,unsigned>;
        ///EXTI0 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti0{}; 
        namespace Exti0ValC{
        }
        ///EXTI1 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti1{}; 
        namespace Exti1ValC{
        }
        ///EXTI2 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti2{}; 
        namespace Exti2ValC{
        }
        ///EXTI3 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti3{}; 
        namespace Exti3ValC{
        }
    }
    namespace Noneexticr2{    ///<External interrupt configuration register 2
          (AFIO_EXTICR2)
        using Addr = Register::Address<0x4001000c,0xffff0000,0,unsigned>;
        ///EXTI4 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti4{}; 
        namespace Exti4ValC{
        }
        ///EXTI5 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti5{}; 
        namespace Exti5ValC{
        }
        ///EXTI6 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti6{}; 
        namespace Exti6ValC{
        }
        ///EXTI7 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti7{}; 
        namespace Exti7ValC{
        }
    }
    namespace Noneexticr3{    ///<External interrupt configuration register 3
          (AFIO_EXTICR3)
        using Addr = Register::Address<0x40010010,0xffff0000,0,unsigned>;
        ///EXTI8 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti8{}; 
        namespace Exti8ValC{
        }
        ///EXTI9 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti9{}; 
        namespace Exti9ValC{
        }
        ///EXTI10 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti10{}; 
        namespace Exti10ValC{
        }
        ///EXTI11 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti11{}; 
        namespace Exti11ValC{
        }
    }
    namespace Noneexticr4{    ///<External interrupt configuration register 4
          (AFIO_EXTICR4)
        using Addr = Register::Address<0x40010014,0xffff0000,0,unsigned>;
        ///EXTI12 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exti12{}; 
        namespace Exti12ValC{
        }
        ///EXTI13 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> exti13{}; 
        namespace Exti13ValC{
        }
        ///EXTI14 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> exti14{}; 
        namespace Exti14ValC{
        }
        ///EXTI15 configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> exti15{}; 
        namespace Exti15ValC{
        }
    }
    namespace Nonemapr2{    ///<AF remap and debug I/O configuration
          register
        using Addr = Register::Address<0x4001001c,0xfffff81f,0,unsigned>;
        ///TIM9 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tim9Remap{}; 
        namespace Tim9remapValC{
        }
        ///TIM10 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tim10Remap{}; 
        namespace Tim10remapValC{
        }
        ///TIM11 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tim11Remap{}; 
        namespace Tim11remapValC{
        }
        ///TIM13 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tim13Remap{}; 
        namespace Tim13remapValC{
        }
        ///TIM14 remapping
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> tim14Remap{}; 
        namespace Tim14remapValC{
        }
        ///NADV connect/disconnect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fsmcNadv{}; 
        namespace FsmcnadvValC{
        }
    }
}
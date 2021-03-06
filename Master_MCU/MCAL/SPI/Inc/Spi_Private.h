 /******************************************************
 *	Author		: SRR&MO
 *  Description	:
 ********************************************************/
#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H

#include "Std_Types.h"

#define SPI_SPCR_REG 			(*(volatile u8*)0x2D)
#define SPI_SPSR_REG			(*(volatile u8*)0x2E)
#define SPI_SPDR_REG			(*(volatile u8*)0x2F)

#define SPI_SPE_BIT_NO           	(6)
#define SPI_MSTR_BIT_NO				(4)
#define SPI_SPIF_BIT_NO				(7)

#endif  /* SPI_PRIVATE_H */

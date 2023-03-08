/*****************************************************************************
 * @Author                : Omar MEGAHED<omar.megahed@valeo.com>             *
 * @CreatedDate           : 2023-03-09 00:37:40                              *
 * @LastEditors           : Omar MEGAHED<omar.megahed@valeo.com>             *
 * @LastEditDate          : 2023-03-09 00:37:47                              *
 * @FilePath              : bit_math.h                                       *
 ****************************************************************************/


#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define   SET_BIT(reg,bit)                   ((reg)|=(1u<<(bit)))
#define   CLEAR_BIT(reg,bit)                 ((reg)&= ~(1u<<(bit)))
#define   IS_BIT_SET(reg,bit)                (((reg) & (1u<<(bit)))>>(bit))
#define   IS_BIT_CLEAR(reg,bit)              (!IS_BIT_SET(reg,bit))
#define   TOGGEL_BIT(reg,bit)                ((reg)^=(1u<<(bit)))
#define   CHECK_BIT(reg,bit)                 ((reg>>bit)&(1u))
#define   REG_BIT_CONFIG(reg ,bit,value)     (reg = ((reg) & (~(1<<bit))) | (((value) & (1u)) << (bit)))

#endif

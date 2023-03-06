/**
 * @author Omar Megahed 
 * @email omar-megahed@elarabygroup.com
 * @create date 2022-05-23 22:53:58
 * @modify date 2022-05-23 22:53:58
 * @desc [MACROS]
 */
#ifndef MACROS_H_
#define MACROS_H_

#define   SET_BIT(reg,bit)                   ((reg)|=(1u<<(bit)))
#define   CLEAR_BIT(reg,bit)                 ((reg)&= ~(1u<<(bit)))
#define   IS_BIT_SET(reg,bit)                (((reg) & (1u<<(bit)))>>(bit))
#define   IS_BIT_CLEAR(reg,bit)              (!IS_BIT_SET(reg,bit))
#define   TOGGEL_BIT(reg,bit)                ((reg)^=(1u<<(bit)))
#define   CHECK_BIT(reg,bit)                 ((reg>>bit)&(1u))
#define   REG_BIT_CONFIG(reg ,bit,value)     (reg = ((reg) & (~(1<<bit))) | (((value) & (1u)) << (bit)))

#endif

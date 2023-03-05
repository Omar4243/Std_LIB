/**
 * @author Omar Megahed 
 * @email omar-megahed@elarabygroup.com
 * @create date 2022-05-24 15:24:10
 * @modify date 2022-05-24 15:24:10
 * @desc   std types
 */
#ifndef STD_TYPES_
#define STD_TYPES_

#include <stdbool.h>
//#include <stdlib.h>


typedef enum{
 DISABLE=0x00,
 ENABLE=!DISABLE,
}functional_state_t;

typedef enum{
    LOW=0X00,
    HIGH=!LOW,
}logic_lvl_t;

typedef enum
{
  FLAG_IS_RESET=0,
  FLAG_IS_SET,
}flag_status_t;

#define LOW  (0U)
#define HIGH (1U)

#endif

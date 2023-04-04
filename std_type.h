/*****************************************************************************
 * @Author                : Omar MEGAHED<omar.megahed@valeo.com>             *
 * @CreatedDate           : 2023-03-09 00:37:28                              *
 * @LastEditors           : Islam Tarek<islam.tarek@valeo.com>               *
 * @LastEditDate          : 2023-04-04 16:21:08                              *
 * @FilePath              : std_type.h                                       *
 ****************************************************************************/


#ifndef _STD_TYPES_
#define _STD_TYPES_
/******************************************************************************/
/* !Comment  : functional type                                                */
/* !Range    : DISABLE, ENABLE                                                */
/******************************************************************************/
typedef enum{
 DISABLE=0,
 ENABLE=!DISABLE,
}std_FunctionalState_t;

/******************************************************************************/
/* !Comment  : logicState type                                                */
/* !Range    : LOW, HIGH                                                      */
/******************************************************************************/
typedef enum{
    LOW=0,
    HIGH=!LOW,
}std_logicState_t;

/******************************************************************************/
/* !Comment  : Boolean type                                                   */
/* !Range    : TRUE, FALSE                                                    */
/******************************************************************************/
typedef enum
{
  FALSE = 0,
  TRUE = !FALSE,
} std_Boolean_t;

/******************************************************************************/
/* !Comment  : Standard Unsigned Byte                                         */
/* !Range    : 0..255                                                         */                                     
/******************************************************************************/
typedef unsigned char u8;

/******************************************************************************/
/* !Comment  : Standard Unsigned Word                                         */
/* !Range    : 0..65535                                                       */
/******************************************************************************/
typedef unsigned short int u16;

/******************************************************************************/
/* !Comment  : Standard Unsigned Long Word                                    */
/* !Range    : 0..4294967295                                                  */
/******************************************************************************/
typedef unsigned long int u32;

/******************************************************************************/
/* !Comment  : Standard Unsigned Long long Word                               */
/* !Range    : 0..18446744073709551615                                        */
/******************************************************************************/
typedef unsigned long long int u64;

/******************************************************************************/
/* !Comment  : Standard Signed Byte                                           */
/* !Range    : -128..127                                                      */
/******************************************************************************/
typedef signed char s8;

/******************************************************************************/
/* !Comment  : Standard Signed Word                                           */
/* !Range    : -32768..32767                                                  */
/******************************************************************************/
typedef signed short int s16;

/******************************************************************************/
/* !Comment  : Standard Signed Long Word                                      */
/* !Range    : -2147483648..2147483647                                        */
/******************************************************************************/
typedef signed long int s32;

/******************************************************************************/
/* !Comment  : Pointer to Standard Unsigned Byte                              */
/* !Range    : 0..255                                                         */                                      
/******************************************************************************/
typedef u8* pu8;

/******************************************************************************/
/* !Comment  : Pointer to Standard Unsigned Word                              */
/* !Range    : 0..65535                                                       */
/******************************************************************************/

typedef u16* pu16;

/******************************************************************************/
/* !Comment  : Pointer to Standard Unsigned Long Word                         */
/* !Range    : 0..4294967295                                                  */
/******************************************************************************/

typedef u32* pu32;

/******************************************************************************/
/* !Comment  : Pointer to Standard Signed Byte                                */
/* !Range    : -128..127                                                      */
/******************************************************************************/

typedef s8* ps8;

/******************************************************************************/
/* !Comment  : Pointer to Standard Signed Word                                */
/* !Range    : -32768..32767                                                  */
/******************************************************************************/

typedef s16* ps16;

/******************************************************************************/
/* !Comment  : Pointer to Standard Signed Long Word                           */
/* !Range    : -2147483648..2147483647                                        */
/******************************************************************************/

typedef s32* ps32;

/******************************************************************************/
/* !Comment  : Type definition for byte and bit access                        */
/* !Range    : union                                                          */
/******************************************************************************/
typedef union
{
  struct
  {
    u8 u8b0 :1; /* !comment : lsb (least significant bit)*/
    u8 u8b1 :1; /* !comment : BIT 1*/
    u8 u8b2 :1; /* !comment : BIT 2*/
    u8 u8b3 :1; /* !comment : BIT 3*/
    u8 u8b4 :1; /* !comment : BIT 4*/
    u8 u8b5 :1; /* !comment : BIT 5*/
    u8 u8b6 :1; /* !comment : BIT 6*/
    u8 u8b7 :1; /* !comment : msb (most significant bit)*/
  } strBit; /* !comment : for bit  access */
  u8 u8Byte; /* !comment : for byte access */
} std_u8port_t;

/* !Comment  : Type definition for short, byte and bit access                 */
typedef union
{
  struct
  {
    u8 u8b0 :1; /* !comment : lsb (least significant bit)*/
    u8 u8b1 :1; /* !comment : BIT 1*/
    u8 u8b2 :1; /* !comment : BIT 2*/
    u8 u8b3 :1; /* !comment : BIT 3*/
    u8 u8b4 :1; /* !comment : BIT 4*/
    u8 u8b5 :1; /* !comment : BIT 5*/
    u8 u8b6 :1; /* !comment : BIT 6*/
    u8 u8b7 :1; /* !comment : BIT 7*/
    u8 u8b8 :1; /* !comment : BIT 8*/
    u8 u8b9 :1; /* !comment : BIT 9*/
    u8 u8b10 :1; /* !comment : BIT 10*/
    u8 u8b11 :1; /* !comment : BIT 11*/
    u8 u8b12 :1; /* !comment : BIT 12*/
    u8 u8b13 :1; /* !comment : BIT 13*/
    u8 u8b14 :1; /* !comment : BIT 14*/
    u8 u8b15 :1; /* !comment : msb (most significant bit)*/
  } strBit; /* !comment : for bit  access*/
  struct
  {
    u8 u8low; /* !comment : Least significant byte*/
    u8 u8high; /* !comment : Most significant byte*/
  } strByte; /* !comment : for byte access*/
  u16 u16Word; /* !comment : for word access*/
} std_u16port_t;
/******************************************************************************/
/********************************** zone define *******************************/
/******************************************************************************/
/*!commint: min u8 value*/
#define	STD_u8MIN_VALUE	((u8)0)

/*!commint: max u8 value*/
#define STD_u8MAX_VALUE	((u8)255)

/*!commint: min s8 value*/
#define STD_s8MIN_VALUE	((s8)-128)

/*!commint: max s8 value*/
#define STD_s8MAX_VALUE	((s8)127)

/*!commint: min u16 value*/                          
#define STD_u16MIN_VALUE	((u16)0)

/*!commint: max u16 value*/
#define STD_u16MAX_VALUE	((u16)65535)

/*!commint: min u16 value*/
#define STD_s16MIN_VALUE	((s16)-32768)

/*!commint: max s16 value*/
#define STD_s16MAX_VALUE	((s16)32767)

/*!commint: min u32 value*/
#define STD_u32MIN_VALUE	((u32)0)

/*!commint: max u32 value*/
#define STD_u32MAX_VALUE ((u32)4294967295UL)

/*!commint: max s32 value*/
#define STD_s32MAX_VALUE ((s32)2147483647)

/*!commint: min s32 value*/
#define STD_s32MIN_VALUE	((s32)-2147483647-1)

/******************************************************************************/
/* !Comment  : Definition of the value of Null pointer                        */
/* !Range    : 0..0                                                           */
/******************************************************************************/
#define STD_NULL               ((void*)0)

/******************************************************************************/
/* !Comment  : Definition for Error type values                               */
/* !Range    : STD_OK..STD_IN_PROGRESS                                        */
/******************************************************************************/
typedef enum
{
  STD_OK = (u8)0,
  STD_NOK,
  STD_NULL_POINTER,
  STD_INDEX_OUT_OF_RANGE,
  STD_NO_MASTER_CHANNEL,
  STD_READ_ERROR,
  STD_WRITE_ERROR,
  STD_UNDEFINED_ERROR,
  STD_NOT_VALID_VALUE,
  STD_IN_PROGRESS        /* Error is not available, wait for availability */
} std_errorStatus_t;

#endif

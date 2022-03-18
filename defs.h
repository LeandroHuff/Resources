/**
 * @brief       Usefull definition to include into all source code files.
 * @file        defs.h - Source code filename.
 * @author      Leandro Daniel Huff - leandrohuff@programmer.net
 * @date        2022/03/15 - Source code date.
 * @version     0.0.1 - Source code version.
 * @copyright   Creative Commons Legal Code.

                CC0 1.0 Universal

                CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
                LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
                ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
                INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
                REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
                PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
                THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
                HEREUNDER.
 */

<<<<<<< HEAD
#ifndef __DEFS_H__
#define __DEFS_H__

=======

#ifndef __DEFS_H__
#define __DEFS_H__
>>>>>>> 6102c1d1c92f655d7f2e59915c0c4a8c992b375f

/******************************************************************************
    INCLUDES (LIBS/SYSTEM)
******************************************************************************/
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
<<<<<<< HEAD
#include "text.h"
=======
>>>>>>> 6102c1d1c92f655d7f2e59915c0c4a8c992b375f

/******************************************************************************
    INCLUDES (USER)
******************************************************************************/


/******************************************************************************
    DEFINES - FOR GLOBAL/SYSTEM USE
******************************************************************************/

/**
	@brief Declare some intuitive values for generic use.
*/
#define ZERO 0UL	//!< Value zero for generic use.
#define ONE  1UL	//!< Value one for generic use.

/**
 * @brief Macros used to define structures and buffers.
 */
#define DEF_INT(type, var) type var = 0; //!< Declare an integer variable on memory and clear the space.
#define DEF_FLOAT(type, var) type var = 0.0f; //!< Declare a float variable on memory and clear the space.
#define DEF_STRUCT(st, var) st var = {0}; //!< Declare a structure on memory and clear the space.
#define DEF_BUFFER(type, buffer, elements) type buffer[elements];//!< Declare a buffer (vector) on memory.
#define CLR_BUFFER(buffer) memset(buffer, ZERO, sizeof(buffer)); //!< Clear buffer memory space.
#define CLR_MEMORY(ptr,size) memset(ptr, ZERO, size); //!< Clear buffer memory space pointed by ptr.

/**
 * @brief Macros used to alloc block memory or release them.
 */
#define MALLOC(size) malloc(size);                          //!< Alloc memory for data size.
#define CALLOC(type,num) (type*)calloc(num, sizeof(type));  //!< Alloc memory for a num of data type size and clear itself.
#define FREE(ptr) if(ptr != NULL) { free(ptr);ptr = NULL; } //!< Check valid pointer, release memory block and set pointer to NULL.

/**
 * @brief Macro to calc minimum and maximum values for an signed and unsigned integer type (8, 16, 32, 64 bits).
 */
#define MIN_SIGNED_VALUE(var) (-((2 ^ (sizeof( var ) * 8)) / 2))     //!< Calc minimum value of a signed integer variable.
#define MAX_SIGNED_VALUE(var)   ((2 ^ (sizeof( var ) * 8)) / 2 - 1)  //!< Calc maximum value of a signed integer variable.
#define MAX_UNSIGNED_VALUE(var) ((2 ^ (sizeof( var ) * 8)) - 1)      //!< Calc maximum value of an unsigned integer variable.


/**
 * @brief Macros used to check function parameters
 */
#define UNUSED(var) ((void)var)                                         //!< Declare an unused variable or function parameter.
#define CHECK_NULL_PTR(ptr,code)       if(ptr  == NULL){ return code; } //!< Check null parameter pointer and return code.
#define CHECK_DIFF_VALUE(var,val,code) if(var != val)  { return code; } //!< Compare parameter value and return code if different.
#define CHECK_EQU_VALUE(var,val,code)  if(var == val)  { return code; } //!< Compare parameter value and return code if equal.

#define CHECK_NULL(p1,r)               if  (p1 == NULL)                                                                   return r
#define CHECK_NULL_2(p1,p2,r)          if( (p1 == NULL) || (p2 == NULL) )                                                 return r
#define CHECK_NULL_3(p1,p2,p3,r)       if( (p1 == NULL) || (p2 == NULL) || (p3 == NULL) )                                 return r
#define CHECK_NULL_4(p1,p2,p3,P4,r)    if( (p1 == NULL) || (p2 == NULL) || (p3 == NULL) || (p4 == NULL) )                 return r
#define CHECK_NULL_5(p1,p2,p3,P4,P5,r) if( (p1 == NULL) || (p2 == NULL) || (p3 == NULL) || (p4 == NULL) || (p5 == NULL) ) return r


/******************************************************************************
    TYPEDEFS - FOR GLOBAL/SYSTEM USE
******************************************************************************/
/**
 * @brief   Embedded user type declaration from 8-bit up to 64-bit
 *          include integers, float and double point types.
 */
typedef signed char             s8_t; //!<  8-bit signed   integer type.
typedef unsigned char           u8_t; //!<  8-bit unsigned integer type.
typedef signed short int       s16_t; //!< 16-bit signed   integer type.
typedef unsigned short int     u16_t; //!< 16-bit unsigned integer type.
typedef signed int             s32_t; //!< 32-bit signed   integer type.
typedef unsigned int           u32_t; //!< 32-bit unsigned integer type.
typedef signed long long int   s64_t; //!< 64-bit signed   integer type.
typedef unsigned long long int u64_t; //!< 64-bit unsigned integer type.
typedef float                  f32_t; //!< 32-bit floating point   type.
typedef double                 f64_t; //!< 64-bit floating point   type.

/**
 * @brief   Friendly user type declaration, for specific and intuitive use.
 */
typedef unsigned char           BYTE;  //!<  8-bit unsigned integer type.
typedef unsigned short int      WORD;  //!< 16-bit unsigned integer type.
typedef unsigned long int      DWORD;  //!< 32-bit unsigned integer type.
typedef unsigned long long int QWORD;  //!< 64-bit unsigned integer type.

#if !defined(FALSE) && !defined(TRUE)
typedef enum
{
<<<<<<< HEAD
   FALSE = 0,                          //!< 8-bit for false
   TRUE  = 1,                          //!< 8-bit for true
} __attribute__((__packed__)) boolean_t;  //!< Generic boolean type
#endif



=======
   FALSE = (BYTE)ZERO,						//!< 8-bit for false
   TRUE  = (BYTE)ONE,						//!< 8-bit for true
} __attribute__((__packed__)) bool_t;	//!< Generic boolean type
#endif

>>>>>>> 6102c1d1c92f655d7f2e59915c0c4a8c992b375f
#endif // #ifndef __DEFS_H_

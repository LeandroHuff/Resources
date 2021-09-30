/**
 * @brief       Header file for most usefeull macros and data definition,
 *              it was implemented to be included into any software implementation.
 * @file        defs.h - Source code filename.
 * @author      Leandro Daniel Huff - leandrohuff@programmer.net
 * @date        2021/04/27 - Source code date.
 * @version     1.0.0 - Source code version.
 * @copyright   Not copyrighted software, it has not warrant.
 */

#ifndef DEFS_H
#define DEFS_H

/******************************************************************************
    INCLUDES (LIBS/SYSTEM)
******************************************************************************/
#include <stddef.h>     //For
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

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
#define DEF_BUFFER(type, buffer, elements) type buffer[elements]; memset(buffer, ZERO, sizeof(buffer)); //!< Declare a buffer (vector) on memory and clear the memory space.

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
#define UNUSED(var)                                                     //!< Declare an unused variable or function parameter.
#define CHECK_NULL_PTR(ptr,code)       if(ptr  == NULL){ return code; } //!< Check null parameter pointer and return code.
#define CHECK_DIFF_VALUE(var,val,code) if(var != val)  { return code; } //!< Compare parameter value and return code if different.
#define CHECK_EQU_VALUE(var,val,code)  if(var == val)  { return code; } //!< Compare parameter value and return code if equal.


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
typedef enum bool_t
{
   FALSE = (BYTE)ZERO,						//!< 8-bit for false
   TRUE  = (BYTE)ONE,						//!< 8-bit for true
} __attribute__((__packed__)) bool_t;	//!< Generic boolean type
#endif



#endif //DEFS_H

/*
 * STD_Types.h
 *
 *  Created on: Sep 20, 2019
 *      Author: abdelqader
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

typedef unsigned char         uint8;          /*           0 .. 255             */
typedef signed char           sint8;          /*        -128 .. +127            */

typedef unsigned short        uint16;         /*           0 .. 65535           */
typedef signed short          sint16;         /*      -32768 .. +32767          */

typedef unsigned long         uint32;         /*           0 .. 4294967295      */
typedef signed long           sint32;         /* -2147483648 .. +2147483647     */

typedef unsigned long long    uint64;         /*       0..18446744073709551615  */
typedef signed long long      sint64;

typedef float                 float32;
typedef double                float64;

typedef enum { NOK, OK } STD_Fun_t;


#endif  /*STD_TYPES_H_*/
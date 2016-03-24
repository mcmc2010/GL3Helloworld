//
//  baseT.h
//  GL3Helloworld
//
//  Created by enos sariel on 16/3/25.
//  Copyright © 2016年 enos sariel. All rights reserved.
//

#ifndef __baseT_H__
#define __baseT_H__

#pragma once

//
#define VOID						void


//
#define _int64						int64_t
#define _int32						int32_t
#define _int16						int16_t
#define _int8						int8_t

#define __int64						int64_t
#define __int32						int32_t
#define __int16						int16_t
#define __int8						int8_t

//
#if defined __x86_64__
typedef int64_t						LONG_PTR;
typedef uint64_t					ULONG_PTR;
#else
typedef int							LONG_PTR;
typedef unsigned int				ULONG_PTR;
#endif


#endif /* __baseT_H__ */
//
//  macros.h
//  XMProject
//
//  Created by wukexiu on 16/12/12.
//  Copyright © 2016年 wukexiu. All rights reserved.
//

#ifndef macros_h
#define macros_h

#define kKeyWindow [UIApplication sharedApplication].keyWindow
#define kScreen_Bounds [UIScreen mainScreen].bounds
#define kScreen_Width [UIScreen mainScreen].bounds.size.width
#define kScreen_Height [UIScreen mainScreen].bounds.size.height

#define IPHONE5_HEIGHT 568.0
#define IPHONE5_WIDTH 320.0
#define IPHONE6_HEIGHT 667.0
#define IPHONE6_WIDTH 375.0

//是否为4英寸
#define FourInch ([UIScreen mainScreen].bounds.size.height==568.0)
#define kDevice_Is_iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define kDevice_Is_iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define kDevice_Is_iPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)
#define kBadgeTipStr @"badgeTip"

#define XMUIColor(r, g, b ,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define XMUIColorHexInt(hexValue) XMUIColor(((CGFloat)((hexValue & 0xFF0000) >> 16)),((CGFloat)((hexValue & 0xFF00) >> 8)),((CGFloat)(hexValue & 0xFF)),1.0)

#endif /* macros_h */

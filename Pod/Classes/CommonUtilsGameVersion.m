//  Created by Karen Lusinyan on 14/04/15.
//  Copyright (c) 2015 Karen Lusinyan. All rights reserved.

#define kLibVersion @"0.1.0"

#import "CommonUtilsGameVersion.h"

@implementation CommonUtilsGameVersion

+ (void)load
{
    static dispatch_once_t pred = 0;
    dispatch_once(&pred, ^{
        NSLog(@"LibCommonUtilsGame [%@]", kLibVersion);
    });
}

@end

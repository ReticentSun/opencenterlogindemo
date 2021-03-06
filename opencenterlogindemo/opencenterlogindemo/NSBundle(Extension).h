//
//  DASettingViewController.h
//  DoubanAlbum
//
//  Created by Tonny on 12-12-12.
//  Copyright (c) 2012年 SlowsLab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (extension)

+ (NSString *)bundleApplicationId;

+ (NSString *)bundleNameString;

+ (NSString *)bundleDisplayNameString;

+ (NSString *)bundleShortVersionString;

+ (NSString *)bundleBuildVersionString;

+ (NSString *)bundleIdentifierString;

+ (NSArray *)bundleURLTypes;

/////
+ (NSString *)bundleUnderlineVersionString;

+ (NSString *)bundleFullVersionString;

+ (NSString*)stringFromBundleFile:(NSString*)fileName;

+ (NSData*)dataFromBundleFile:(NSString*)fileName;

+ (NSString *)materailVersion ;
@end

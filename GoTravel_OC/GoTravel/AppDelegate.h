//
//  AppDelegate.h
//  GoTravel
//
//  Created by xuwen on 2017/3/31.
//  Copyright © 2017年 xuwen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GeTuiSdk.h"
#import <UMSocial.h>
#import <UMSocialWechatHandler.h>
#import <UMSocialQQHandler.h>
#import <UMSocialSinaHandler.h>
#import <UMSocialSinaSSOHandler.h>
#import "MPLocationManager.h"
#import "MPUmengHelper.h"
#import "LogInViewController.h"
#import "HomeViewController.h"
#import "JSPatchHelper.h"
#import "AdvertiseHelper.h"
#import "MPHomeViewController.h"
#import "SYSafeCategory.h"
#import "introductoryPagesHelper.h"
#import "iflyMSC/IFlyFaceSDK.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,UIAlertViewDelegate,GeTuiSdkDelegate>

@property (strong, nonatomic) UIWindow *window;

//登录页面
-(void)setupLoginViewController;
//跳转到首页
-(void)setupHomeViewController;
@end
